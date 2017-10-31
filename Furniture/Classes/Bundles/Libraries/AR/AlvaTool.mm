//
//  AlvaTool.m
//  AYWUnityLib
//
//  Created by 冯聪 on 2017/3/20.
//  Copyright © 2017年 FCcom. All rights reserved.
//

#import "AlvaTool.h"
#import "SDKTools.h"
#import "UnityAppController.h"
#import "UnityViewControllerBase.h"
#include "RegisterMonoModules.h"
#include "RegisterFeatures.h"
#include <csignal>

static const int constsection = 0;

static const UnityAppController *unityController;

static const SDKTools *sdkTool;


void UnityInitTrampoline();

@interface AlvaTool ()

@property (strong, nonatomic) UIWindow *unityWindow;

@end
@implementation AlvaTool

+ (AlvaTool *)sharedInstance
{
    static AlvaTool *sharedInstance = nil;
    static dispatch_once_t predicate;
    dispatch_once(&predicate, ^{
        sharedInstance = [[self alloc] init];
    });
    
    if (unityController == nil) {
        
        unityController = [[UnityAppController alloc] init];
    }
    
//    SDKTools *sdkTool = [SDKTools sharedInstance];
    
    return sharedInstance;
}


void mainStart(int argc, char* argv[] ){
    
    UnityInitTrampoline();
    UnityInitRuntime(argc, argv);
    
    RegisterMonoModules();
    NSLog(@"-> mainStart %p\n", &constsection);
    RegisterFeatures();
    
    std::signal(SIGPIPE, SIG_IGN);

}

- (id)getUnityController{

    return unityController;
}

- (UIView *)getUnityView{
    
    UnityDefaultViewController *unityViewController  = [[UnityDefaultViewController alloc] init];
    unityViewController.view = (UIView *)unityController.unityView;
    
    return unityViewController.view;
}

- (UIWindow *)getUnityWindow
{
    return unityController.window;
}

- (void)unityPause:(BOOL)pause
{
    UnityPause(pause);
}


-(UIWindow *)unityWindow
{
    return UnityGetMainWindow();
    
}

//-(void)showUnityWindow
//{
//    [self.unityWindow makeKeyAndVisible];
//}
//
//-(void)hideUnityWindow
//{
//    [self.window makeKeyAndVisible];
//    NSLog(@"showWindow%@",self.window);
//}
- (void)unityWindowWithBackgroundColor:(UIColor *)color{

    [unityController.window setBackgroundColor:color];

}


- (BOOL)app:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions{

    [unityController application:application didFinishLaunchingWithOptions:launchOptions];
    return YES;
}

- (void)appWillResignActive:(UIApplication *)application{

    [unityController applicationWillResignActive:application];
}

- (void)appDidEnterBackground:(UIApplication *)application{

    [unityController applicationDidEnterBackground:application];
}

- (void)appWillEnterForeground:(UIApplication *)application{
    [unityController applicationWillEnterForeground:application];

}

- (void)appDidBecomeActive:(UIApplication *)application{

    [unityController applicationDidBecomeActive:application];
}

- (void)appWillTerminate:(UIApplication *)application{
    [unityController applicationWillTerminate:application];

}

@end
