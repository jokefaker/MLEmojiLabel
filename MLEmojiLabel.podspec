Pod::Spec.new do |s|

  s.name         = "MLEmojiLabel"
  s.version      = "0.1.0"
  s.summary      = "自动识别URL、表情、话题、电话、邮箱的Label."
  s.homepage     = "https://github.com/jokefaker/MLEmojiLabel.git"
  s.license      = "MIT"
  s.author       = { "Jokefaker" => "jokefaker@gmail.com" }

  s.ios.deployment_target = "7.0"

  s.source       = { :git => "https://github.com/jokefaker/MLEmojiLabel.git", :tag => s.version.to_s  }

  s.source_files  = "MLEmoji"

  s.requires_arc = true

end