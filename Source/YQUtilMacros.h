//
//  YQUtilMacros.h
//  iOS 常用宏
//
//  Created by 杨清 on 2016/9/7.
//  Copyright © 2018年 QuinceyYang. All rights reserved.
//

#ifndef YQUtilMacros_h
#define YQUtilMacros_h

// 屏幕尺寸
#define kScreenBounds   [[UIScreen mainScreen] bounds]
#define kScreenWidth    ([UIScreen mainScreen].bounds.size.width)
#define kScreenHeight   ([UIScreen mainScreen].bounds.size.height)
#define SCREEN_WIDTH    ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT   ([UIScreen mainScreen].bounds.size.height)

#define kRatioW375       ((float)([UIScreen mainScreen].bounds.size.width/375.0f))
#define kRatioH667       ((float)([UIScreen mainScreen].bounds.size.height/667.0f))
#define kRateW375       kRatioW375
#define kRateH667       kRatioH667

/**当前app的全局请求*/
#define kAppDelegate ((AppDelegate*)[[UIApplication sharedApplication] delegate])

// 颜色设置
//rgb颜色
#define RGB(r,g,b)                 [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f                                                                                 alpha:1]

//rgb颜色(A:透明度)
#define RGB_A(r,g,b,a)             [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f                                                                                 alpha:(a)]


//获取十六进制颜色值
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

// 是否高清屏
#define IS_RETINA   ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define IS_IPHONE5  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

// 是否模拟器
#if TARGET_IPHONE_SIMULATOR
#define IS_SIMULATOR YES
#else
#define IS_SIMULATOR NO
#endif



// 是否是iPhone
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

// 是否iPad
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

#define IS_IOS_11  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.f)
#define IS_IPHONE_X (IS_IOS_11 && IS_IPHONE && (MIN([UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height) == 375 && MAX([UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height) == 812))

#define kIphoneXTabBarHeight    (83.f)
#define kNormalTabBarHeight    (49.f)
#define kIphoneXStatusBarHeight    (44.f)
#define kNormalStatusBarHeight    (20.f)
/// 导航栏高度
#define kNavigationBarHeight    (IS_IPHONE_X ? 88.0 : 64.0)
#define kNavigationBarMaxY    kNavigationBarHeight
#define kNavAddStatusBarHight  (self.navigationController.navigationBar.frame.size.height+[[UIApplication sharedApplication] statusBarFrame].size.height)

// 是否IOS6
#define IS_IOS6 ([[[UIDevice currentDevice] systemVersion] floatValue] < 7.0)

// 是否IOS7
#define IS_IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)

// 是否IOS9
#define IS_IOS9 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)

#pragma mark - 错误消息
#define     kLoadingMessageWithLoading         @"加载中，请稍候"
#define     kLoadingMessageWithError           @"出错了，请稍后再试"
#define     kLoadingMessageWithNetworkWrong    @"网络超时"
#define     kLoadingMessageWithNetworkWrongall @"没有网络,请设置网络!"
#define     kLoadingMessageWithNetworkWWAN     @"2G/3G网络"
#define     kLoadingMessageWithNetworkWiFI     @"WiFi网络"


#endif /* YQUtilMacros_h */
