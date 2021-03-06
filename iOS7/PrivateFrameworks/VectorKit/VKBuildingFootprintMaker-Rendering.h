/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKBuildingFootprintMaker.h>

@class NSArray, VGLTexture;

@interface VKBuildingFootprintMaker (Rendering)
@property(readonly, nonatomic) float maxLayeringHeight;
@property(readonly, nonatomic) float minLayeringHeight;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *shadowTextureMatrix;
@property(readonly, nonatomic) VGLTexture *shadowTexture;
@property(readonly, nonatomic) NSArray *pointyBuildingsMeshes;
- (const vector_f457f7ad *)facadeCollectionsWithVectorType:(long long)arg1;
- (void)forEachTopStrokeMesh:(id)arg1 forVectorType:(void)arg2 atLayer:(long long)arg3;
- (void)forEachTopMesh:(id)arg1 forVectorType:(void)arg2 atLayer:(long long)arg3;
- (void)forEachTopMesh:(id)arg1 topStrokeMesh:(void)arg2 forVectorType:(id)arg3;
@property(readonly, nonatomic) NSArray *footprintsMeshes;
@property(readonly, nonatomic) NSArray *footprintStrokeMeshes;
@property(readonly, nonatomic) NSArray *landmarksMeshes;
- (const vector_9adfa044 *)discontinuityEdgeInfoWithVectorType:(long long)arg1;
@end

