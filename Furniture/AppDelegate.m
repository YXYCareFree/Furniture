//
//  AppDelegate.m
//  Furniture
//
//  Created by beyondSoft on 17/1/3.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import "AppDelegate.h"
#import "MainTabBarViewController.h"
#import "YTKNetworkConfig.h"
#import "AlvaTool.h"


#import "JPUSHService.h"
#ifdef NSFoundationVersionNumber_iOS_9_x_Max
#import <UserNotifications/UserNotifications.h>
#endif

@interface AppDelegate ()<JPUSHRegisterDelegate>

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    [[NSUserDefaults standardUserDefaults] setObject:@"UIWebView" forKey:@"webViewType"];
    
    [AlvaTool sharedInstance].unityDefaultVC = [MainTabBarViewController new];

    [[AlvaTool sharedInstance] app:application didFinishLaunchingWithOptions:launchOptions];

    [[AlvaTool sharedInstance] unityWindowWithBackgroundColor:[UIColor whiteColor]];
    
    JPUSHRegisterEntity * entity = [JPUSHRegisterEntity new];
    entity.types = JPAuthorizationOptionAlert|JPAuthorizationOptionBadge|JPAuthorizationOptionSound;
    [JPUSHService registerForRemoteNotificationConfig:entity delegate:self];
    
    
    [JPUSHService setupWithOption:launchOptions appKey:@"5faa9a8186bc29f77b2501a4" channel:@"APPStore" apsForProduction:YES];
        
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
    [[AlvaTool sharedInstance] appWillResignActive:application];

}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    [[AlvaTool sharedInstance] appDidEnterBackground:application];

}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
    [[AlvaTool sharedInstance] appWillEnterForeground:application];

}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    [[AlvaTool sharedInstance] appDidBecomeActive:application];
    [application setApplicationIconBadgeNumber:0];
    [JPUSHService resetBadge];
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    [[AlvaTool sharedInstance] appWillTerminate:application];

}

#pragma mark--JPUSH
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken{
    [JPUSHService registerDeviceToken:deviceToken];
}

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error{
    NSLog(@"注册 推送失败%@", error);
}

#pragma mark--JPUSHRegisterDelegate
- (void)jpushNotificationCenter:(UNUserNotificationCenter *)center willPresentNotification:(UNNotification *)notification withCompletionHandler:(void (^)(NSInteger))completionHandler {
    // Required
    NSDictionary * userInfo = notification.request.content.userInfo;
    if([notification.request.trigger isKindOfClass:[UNPushNotificationTrigger class]]) {
        [JPUSHService handleRemoteNotification:userInfo];
    }
    NSLog(@"%@", userInfo);
    if ([UIApplication sharedApplication].applicationState == UIApplicationStateActive) {
        return;
    }
    
    completionHandler(UNNotificationPresentationOptionAlert); // 需要执行这个方法，选择是否提醒用户，有Badge、Sound、Alert三种类型可以选择设置
}

// iOS 10 Support
- (void)jpushNotificationCenter:(UNUserNotificationCenter *)center didReceiveNotificationResponse:(UNNotificationResponse *)response withCompletionHandler:(void (^)())completionHandler {
    NSLog(@"%s", __FUNCTION__);
    
    // Required
    NSDictionary * userInfo = response.notification.request.content.userInfo;
    if([response.notification.request.trigger isKindOfClass:[UNPushNotificationTrigger class]]) {
        [JPUSHService handleRemoteNotification:userInfo];
    }
    NSLog(@"%@", userInfo);
    //    UIAlertView * alert = [[UIAlertView alloc] initWithTitle:@"JPUSH" message:userInfo[@"aps"][@"alert"] delegate:self cancelButtonTitle:@"cancel" otherButtonTitles:nil];
    //    [alert show];
    completionHandler();  // 系统要求执行这个方法
}

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler {
    
    //    [JPUSHService setBadge:application.applicationIconBadgeNumber];
    // Required, iOS 7 Support
    NSLog(@"%s\n%@", __FUNCTION__, userInfo);
    [JPUSHService handleRemoteNotification:userInfo];
    UIAlertView * alert = [[UIAlertView alloc] initWithTitle:@"JPUSH" message:@"" delegate:self cancelButtonTitle:@"cancel" otherButtonTitles:nil];
    [alert show];
    completionHandler(UIBackgroundFetchResultNewData);
}


@end
