//
//  YXYHTTPRequestClient.m
//  AFNet
//
//  Created by beyondSoft on 16/5/9.
//  Copyright © 2016年 beyondSoft. All rights reserved.
//

#import "YXYHTTPRequestClient.h"

static NSString * const baseUrl = BASE_URL;

@implementation YXYHTTPRequestClient

+ (instancetype)shareManager{

    static YXYHTTPRequestClient * shareManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{

        shareManager = [[self alloc] initWithBaseURL:[NSURL URLWithString:baseUrl]];
        shareManager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"text/html",@"text/plain",@"charset=UTF-8",@"Content-Type",@"application/json",nil];

    });
    return shareManager;
}

- (NSURLSessionDataTask *)postPath:(NSString *)URLString
                        apiVersion:(NSString *)version
                        parameters:(id)parameters
                           success:(void (^)(NSURLSessionDataTask * _Nonnull, id _Nullable))success
                           failure:(void (^)(NSURLSessionDataTask * _Nullable, NSError * _Nonnull))failure{
    
    NSURLSessionDataTask * task = [self POST:URLString parameters:parameters progress:^(NSProgress * _Nonnull uploadProgress) {
        
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        if (success) {
            success(task, responseObject);
        }
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        if (failure) {
            failure(task, error);
        }
    }];
    
    return task;
}

//-(AFHTTPRequestOperation *)getPath:(NSString *)URLString
//                        apiVersion:(NSString *)version
//                        parameters:(NSDictionary *)parameters
//                           success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
//                           failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure{
//    
//    NSURLRequest * request = [self requestHeaderForURL:URLString method:@"GET" apiVersion:version parameters:parameters];
//    AFHTTPRequestOperation * operation = [super HTTPRequestOperationWithRequest:request success:success failure:failure];
//    [[super operationQueue] addOperation:operation];
//    return operation;
//}
//
//-(AFHTTPRequestOperation *)postPath:(NSString *)URLString
//                         apiVersion:(NSString *)version
//                         parameters:(NSDictionary *)parameters
//                            success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
//                            failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure{
//
//    NSURLRequest *request = [self requestHeaderForURL:URLString method:@"POST" apiVersion:version parameters:parameters];
//    AFHTTPRequestOperation * opertation = [[AFHTTPRequestOperation alloc] initWithRequest:request];
//    opertation.responseSerializer = [[AFJSONResponseSerializer alloc] init];
//    NSSet *acceptableContentTypes = self.responseSerializer.acceptableContentTypes;
//    acceptableContentTypes = [acceptableContentTypes setByAddingObjectsFromArray:@[@"text/html", @"text/plain"]];
//    opertation.responseSerializer.acceptableContentTypes = acceptableContentTypes;
//
//    
//    [opertation setCompletionBlockWithSuccess:^(AFHTTPRequestOperation * operation, id responseObject) {
//
//        if (success) {
//            success(operation, responseObject);
//        }
//
//    } failure:^(AFHTTPRequestOperation * _Nonnull operation, NSError * _Nonnull error) {
//
//        if (failure) {
//            failure(operation, error);
//        }
//
//    }];
//    [[super operationQueue] addOperation:opertation];
//    return opertation;
//}
#pragma mark--设置请求头
//-(NSURLRequest *)requestHeaderForURL:(NSString *)URLString
//                               method:(NSString *)method
//                           apiVersion:(NSString *)version
//                          parameters:(NSDictionary *)parameters{
//
//    NSError *error = nil;
//    NSMutableURLRequest *request = [self.requestSerializer requestWithMethod:method URLString:[[NSURL URLWithString:URLString relativeToURL:self.baseURL] absoluteString] parameters:parameters error:&error];
//
//    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
//    [formatter setTimeZone:[NSTimeZone localTimeZone]];
//    [formatter setDateFormat:@"yyyy-MM-dd'T'HH:mm:ss.SSSZZZZZ"];
//    NSDate *serverTime = [NSDate date];
//
//    NSString * date = [formatter stringFromDate:serverTime];
////设置请求头
//    [request setValue:date forHTTPHeaderField:@"requestTime"];
//    
//    request.timeoutInterval = 10.0;
//    
//    return request;
//}

@end
