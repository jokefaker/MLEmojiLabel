//
//  MLEmojiCache.h
//  MLEmojiLabel
//
//  Created by molon on 9/2/14.
//  Copyright (c) 2014 molon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MLEmojiCache : NSCache

+ (instancetype)shareInstance;

- (CGImageRef)emojiCGImageCacheForImageName:(NSString*)imageName;
- (void)setEmojiCGImageCache:(CGImageRef)imageRef forImageName:(NSString*)imageName;


@end
