/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSTMergeRegionMap;

// Not exported
@interface TSTMergeRegionMapIterator : NSObject
{
    TSTMergeRegionMap *mMergeRegionMap;
    struct __hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>*>> {
        struct __hash_iterator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>*> {
            struct __hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *__node_;
        } __i_;
    } mMergeRegionIterator;
}

- (id).cxx_construct;
- (void)reset;
- (void)dealloc;
- (_Bool)hasNextMergeRegion;
- (CDStruct_5f1f7aa9)nextMergeRegion;
- (id)initWithMergeRegionMap:(id)arg1;

@end

