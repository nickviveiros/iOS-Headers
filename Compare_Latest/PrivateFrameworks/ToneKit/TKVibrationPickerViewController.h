/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "TKVibrationPickerTableViewCellDelegate-Protocol.h"
#import "TKVibrationRecorderViewControllerDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, NSTimer, TKLabelContainerView, TKVibratorController, TLVibrationManager;

@interface TKVibrationPickerViewController : UITableViewController <TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate>
{
    int _alertType;
    _Bool _showsDefault;
    _Bool _showsUserGenerated;
    _Bool _showsNone;
    _Bool _showsNothingSelected;
    _Bool _showsEditButtonAtRightSideOfCurrentNavigationController;
    _Bool _allowsDeletingCurrentSystemVibration;
    NSString *_noneString;
    NSIndexPath *_selectedVibrationIndexPath;
    _Bool _canEnterEditingMode;
    _Bool _vibrating;
    _Bool _viewHasAppearedAtLeastOnce;
    _Bool _isCallingParentViewController;
    _Bool _swipeToDeleteMode;
    _Bool _skipNextUserGeneratedVibrationsDidChangeNotification;
    TLVibrationManager *_vibrationManager;
    TKVibratorController *_vibratorController;
    id <TKVibrationPickerViewControllerDelegate> _delegate;
    NSTimer *_vibrationShouldStopTimer;
    NSArray *_sortedVibrationIdentifiers;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
    id <TKVibrationPickerStyleProvider> _styleProvider;
    TKLabelContainerView *_defaultSectionHeaderView;
    TKLabelContainerView *_systemSectionHeaderView;
    TKLabelContainerView *_userGeneratedSectionHeaderView;
}

@property(retain, nonatomic, setter=_setUserGeneratedSectionHeaderView:) TKLabelContainerView *_userGeneratedSectionHeaderView; // @synthesize _userGeneratedSectionHeaderView;
@property(retain, nonatomic, setter=_setSystemSectionHeaderView:) TKLabelContainerView *_systemSectionHeaderView; // @synthesize _systemSectionHeaderView;
@property(retain, nonatomic, setter=_setDefaultSectionHeaderView:) TKLabelContainerView *_defaultSectionHeaderView; // @synthesize _defaultSectionHeaderView;
@property(retain, nonatomic, setter=_setStyleProvider:) id <TKVibrationPickerStyleProvider> _styleProvider; // @synthesize _styleProvider;
@property(nonatomic) _Bool allowsDeletingCurrentSystemVibration; // @synthesize allowsDeletingCurrentSystemVibration=_allowsDeletingCurrentSystemVibration;
@property(nonatomic) _Bool showsEditButtonAtRightSideOfCurrentNavigationController; // @synthesize showsEditButtonAtRightSideOfCurrentNavigationController=_showsEditButtonAtRightSideOfCurrentNavigationController;
@property(nonatomic) _Bool showsNothingSelected; // @synthesize showsNothingSelected=_showsNothingSelected;
@property(retain, nonatomic) NSString *noneString; // @synthesize noneString=_noneString;
@property(nonatomic) id <TKVibrationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_presentVibrationRecorderViewController;
- (void)finishedWithPicker;
- (void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2;
- (void)stopVibrating;
- (void)_startVibratingWithVibrationIdentifier:(id)arg1;
- (void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg1;
- (void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)_getTitle:(id *)arg1 customHeaderView:(id *)arg2 forHeaderInSection:(long long)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) long long _sectionForNoneGroup;
@property(readonly, nonatomic) long long _sectionForUserGeneratedGroup;
@property(readonly, nonatomic) long long _sectionForSystemGroup;
@property(readonly, nonatomic) long long _sectionForDefaultGroup;
- (void)_handleError:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2;
- (void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2;
- (void)_updateEditButtonItemWithAnimation:(_Bool)arg1;
- (void)_updateEditButtonItem;
- (id)_navigationItem;
- (void)_processSelectionOfVibrationWithIdentifier:(id)arg1;
- (id)_indexPathForVibrationWithIdentifier:(id)arg1;
- (id)_identifierOfVibrationAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *_sortedUserGeneratedVibrationIdentifiers;
@property(readonly, nonatomic) NSArray *_sortedVibrationIdentifiers;
- (id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) _Bool _showsOnlyEditableSections;
@property(retain, nonatomic, setter=_setSelectedVibrationIndexPath:) NSIndexPath *_selectedVibrationIndexPath;
- (id)_actualIndexPathFromNonEditingIndexPath:(id)arg1;
- (id)_nonEditingIndexPathFromActualIndexPath:(id)arg1;
- (void)_setSelectedVibrationIdentifier:(id)arg1 processSelectionOfVibrationIdentifier:(_Bool)arg2;
@property(retain, nonatomic) id <TKVibrationPickerStyleProvider> styleProvider;
@property(retain, nonatomic) NSString *selectedVibrationIdentifier;
@property(readonly, nonatomic) double contentHeight;
@property(nonatomic) _Bool canEnterEditingMode; // @synthesize canEnterEditingMode=_canEnterEditingMode;
- (void)dealloc;
- (id)initWithAlertType:(int)arg1 showsDefault:(_Bool)arg2 showsUserGenerated:(_Bool)arg3 showsNone:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1;

@end

