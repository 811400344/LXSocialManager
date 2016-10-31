Pod::Spec.new do |s|

  s.name              = "LXSocialManager"
  s.version           = "1.0.3"
  s.license           = { :type => "MIT", :file => "LICENSE" }
  s.summary           = "LXSocialManager for Cocoapods convenience."
  s.description  = <<-DESC
  LXSocialManager is a opensource Social SDK for iOS.
                   DESC
  s.homepage          = "https://github.com/811400344/LXSocialManager"
  s.author            = { "李响" => "lx0330@vip.qq.com" }
  s.source            = { :git => "https://github.com/811400344/LXSocialManager.git", :tag => "#{s.version}" }
  s.platform          = :ios, "8.0"
  s.requires_arc      = true
  s.source_files      = "LXSocialManager/**/*.{h}"
  # s.public_header_files = "*.h"
  s.public_header_files = ['LXSocialManager/include/*.h']
  # s.preserve_paths = "LXSocialManager.a"
  # s.vendored_libraries = "LXSocialManager.a"
  s.vendored_libraries  = ['LXSocialManager/lib/libLXSocialManager.a']
  # s.vendored_frameworks = "LXSocialManager.framework"
  s.xcconfig          = {'OTHER_LDFLAGS' => '-ObjC'}
  # s.xcconfig = {
  #   'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/libWeChatSDK"',
  #   'HEADER_SEARCH_PATHS' => '"$(PODS_ROOT)/libWeChatSDK"'
  # }
  s.frameworks = 'SystemConfiguration', 'CoreTelephony'
  s.libraries = 'z', 'sqlite3.0', 'c++'

end
