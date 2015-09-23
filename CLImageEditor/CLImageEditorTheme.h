//
//  CLImageEditorTheme.h
//
//  Created by sho yakushiji on 2013/12/05.
//  Copyright (c) 2013年 CALACULU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@protocol CLImageEditorThemeDelegate;

@interface CLImageEditorTheme : NSObject

@property (nonatomic, weak) id<CLImageEditorThemeDelegate> delegate;
@property (nonatomic, strong) NSString *bundleName;
@property (nonatomic, strong) UIColor  *backgroundColor;
@property (nonatomic, assign) UIBarStyle navigationBarStyle;
@property (nonatomic, strong) UIColor  *navigationBarBarTintColor; // Colour that the bar will have (opaque)
@property (nonatomic, strong) UIColor  *navigationBarTintColor; // Tint colour for buttons on the bar
@property (nonatomic, strong) NSDictionary  *navigationBarTitleTextAttributes; // If you change the bar colours dramatically, you may need this!
/* Sample Text Attributes Dictionary
 @{
   NSForegroundColorAttributeName: [UIColor colorWithRed:255.0/255.0 green:255.0/255.0 blue:255.0/255.0 alpha:1.0],
   NSBackgroundColorAttributeName: [UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:0.8],
   NSFontAttributeName: [UIFont fontWithName:@"Arial-Bold" size:0.0],
 }
*/
@property (nonatomic, strong) UIColor  *toolbarColor;
@property (nonatomic, strong) NSString *toolIconColor;
@property (nonatomic, strong) UIColor  *toolbarTextColor;
@property (nonatomic, strong) UIColor  *toolbarSelectedButtonColor;
@property (nonatomic, strong) UIFont   *toolbarTextFont;
@property (nonatomic, assign) UIStatusBarStyle statusBarStyle;

+ (CLImageEditorTheme*)theme;

@end

@protocol CLImageEditorThemeDelegate <NSObject>
@optional
- (UIActivityIndicatorView*)imageEditorThemeActivityIndicatorView;

@end
