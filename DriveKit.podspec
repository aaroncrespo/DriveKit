
Pod::Spec.new do |s|
  s.name             = 'DriveKit'
  s.version          = '0.1.0'
  s.summary          = 'Easier to use Google Drive and associated Service API'

  s.description      = <<-DESC
    A thin wrapper project around Google Drive Services and dependencies. In order to build a "fat" library useable via carthage
                       DESC

  s.homepage         = 'https://github.com/aaroncrespo/DriveKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Aaron Crespo' => 'aaroncrespo@gmail.com' }
  s.source           = { :git => 'https://github.com/aaroncrespo/DriveKit.git', :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/aaroncrespo'

  s.ios.deployment_target = '8.3'

  #s.source_files = 'DriveKit/Classes/**/*'

  s.framework = 'UIKit', 'Foundation'

  s.dependency 'GoogleAPIClient/Drive'
  s.dependency 'GTMAppAuth'
end
