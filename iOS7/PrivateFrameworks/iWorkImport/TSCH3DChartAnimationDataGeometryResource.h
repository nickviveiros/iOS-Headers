/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSCH3DGeometryInterleavedArray;

// Not exported
@interface TSCH3DChartAnimationDataGeometryResource : NSObject
{
    TSCH3DGeometryInterleavedArray *mInterleavedArray;
    struct GeometryArrays mGeometryArrays;
}

+ (id)animationData;
@property(nonatomic) struct GeometryArrays geometryArrays; // @synthesize geometryArrays=mGeometryArrays;
@property(retain, nonatomic) TSCH3DGeometryInterleavedArray *interleavedArray; // @synthesize interleavedArray=mInterleavedArray;
- (id).cxx_construct;
- (void)dealloc;

@end

