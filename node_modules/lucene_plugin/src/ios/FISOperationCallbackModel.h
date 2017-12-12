//
//  FISOperationCallbackModel.h
//  Pinpoint Mobile
//
//  Created by king.wang@flatironssolutions.com on 26/06/2017.
//
//

#import <Foundation/Foundation.h>

@interface FISOperationCallbackModel : NSObject

@property (nonatomic, copy) NSString *bMsg;
@property (nonatomic, copy) NSString *bStatus;
@property (nonatomic, copy) NSString *bPercentage;
@property (nonatomic, copy) NSString *bTableId;
@property (nonatomic, copy) NSString *bLibId;
@property (nonatomic, copy) NSString *bPubId;
@property (nonatomic, copy) NSString *bRevNbr;
@property (nonatomic, copy) NSString *bPubTitle;

-(instancetype) initWithParam: (NSString*) bMsg
                      bStatus: (NSString*) bStatus
                  bPercentage: (NSString*) bPercentage
                     bTableId: (NSString*) bTableId
                       bLibId: (NSString*) bLibId
                       bPubId: (NSString*) bPubId
                      bRevNbr: (NSString*) bRevNbr
                    bPubTitle: (NSString*) bPubTitle;

@end
