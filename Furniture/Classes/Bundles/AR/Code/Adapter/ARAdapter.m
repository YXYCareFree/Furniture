//
//  ARAdapter.m
//  Furniture
//
//  Created by 杨肖宇 on 2017/4/5.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import "ARAdapter.h"
#import "NSString+MD5Addition.h"
#import "YXYGatewayApiService.h"
#import "ArchiverManager.h"

@implementation ARAdapter

- (void)getARList{
    //90610b50bc414eadb0e6c1e8751b72d4
    //可用3c48b092199141adbea1da14cb9f20f3
    NSDictionary * params = @{@"commodityCode":@"c302c823ae3f43258be495fa2cb820ff,3c48b092199141adbea1da14cb9f20f3"};
    YXYRequest * request = [YXYRequest new];
    
    request.apiName = @"/commodity/findCommodities";
    request.params = params;
    request.isCache = YES;
    NSString * cachePath = [AR_CACHES_PATH stringByAppendingPathComponent:[request.apiName stringFromMD5]];
    request.success = ^(YXYResponse * response, id cacheData){
        
        if (cacheData) {
            
            [[NSNotificationCenter defaultCenter] postNotificationName:GetARListDataSuccess object:cacheData];
        }
        
        if (!response.data) {
            return ;
        }
        [[NSNotificationCenter defaultCenter] postNotificationName:GetARListDataSuccess object:response.data];
        [ArchiverManager archiveNSArray:response.data toPath:cachePath];

    };
    
    request.failure = ^(YXYErrorResponse * errorResponse){
        NSLog(@"\n%s===failure\n", __FUNCTION__);
    };
    
    [APIREQUEST startRequest:request];
}
@end
