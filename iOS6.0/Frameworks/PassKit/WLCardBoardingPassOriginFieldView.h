/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PassKit/WLCardFieldView.h>

@class UIImageView;

@interface WLCardBoardingPassOriginFieldView : WLCardFieldView
{
    UIImageView *_pinView;
}

- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setColorProfile:(id)arg1 background:(int)arg2;
- (id)initWithField:(id)arg1 fieldTemplate:(id)arg2;
- (void)dealloc;

@end
