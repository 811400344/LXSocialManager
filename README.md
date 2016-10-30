# LXSocialManager
LXSocialManager is a opensource Social SDK for iOS.


Requirements
    - iOS 8.0+
    - Xcode 8.1


Installation

CocoaPods
    pod 'LXSocialManager', '~> 1.0.0'

Carthage
    import "LXSocialManager.h"


Usage example

Objective-C

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    [LXSocialManager setWXAppId:@"key" appSecret:@"secret" state:@"state"];
    return YES;
}

- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url {
    return [LXSocialManager handleOpenURL:url];
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(nullable NSString *)sourceApplication annotation:(id)annotation {
    return [LXSocialManager handleOpenURL:url];
}

if ([LXSocialManager isAppInstalled:LXSocialWX]) {
    [LXSocialManager loginRequest:LXSocialWX
                     loginSuccess:^(NSString *openID, NSString *unionID, NSString *userNickname, NSString *userAvatarURL) {

    } loginError:^(NSError *error) {

    }];
}


License
    LXSocialManager is released under the MIT license. See LICENSE for details.
