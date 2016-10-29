//
//  LXSocialManager.h
//  LXSocialManager
//
//  Created by 李响 on 2016/10/29.
//  Copyright © 2016年 lixiang. All rights reserved.
//

#import <Foundation/Foundation.h>

#define WX_APPKEY        @"wx5c03dcf8a88d375a"
#define WX_SECRET        @"a30678e56d9f5ca3d187b963084e3d56"
#define WX_SCOPE         @"snsapi_userinfo"
#define WX_STATE         @"lixiang"

typedef NS_OPTIONS (NSInteger, LXSocialType) {
    LXSocialWX = 1 << 0,
    LXSocialWB = 1 << 1,
    LXSocialQQ = 1 << 2,
};

@interface LXSocialManager : NSObject

typedef void (^LXSocialAuthSuccess)(NSString *openID, NSString *unionID);
typedef void (^LXSocialAuthError)(NSError *error);

typedef void (^LXSocialLoginSuccess)(NSString *openID, NSString *unionID, NSString *userNickname, NSString *userAvatarURL);
typedef void (^LXSocialLoginError)(NSError *error);

/** 注册 */
+ (void)registerApp;

/** 注册 */
+ (void)registerAppAdditional:(NSString *)additional;

/** 是否安装了客户端 */
+ (BOOL)isAppInstalled:(LXSocialType)thirdSocialType;

/** 通过URL启动App */
+ (BOOL)handleOpenURL:(NSURL *)url;

/** 授权 */
+ (void)authRequest:(LXSocialType)thirdSocialType
        authSuccess:(LXSocialAuthSuccess)authSuccess
          authError:(LXSocialAuthError)authError;

/** 登录 */
+ (void)loginRequest:(LXSocialType)thirdSocialType
        loginSuccess:(LXSocialLoginSuccess)loginSuccess
          loginError:(LXSocialLoginError)loginError;

@end
