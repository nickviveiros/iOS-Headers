/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@interface GEOSessionID : PBCodable
{
    unsigned long long _low;
    unsigned long long _high;
}

@property(nonatomic) unsigned long long high; // @synthesize high=_high;
@property(nonatomic) unsigned long long low; // @synthesize low=_low;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end

