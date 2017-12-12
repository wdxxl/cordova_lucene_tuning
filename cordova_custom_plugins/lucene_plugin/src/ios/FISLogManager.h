//
//  FISLogManager.h
//  Pinpoint Mobile
//
//  Created by king.wang@flatironssolutions.com on 16/5/2017.
//
//

#import <Foundation/Foundation.h>

@interface FISLogManager : NSObject

@property (nonatomic, strong) NSString *logPath;
+(instancetype)sharedManager;
-(void)log:(NSString *) msg;
-(NSString *) getCurrentDate;
-(NSString *) getCurrentStandardDate;
@end
