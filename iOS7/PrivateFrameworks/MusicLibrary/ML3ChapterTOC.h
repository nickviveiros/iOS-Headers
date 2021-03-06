/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/MLITChapterTOC.h>

@class ML3Track;

// Not exported
@interface ML3ChapterTOC : MLITChapterTOC
{
    ML3Track *_track;
}

- (void).cxx_destruct;
- (id)imageDataForArtworkFormatID:(unsigned int)arg1 size:(struct CGSize)arg2 artworkChapterIndex:(unsigned int)arg3 artworkInstanceInfo:(struct MLArtworkInstanceInfo *)arg4;
- (id)artworkCacheIDForChapterIndex:(unsigned int)arg1;
- (id)artworkCacheIDForTimeInMS:(unsigned int)arg1;
- (id)initWithChapterDataRef:(struct ChapterData *)arg1 track:(id)arg2;

@end

