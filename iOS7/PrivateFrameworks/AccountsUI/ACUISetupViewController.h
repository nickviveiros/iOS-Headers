/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSSetupController.h"

@interface ACUISetupViewController : PSSetupController
{
    BOOL _didAttemptDataclassSetup;
    BOOL _shouldForceMailSetup;
}

- (id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3;
- (void)_dismissAndNotifyParent;
- (void)finishedAccountSetup;
- (void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2;

@end
