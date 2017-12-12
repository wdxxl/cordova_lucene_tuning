//
//  FISOperationCallbackModel.m
//  Pinpoint Mobile
//
//  Created by king.wang@flatironssolutions.com on 26/06/2017.
//
//

#import "FISOperationCallbackModel.h"

@implementation FISOperationCallbackModel

-(instancetype) initWithParam: (NSString*) bMsg
                      bStatus: (NSString*) bStatus
                  bPercentage: (NSString*) bPercentage
                     bTableId: (NSString*) bTableId
                       bLibId: (NSString*) bLibId
                       bPubId: (NSString*) bPubId
                      bRevNbr: (NSString*) bRevNbr
                    bPubTitle: (NSString*) bPubTitle {
    if(self = [super init]){
        _bMsg = bMsg;
        _bStatus = bStatus;
        _bPercentage = bPercentage;
        _bTableId = bTableId;
        _bLibId = bLibId;
        _bPubId = bPubId;
        _bRevNbr = bRevNbr;
        _bRevNbr = bRevNbr;
        _bPubTitle = bPubTitle;
    }
    return self;
}
@end
