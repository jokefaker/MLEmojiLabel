//
//  MLEmojiCache.m
//  MLEmojiLabel
//
//  Created by molon on 9/2/14.
//  Copyright (c) 2014 molon. All rights reserved.
//

#import "MLEmojiCache.h"

@implementation MLEmojiCache

+ (instancetype)shareInstance {
    static MLEmojiCache *_shareInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _shareInstance = [MLEmojiCache new];
    });
    return _shareInstance;
}

- (CGImageRef)emojiCGImageCacheForImageName:(NSString*)imageName
{
    return (__bridge CGImageRef)([self objectForKey:imageName]);
}

- (void)setEmojiCGImageCache:(CGImageRef)imageRef forImageName:(NSString*)imageName
{
    [self setObject:(__bridge id)(imageRef) forKey:imageName];
}

@end
