/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@interface MPCloudDownloadButton : UIButton
{
    long long _cloudButtonStyle;
}

+ (long long)_buttonTypeForCloudDownloadButtonStyle:(long long)arg1;
+ (struct CGSize)defaultSizeForStyle:(long long)arg1;
+ (id)cloudDownloadButtonWithStyle:(long long)arg1;
@property(nonatomic) long long cloudButtonStyle; // @synthesize cloudButtonStyle=_cloudButtonStyle;
- (void)_touchEndedAction:(id)arg1;
- (void)_touchDownAction:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

