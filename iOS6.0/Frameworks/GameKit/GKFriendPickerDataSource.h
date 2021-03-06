/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKSectionArrayDataSource.h>

@class GKAchievementDescription, GKBackgroundView, GKFriendPickerListSection, GKFriendPickerSelectorSection, GKGame, GKReachability, NSDictionary, NSError, NSMutableDictionary, NSOrderedSet, NSSet, NSString;

@interface GKFriendPickerDataSource : GKSectionArrayDataSource
{
    GKFriendPickerSelectorSection *_selectorSection;
    GKFriendPickerListSection *_listSection;
    GKFriendPickerListSection *_neverPlayedSection;
    GKFriendPickerListSection *_alreadyEarnedSection;
    NSOrderedSet *_friends;
    NSOrderedSet *_recentPlayers;
    NSOrderedSet *_playedFriends;
    NSOrderedSet *_neverPlayedFriends;
    NSDictionary *_friendsDict;
    NSDictionary *_nonFriendsDict;
    NSDictionary *_ranksDict;
    NSMutableDictionary *_inviteStatusDict;
    NSOrderedSet *_recentPlayerIDs;
    NSOrderedSet *_playedPlayerIDs;
    NSSet *_uninvitableFriends;
    NSMutableDictionary *_nearbyDict;
    NSOrderedSet *_nearbyPlayers;
    GKBackgroundView *_statusView;
    NSError *_loadError;
    BOOL _browsingForNearbyPlayers;
    GKAchievementDescription *_achievementDescription;
    GKReachability *_reachability;
    BOOL _reachable;
    NSOrderedSet *_haveEarnedPlayers;
    NSString *_leaderboardID;
    NSString *_achievementID;
    NSOrderedSet *_haveEarnedPlayerIDs;
    GKGame *_game;
    unsigned int _context;
}

@property(nonatomic) unsigned int context; // @synthesize context=_context;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) NSOrderedSet *haveEarnedPlayerIDs; // @synthesize haveEarnedPlayerIDs=_haveEarnedPlayerIDs;
@property(retain, nonatomic) NSString *achievementID; // @synthesize achievementID=_achievementID;
@property(retain, nonatomic) NSString *leaderboardID; // @synthesize leaderboardID=_leaderboardID;
@property(retain, nonatomic) NSOrderedSet *haveEarnedPlayers; // @synthesize haveEarnedPlayers=_haveEarnedPlayers;
@property(nonatomic) BOOL reachable; // @synthesize reachable=_reachable;
@property(retain, nonatomic) GKReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) GKAchievementDescription *achievementDescription; // @synthesize achievementDescription=_achievementDescription;
@property(nonatomic) BOOL browsingForNearbyPlayers; // @synthesize browsingForNearbyPlayers=_browsingForNearbyPlayers;
@property(retain, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(retain, nonatomic) GKBackgroundView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) NSOrderedSet *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;
@property(retain, nonatomic) NSMutableDictionary *nearbyDict; // @synthesize nearbyDict=_nearbyDict;
@property(retain, nonatomic) NSSet *uninvitableFriends; // @synthesize uninvitableFriends=_uninvitableFriends;
@property(retain, nonatomic) NSOrderedSet *playedPlayerIDs; // @synthesize playedPlayerIDs=_playedPlayerIDs;
@property(retain, nonatomic) NSOrderedSet *recentPlayerIDs; // @synthesize recentPlayerIDs=_recentPlayerIDs;
@property(retain, nonatomic) NSMutableDictionary *inviteStatusDict; // @synthesize inviteStatusDict=_inviteStatusDict;
@property(retain, nonatomic) NSDictionary *ranksDict; // @synthesize ranksDict=_ranksDict;
@property(retain, nonatomic) NSDictionary *nonFriendsDict; // @synthesize nonFriendsDict=_nonFriendsDict;
@property(retain, nonatomic) NSDictionary *friendsDict; // @synthesize friendsDict=_friendsDict;
@property(retain, nonatomic) NSOrderedSet *neverPlayedFriends; // @synthesize neverPlayedFriends=_neverPlayedFriends;
@property(retain, nonatomic) NSOrderedSet *playedFriends; // @synthesize playedFriends=_playedFriends;
@property(retain, nonatomic) NSOrderedSet *recentPlayers; // @synthesize recentPlayers=_recentPlayers;
@property(retain, nonatomic) NSOrderedSet *friends; // @synthesize friends=_friends;
@property(retain, nonatomic) GKFriendPickerListSection *alreadyEarnedSection; // @synthesize alreadyEarnedSection=_alreadyEarnedSection;
@property(retain, nonatomic) GKFriendPickerListSection *neverPlayedSection; // @synthesize neverPlayedSection=_neverPlayedSection;
@property(retain, nonatomic) GKFriendPickerListSection *listSection; // @synthesize listSection=_listSection;
@property(retain, nonatomic) GKFriendPickerSelectorSection *selectorSection; // @synthesize selectorSection=_selectorSection;
- (id)selectedPlayers;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (void)tableView:(id)arg1 updateStatusViewAfterLoading:(id)arg2 withError:(id)arg3;
- (void)tableView:(id)arg1 updateStatusViewBeforeLoading:(id)arg2;
- (void)reachabilityDidChange:(id)arg1;
- (void)updateStatusView;
- (void)updateNearbyPlayers;
- (void)updatePlayedOrNotPlayers;
- (void)updateRecentPlayersWithCompletionHander:(id)arg1;
- (void)updateListSectionForScope;
- (void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
- (void)addNearbyPlayer:(id)arg1;
@property(nonatomic) unsigned int scope; // @dynamic scope;
@property(nonatomic) BOOL showsNearbyPlayers; // @dynamic showsNearbyPlayers;
- (void)prepareSections;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

