//
//  KUIAlertView.h
//
//  Created by Krupal G on 18/03/14.
//  Copyright (c) 2014 KUIAlertView. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface KUIAlertView : NSObject<UIAlertViewDelegate>


+ (UIAlertView*)showAlertWithTitle:(NSString*)title message:(NSString *)message clickedAtButtonIndex:(void(^)(NSInteger buttonIndex))buttonIndex cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles,...NS_REQUIRES_NIL_TERMINATION;
@end
