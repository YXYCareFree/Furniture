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

    NSDictionary * params = @{@"commodityCode":@"627cac7e4c584c6cbf9b5e6e91398dde,6537dacc092649928996d56666f12b59,57ebbacd75fb483e8a79bcec5b6f70e3,0a9f4ae8034342c48bf55b359a8f1683,3c48b092199141adbea1da14cb9f20f3,16d35c6edd0843ad97e3c19debbddd38,19d24f66d5274399abe7f92e426944c8,26caf68a7e674da6bb69563ea61c6cac,c01dd158b0a344b0aec53ac6fd9e0618,d48552eeed4d465a9beb3291a2612562"};
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
