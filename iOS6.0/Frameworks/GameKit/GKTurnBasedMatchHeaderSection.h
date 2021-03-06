/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTableSection.h>

@class GKTurnBasedMatch, NSMutableDictionary;

@interface GKTurnBasedMatchHeaderSection : GKTableSection
{
    GKTurnBasedMatch *_match;
    int _matchStyle;
    NSMutableDictionary *_players;
}

@property(retain, nonatomic) NSMutableDictionary *players; // @synthesize players=_players;
@property(nonatomic) int matchStyle; // @synthesize matchStyle=_matchStyle;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (float)tableView:(id)arg1 heightForContentRow:(int)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)lastTurnString;
- (id)creationDateString;
- (id)playingWithString;
- (void)configureContents:(id)arg1 withGameIcon:(id)arg2;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)sectionItemCountInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)description;
- (void)dealloc;

@end

