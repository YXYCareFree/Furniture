//
//  YXYHTTPRequestClient.h
//  AFNet
//
//  Created by beyondSoft on 16/5/9.
//  Copyright © 2016年 beyondSoft. All rights reserved.
//

#import "AFHTTPSessionManager.h"

@interface YXYHTTPRequestClient : AFHTTPSessionManager

+ (instancetype)shareManager;

- (NSURLSessionDataTask *)postPath:(NSString *)URLString
                        apiVersion:(NSString *)version
                        parameters:(id)parameters
                           success:(void (^)(NSURLSessionDataTask * task, id _Nullable responseObject))success
                           failure:(void (^)(NSURLSessionDataTask * _Nullable task, NSError * error))failure;

@end
