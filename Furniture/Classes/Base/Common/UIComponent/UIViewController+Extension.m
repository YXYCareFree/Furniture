//
//  UIViewController+Extension.m
//  Furniture
//
//  Created by 王小娜 on 2017/1/20.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import "UIViewController+Extension.h"
#import "ControllerManager.h"
#import <objc/runtime.h>
#import "AlvaTool.h"

@implementation UIViewController (Extension)

+ (void)load{
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        
        Method viewWillAppear = class_getInstanceMethod(self, @selector(viewWillAppear:));
        Method cs_viewWillAppear = class_getInstanceMethod(self, @selector(cs_viewWillAppear:));
        
        method_exchangeImplementations(viewWillAppear, cs_viewWillAppear);
    });
}

- (void)cs_viewWillAppear:(BOOL)animated{
    
    [self cs_viewWillAppear:animated];
    NSString * class = NSStringFromClass([self class]);

    if ([class isEqualToString:@"YXYWebViewController"] || [class isEqualToString:@"HomeViewController"] || [class isEqualToString:@"MineViewController"] || [class isEqualToString:@"ARController"]) {
        [ControllerManager shareInstance].currentVC = self;
    }
    //    NSLog(@"\n******%@,\n%p\n", NSStringFromClass([self class]), self);
    //    NSLog(@"\n%p,\n%p\n", [ControllerManager shareInstance].currentVC, [ControllerManager shareInstance].homeVC);
}

//适用范围，tabbar的子视图都是NavigationController，其它情况可以根据情况调整
+ (UIViewController *)getCurrentViewController{
  
    return [ControllerManager shareInstance].currentVC;

    UIViewController * result = nil;
    UIWindow * window = [[UIApplication sharedApplication] keyWindow];
    //app的windowLevel是UIWindowLevelNormal，如果不是，找到是UIWindowLevelNormal的Window
    if (window.windowLevel != UIWindowLevelNormal) {
        
        NSArray * windows = [[UIApplication sharedApplication] windows];
        for (UIWindow * tempWindow in windows) {
            
            if (tempWindow.windowLevel == UIWindowLevelNormal) {
                window = tempWindow;
                break;
            }
        }
    }
    id nextResponder = nil;
    UIViewController * appRootVC = window.rootViewController;
    //如果是present上来的vc，则appRootVC.presentedViewController不为nil
    if (appRootVC.presentedViewController) {
        nextResponder = appRootVC.presentedViewController;
    }else{
        
        UIView * frontView = [[window subviews] objectAtIndex:0];
        nextResponder = [frontView nextResponder];
    }
    
    if ([nextResponder isKindOfClass:[UITabBarController class]]) {
        
        UITabBarController * tabbar = (UITabBarController *)nextResponder;
        UINavigationController * nav = (UINavigationController *)tabbar.selectedViewController;
        result = nav.childViewControllers.lastObject;
        
    }else if ([nextResponder isKindOfClass:[UINavigationController class]]){
        
        UIViewController * nav = (UIViewController *)nextResponder;
        result = nav.childViewControllers.lastObject;
    }else{
        result = nextResponder;
    }
    
    return result;
}

- (void)setUIInterfaceOrientationPortrait{
    [self orientationToPortrait:UIInterfaceOrientationPortrait];
}

- (void)setUIInterfaceOrientationLandscapeRight{
    [self orientationToPortrait:UIInterfaceOrientationLandscapeRight];
}
// 当回到原来的视图时, 如果希望这个视图还是竖屏, 可强制旋转一下
//强制旋转屏幕
- (void)orientationToPortrait:(UIInterfaceOrientation)orientation {
    SEL selector = NSSelectorFromString(@"setOrientation:");
    NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:[UIDevice instanceMethodSignatureForSelector:selector]];
    [invocation setSelector:selector];
    [invocation setTarget:[UIDevice currentDevice]];
    int val = orientation;
    [invocation setArgument:&val atIndex:2];//前两个参数已被target和selector占用
    [invocation invoke];
    
}

@end
