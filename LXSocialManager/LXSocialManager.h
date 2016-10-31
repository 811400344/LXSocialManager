//
//  LXSocialManager.h
//  LXSocialManager
//
//  Created by 李响 on 2016/10/29.
//  Copyright © 2016年 lixiang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS (NSInteger, LXSocialType) {
    LXSocialWX = 1 << 0,
    LXSocialWB = 1 << 1,
    LXSocialQQ = 1 << 2,
};

@interface LXSocialManager : NSObject

typedef void (^LXSocialAuthSuccess)(NSString *openID, NSString *unionID);
typedef void (^LXSocialAuthError)(NSError *error);

typedef void (^LXSocialLoginSuccess)(NSString *openID, NSString *unionID, NSString *userNickname, NSString *userAvatarURL, NSString *sex, NSString *token);
typedef void (^LXSocialLoginError)(NSError *error);

/** 注册 */
+ (void)setWXAppId:(NSString *)app_Id appSecret:(NSString *)appSecret state:(NSString *)state;

/** 注册 */
+ (void)setWXAppId:(NSString *)app_Id appSecret:(NSString *)appSecret state:(NSString *)state appdesc:(NSString *)appdesc;

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
