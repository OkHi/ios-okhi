Pod::Spec.new do |s|
  s.name                  = 'OkHi'
  s.version               = '1.7.9'
  s.summary               = 'The OkHi iOS library will enable you to start collecting and verifying your user\'s addresses.'
  s.homepage              = 'https://docs.okhi.co'
  s.license               = { :type => 'MIT', :file => 'LICENSE' }
  s.author                = { 'OkHi' => 'kiano@okhi.co' }
  s.source                = { :git => 'https://github.com/OkHi/ios-okhi.git', :tag => 'v' +  s.version.to_s }
  s.ios.deployment_target = '12.0'
  s.vendored_frameworks   = 'OkHi.xcframework'
end