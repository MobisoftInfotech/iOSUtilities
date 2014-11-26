//
//  KUIActionSheet.h
//
//  Created by Krupal G on 18/03/14.
//  Copyright (c) 2014 KUIActionSheet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface KUIActionSheet : NSObject<UIActionSheetDelegate>
+ (UIActionSheet*)showInView:(UIView*)view WithTitle:(NSString *)title clickedAtButtonIndex:(void(^)(NSInteger buttonIndex))buttonIndex cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitles:(NSString *)otherButtonTitles,...NS_REQUIRES_NIL_TERMINATION;

+ (UIActionSheet*)showFromToolBar:(UIToolbar*)toolBar WithTitle:(NSString *)title clickedAtButtonIndex:(void(^)(NSInteger buttonIndex))buttonIndex cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitles:(NSString *)otherButtonTitles,...NS_REQUIRES_NIL_TERMINATION;

+ (UIActionSheet*)showFromTabBar:(UITabBar*)tabBar WithTitle:(NSString *)title clickedAtButtonIndex:(void(^)(NSInteger buttonIndex))buttonIndex cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitles:(NSString *)otherButtonTitles,...NS_REQUIRES_NIL_TERMINATION;

+ (UIActionSheet*)showFromRect:(CGRect)rect inView:(UIView*)view animated:(BOOL)animated WithTitle:(NSString *)title clickedAtButtonIndex:(void(^)(NSInteger buttonIndex))buttonIndex cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitles:(NSString *)otherButtonTitles,...NS_REQUIRES_NIL_TERMINATION;

+ (UIActionSheet*)showFromBarButtonItem:(UIBarButtonItem*)barButtonItem animated:(BOOL)animated WithTitle:(NSString *)title clickedAtButtonIndex:(void(^)(NSInteger buttonIndex))buttonIndex cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitles:(NSString *)otherButtonTitles,...NS_REQUIRES_NIL_TERMINATION;

@end
