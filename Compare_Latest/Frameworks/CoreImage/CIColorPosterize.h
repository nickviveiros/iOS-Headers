/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

// Not exported
@interface CIColorPosterize : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputLevels;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputLevels; // @synthesize inputLevels;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_kernel;
- (void)setDefaults;

@end

