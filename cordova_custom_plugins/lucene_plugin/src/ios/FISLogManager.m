//
//  FISLogManager.h
//  Pinpoint Mobile
//
//  Created by king.wang@flatironssolutions.com on 16/5/2017.
//
//

#import "FISLogManager.h"

static NSString *EXTRACT_DIR = @"flatirons";
static NSString *LOG_FILE = @"ppmob.log.txt";

@implementation FISLogManager

+ (instancetype)sharedManager {
    static id sharedMyManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedMyManager = [[self alloc] init];
    });
    return sharedMyManager;
}

-(id)init {
    self = [super init];
    if (self) {
        NSFileManager *fileManager = [NSFileManager defaultManager];
        NSString *documentPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex: 0];
        NSString *flatironsPath = [documentPath stringByAppendingPathComponent:EXTRACT_DIR];
        BOOL isDir = TRUE;
        BOOL isDirExist = [fileManager fileExistsAtPath:flatironsPath isDirectory:&isDir];
        if(!isDirExist){
            BOOL createDir = [fileManager createDirectoryAtPath:flatironsPath withIntermediateDirectories:YES attributes:nil error:nil];
            if(!createDir){
                NSLog(@"Documents/flatirons folder create Failed, Unable to wirte log");
            }else {
                NSLog(@"Documents/flatirons folder create Success.");
            }
        }
        _logPath = [flatironsPath stringByAppendingPathComponent:LOG_FILE];
        if([fileManager fileExistsAtPath:_logPath] == NO){
            BOOL createLog = [fileManager createFileAtPath:_logPath contents:nil attributes:nil];
            if(!createLog){
                NSLog(@"Documents/flatirons/ppmob.log.txt log file create Failed, Unable to wirte log");
            }else {
                NSLog(@"Documents/flatirons/ppmob.log.txt log file create Success.");
            }
        }
    }
    return self;
}

-(void)log:(NSString *) msg{
    NSFileHandle *outputFileHandle = [NSFileHandle fileHandleForWritingAtPath:_logPath];
    @try {
        [outputFileHandle seekToEndOfFile];
        [outputFileHandle writeData:[[NSString stringWithFormat:@"%@\n",msg] dataUsingEncoding:NSUTF8StringEncoding]];
    }@catch (NSException *exception) {
        NSLog(@"Data Import Plugin, Error happens while writing message to log file");
    }@finally {
        [outputFileHandle closeFile];
    }
}

-(NSString *) getCurrentDate{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateStyle:NSDateFormatterMediumStyle];
    [dateFormatter setTimeStyle:NSDateFormatterMediumStyle];
    [dateFormatter setTimeZone:[NSTimeZone localTimeZone]];
    NSString *currentTime = [dateFormatter stringFromDate:[NSDate date]];
    dateFormatter = nil;
    return currentTime;
}

-(NSString *) getCurrentStandardDate{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateStyle:NSDateFormatterMediumStyle];
    [dateFormatter setTimeStyle:NSDateFormatterMediumStyle];
    [dateFormatter setTimeZone:[NSTimeZone localTimeZone]];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss Z"];
    NSString *currentTime = [dateFormatter stringFromDate:[NSDate date]];
    dateFormatter = nil;
    return currentTime;
}
@end
