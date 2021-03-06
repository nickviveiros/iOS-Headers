/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBook/ABPredicate.h>

@class NSArray, NSString;

@interface ABNamePredicate : ABPredicate
{
    void *_addressBook;
    NSString *_name;
    _Bool _matchWholeWords;
    _Bool _matchPersonOrCompanyNamesExclusively;
    _Bool _matchPreferredName;
    void *_tokenizations;
    struct __CFArray *_tokenizationSortKeys;
    NSArray *_groups;
    NSArray *_sources;
}

@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) _Bool matchPreferredName; // @synthesize matchPreferredName=_matchPreferredName;
@property(nonatomic) _Bool matchPersonOrCompanyNamesExclusively; // @synthesize matchPersonOrCompanyNamesExclusively=_matchPersonOrCompanyNamesExclusively;
@property(nonatomic) _Bool matchWholeWords; // @synthesize matchWholeWords=_matchWholeWords;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)predicateFormat;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereString;
- (id)_personNameKeys;
- (id)queryJoinsInCompound:(_Bool)arg1;
- (_Bool)isValid;
- (void *)tokenizations;
@property(copy, nonatomic) NSString *accountIdentifier;
@property(nonatomic) void *group;
@property(nonatomic) void *source;
- (void)dealloc;
- (id)init;

@end

