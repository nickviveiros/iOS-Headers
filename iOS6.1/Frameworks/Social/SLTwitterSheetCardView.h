/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface SLTwitterSheetCardView : UIView
{
    UIView *_contentView;
    UIView *_paperBG;
    UIView *_paperTexture;
    UIImageView *_chrome;
    UIImageView *_topGradient;
    UIImageView *_bottomGradient;
    BOOL _hidesBottom;
    BOOL _isInternalSubview;
    BOOL _hasCustomSize;
    struct CGSize _customSize;
}

+ (struct CGRect)cardRectForCustomSize:(struct CGSize)arg1 orientation:(int)arg2 options:(int)arg3;
+ (struct CGRect)cardRectForOrientation:(int)arg1 options:(int)arg2 parentBounds:(struct CGRect)arg3 keyboardFrame:(struct CGRect)arg4;
- (void).cxx_destruct;
- (void)setCustomSize:(struct CGSize)arg1;
- (void)setIsInternalSubview:(BOOL)arg1;
- (void)updateCardRectForOrientation:(int)arg1 options:(int)arg2;
- (void)restoreKeyboard;
- (void)updateKeyboardForOrientation:(int)arg1;
- (struct CGRect)keyboardFrameForInterfaceOrientation:(int)arg1;
- (void)setHidesBottom:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (struct CGRect)paperBounds;
- (id)imageWithName:(id)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
