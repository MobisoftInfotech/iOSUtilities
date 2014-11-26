//
//  KHUD.h
//
//  Created by Krupal G on 18/04/14.
//  Copyright (c) 2014 KHUD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define CURRENT_VIEW ((UIWindow*)[[UIApplication sharedApplication].windows objectAtIndex:0]).rootViewController.view

#define SHOW_KHUD(string) [KHUD sharedKHUDWithString:((NSString*)string)]
#define SHOW_KHORIZONTALHUD(string)     [KHorizontalHUD sharedKHUDWithString:((NSString*)string)];


#define HIDE_KHUD [KHUD removeFromSuperview]
#define HIDE_KHORIZONTALHUD [KHorizontalHUD removeFromSuperview]

@interface KHUD : UIView
+ (void)sharedKHUDWithString:(NSString *)string;
+ (void)removeFromSuperview;
@end

@interface KHorizontalHUD : UIView
+ (void)sharedKHUDWithString:(NSString *)string;
+ (void)removeFromSuperview;

@end

