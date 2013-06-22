/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

@interface CIFlashTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIVector *inputCenter;
    CIVector *inputExtent;
    CIColor *inputColor;
    NSNumber *inputTime;
    NSNumber *inputMaxStriationRadius;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputFadeThreshold;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputFadeThreshold; // @synthesize inputFadeThreshold;
@property(copy, nonatomic) NSNumber *inputStriationContrast; // @synthesize inputStriationContrast;
@property(copy, nonatomic) NSNumber *inputStriationStrength; // @synthesize inputStriationStrength;
@property(copy, nonatomic) NSNumber *inputMaxStriationRadius; // @synthesize inputMaxStriationRadius;
@property(copy, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(copy, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(copy, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(copy, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_geomKernel;
- (id)_colorKernel;
- (void)setDefaults;

@end
