/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PLLogger.h"

@class NSString;

@interface PLConfigLogger : PLLogger
{
}

- (void)log;
- (id)osType;
@property(readonly, nonatomic) _Bool disableCABlanking;
@property(readonly, nonatomic) _Bool noWatchdogs;
@property(readonly, nonatomic) double backlightLevel;
@property(readonly, nonatomic) long long autolockTime;
@property(readonly, nonatomic) NSString *bootArgs;
- (id)basebandFirmware;
@property(readonly, nonatomic) NSString *crashReporterKey;

@end
