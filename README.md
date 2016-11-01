LXSocialManager
==============

**LXSocialManager is a opensource Social SDK for iOS.**  

## Requirements
    - iOS 8.0+
    - Xcode 8.1


## Installation

#### CocoaPods
    # To integrate LXSocialManager into your Xcode project using CocoaPods, specify it in your Podfile:

    pod 'LXSocialManager', '~> 1.0.6'

    # Then, run the following command:
    $ pod install

#### Carthage
    1. Import <\"LXSocialManager.h"\>.

#### Manually

    1. Download all the files in the `LXSocialManager` subdirectory.
    2. Add the source files to your Xcode project.
    3. Link with required frameworks:
    
    1. WeiXin
    * SystemConfiguration.framework
    * libz.dylib
    * libsqlite3.0.dylib
    * libc++.dylib
    * Security.framework
    * CoreTelephony.framework
    * CFNetwork.framework
    
    * Not Cocoapods : Other Linker Flags : -Objc -all_load

    2. QQ
    * Security.framework
    * libiconv.dylib
    * SystemConfiguration.framework
    * CoreGraphics.Framework
    * libsqlite3.dylib
    * CoreTelephony.framework
    * libstdc++.dylib
    * libz.dylib

    * Not Cocoapods : Other Linker Flags : -fobjc-arc

## Usage example

#### Objective-C
```objc
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
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
```

## License
    **LXSocialManager is released under the MIT license. See LICENSE for details.**
