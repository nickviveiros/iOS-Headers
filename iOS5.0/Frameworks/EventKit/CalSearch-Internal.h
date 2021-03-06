/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/CalSearch.h>

@interface CalSearch (Internal)
- (void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext *)arg1;
- (struct CalEventOccurrenceSearchContext *)_createSearchContext;
- (void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext *)arg1;
- (void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext *)arg1;
- (struct CalEventIdsSearchContext *)_createEventIdsSearchContext;
- (void)_getEventsSearchResults:(struct CalEventIdsSearchContext *)arg1;
- (void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext *)arg1;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext *)arg1;
- (void)_addMatchedLocationIds:(struct __CFArray *)arg1;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext *)arg1;
- (struct CalLocationIdsSearchContext *)_createLocationIdsSearchContext;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext *)arg1;
- (struct CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext *)arg1;
- (void)_addMatchedParticipantIds:(struct __CFArray *)arg1;
- (void)_addMatchedEventIds:(struct __CFArray *)arg1;
- (void)_startLoadingResults;
@end

