//
//  AlvaTool.h
//  AYWUnityLib
//
//  Created by 冯聪 on 2017/3/20.
//  Copyright © 2017年 FCcom. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlvaTool : NSObject

//- (void)showUnityWindow;
//- (void)hideUnityWindow;

//设置初始要显示的视图
@property (strong, nonatomic) UIViewController *unityDefaultVC;

// AR助手图片资源
@property (strong, nonatomic) NSArray *imageArr;


// 设置是否开启转屏
@property (assign, nonatomic) BOOL isRotate;

@property (assign, nonatomic) BOOL isStatusBarHidden;

+ (AlvaTool *)sharedInstance;

//main函数启动调用，初始方法
void mainStart(int argc, char* argv[]);

//挂起，开始unity
- (void)unityPause:(BOOL)pause;

//取得由UnityAppController创建的window
- (UIWindow *)getUnityWindow;

//修改UnityWindow的背景色
- (void)unityWindowWithBackgroundColor:(UIColor *)color;

//获取unityController
- (id)getUnityController;

// 获取unityView
- (UIView *)getUnityView;

- (BOOL)app:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (void)appWillResignActive:(UIApplication *)application;

- (void)appDidEnterBackground:(UIApplication *)application;

- (void)appWillEnterForeground:(UIApplication *)application;

- (void)appDidBecomeActive:(UIApplication *)application;

- (void)appWillTerminate:(UIApplication *)application;


@end
