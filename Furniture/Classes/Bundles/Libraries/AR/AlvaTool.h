//
//  AlvaTool.h
//  AYWUnityLib
//
//  Created by 冯聪 on 2017/3/20.
//  Copyright © 2017年 FCcom. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlvaTool : NSObject

- (void)showUnityWindow;
//- (void)hideUnityWindow;

//设置初始要显示的视图
@property (strong, nonatomic) UIViewController *unityDefaultVC;

+ (AlvaTool *)sharedInstance;

//main函数启动调用，初始方法
void mainStart(int argc, char* argv[]);

//挂起，开始unity
- (void)unityPause:(BOOL)pause;

//取得由UnityAppController创建的window
- (UIWindow *)getUnityWindow;

- (id)getUnityController;

- (UIView *)getUnityView;

- (BOOL)app:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (void)appWillResignActive:(UIApplication *)application;

- (void)appDidEnterBackground:(UIApplication *)application;

- (void)appWillEnterForeground:(UIApplication *)application;

- (void)appDidBecomeActive:(UIApplication *)application;

- (void)appWillTerminate:(UIApplication *)application;


@end
