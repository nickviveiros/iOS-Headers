/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUValueFilter.h>

@interface PUInitialHysteresisValueFilter : PUValueFilter
{
    _Bool _didReachThreshold;
    double _initialHysteresis;
    double _thresholdValue;
}

@property(nonatomic) double thresholdValue; // @synthesize thresholdValue=_thresholdValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end

