/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ODDFillColorList;

@interface ODDColorTransformStyleLabel : NSObject
{
    ODDFillColorList *mFillColors;
    ODDFillColorList *mLineColors;
    ODDFillColorList *mEffectColors;
    ODDFillColorList *mTextLineColors;
    ODDFillColorList *mTextFillColors;
    ODDFillColorList *mTextEffectColors;
}

- (void)applyToShapeStyle:(id)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 state:(id)arg4;
- (void)setTextEffectColors:(id)arg1;
- (id)textEffectColors;
- (void)setTextFillColors:(id)arg1;
- (id)textFillColors;
- (void)setTextLineColors:(id)arg1;
- (id)textLineColors;
- (void)setEffectColors:(id)arg1;
- (id)effectColors;
- (void)setLineColors:(id)arg1;
- (id)lineColors;
- (void)setFillColors:(id)arg1;
- (id)fillColors;
- (void)dealloc;

@end

