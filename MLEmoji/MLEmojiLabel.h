//
//  MLEmojiLabel.h
//  MLEmojiLabel
//
//  Created by molon on 5/19/14.
//  Copyright (c) 2014 molon. All rights reserved.
//

#import "TTTAttributedLabel.h"


typedef NS_OPTIONS(NSUInteger, MLEmojiLabelLinkType) {
    MLEmojiLabelLinkTypeURL = 0,
    MLEmojiLabelLinkTypeEmail,
    MLEmojiLabelLinkTypePhoneNumber,
    MLEmojiLabelLinkTypeAt,
    MLEmojiLabelLinkTypePoundSign,
};


@class MLEmojiLabel;
@protocol MLEmojiLabelDelegate <TTTAttributedLabelDelegate>

@optional
- (void)mlEmojiLabel:(MLEmojiLabel*)emojiLabel didSelectLink:(NSString*)link withType:(MLEmojiLabelLinkType)type;


@end

@interface MLEmojiLabel : TTTAttributedLabel

@property (nonatomic, assign) BOOL disableEmoji; //禁用表情
@property (nonatomic, assign) BOOL disablePhone; //禁用电话
@property (nonatomic, assign) BOOL disableMail; //禁用邮箱
@property (nonatomic, assign) BOOL disableURL; //禁用连接

@property (nonatomic, assign) BOOL disableAt; //禁用@
@property (nonatomic, assign) BOOL disablePoundSign; //禁用话题

@property (nonatomic, copy) NSString *customEmojiRegex; //自定义表情正则
@property (nonatomic, copy) NSString *customEmojiPlistName; //xxxxx.plist 格式

@property (nonatomic, weak) id<MLEmojiLabelDelegate> delegate; //点击连接的代理方法

@property (nonatomic, copy, readonly) id emojiText; //外部能获取text的原始副本

- (CGSize)preferredSizeWithMaxWidth:(CGFloat)maxWidth;

@end
