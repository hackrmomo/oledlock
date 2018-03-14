//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDateTimeOverrideObserver.h"

@class NSArray, NSDateFormatter, NSHashTable, NSString, NSTimer, SBQuietModeStateAggregator, SBSStatusBarStyleOverridesAssertion, SBStatusBarDefaults, SBTelephonyManager, SBUserSessionController;

@interface SBStatusBarStateAggregator : NSObject <SBDateTimeOverrideObserver>
{
    SBStatusBarDefaults *_statusBarDefaults;
    SBTelephonyManager *_override_telephonyManager;
    SBUserSessionController *_override_userSessionController;
    unsigned long long _coalescentBlockDepth;
    _Bool _hasPostedOnce;
    unsigned long long _itemPostState[35];
    _Bool _nonItemDataChanged;
    CDStruct_8a690d05 _data;
    int _actions;
    NSHashTable *_postObservers;
    _Bool _notifyingPostObservers;
    long long _showsRecordingOverrides;
    NSDateFormatter *_timeItemDateFormatter;
    NSDateFormatter *_shortTimeItemDateFormatter;
    NSTimer *_timeItemTimer;
    NSString *_timeItemTimeString;
    NSString *_shortTimeItemTimeString;
    NSString *_serviceString;
    NSString *_serviceCrossfadeString;
    NSArray *_countryCodesShowingEmergencyOnlyStatus;
    unsigned long long _airplaneTransitionToken;
    _Bool _suppressCellServiceForAirplaneModeTransition;
    _Bool _cachedShowRSSI;
    _Bool _showsActivityIndicatorOnHomeScreen;
    long long _activityIndicatorEverywhereCount;
    long long _syncActivityIndicatorCount;
    NSString *_activityDisplayIdentifier;
    _Bool _showingNotChargingItem;
    NSString *_batteryDetailString;
    _Bool _shouldShowBluetoothHeadphoneGlyph;
    _Bool _shouldShowBluetoothHeadphoneBatteryPercent;
    _Bool _alarmEnabled;
    int _locationStatusBarIconType;
    SBSStatusBarStyleOverridesAssertion *_tetheringStatusBarStyleOverrideAssertion;
    SBUserSessionController *_lazy_userSessionController;
    NSString *_personName;
    NSString *_overridePersonName;
    SBQuietModeStateAggregator *_quietModeStateAggregator;
}

+ (int)_thermalColorForLevel:(long long)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager; // @synthesize telephonyManager=_override_telephonyManager;
@property(retain, nonatomic, getter=_userSessionController, setter=_setUserSessionController:) SBUserSessionController *userSessionController; // @synthesize userSessionController=_override_userSessionController;
- (void).cxx_destruct;
- (void)_updateLocationState;
- (void)_buildLocationState;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)_noteNotChargingStatusChanged;
- (void)_setShowingNotChargingItem;
- (_Bool)_shouldShowNotChargingItem;
- (_Bool)_shouldShowEmergencyOnlyStatus;
- (id)_sbCarrierNameForOperator:(id)arg1;
- (id)_displayStringForRegistrationStatus:(int)arg1;
- (id)_displayStringForSIMStatus:(id)arg1;
- (_Bool)_simStatusMeansLocked:(id)arg1;
- (void)_noteAirplaneModeChanged;
- (_Bool)_shouldShowPersonName;
- (void)_resetTimeItemFormatter;
- (void)_restartTimeItemTimer;
- (void)_stopTimeItemTimer;
- (void)_requestActions:(int)arg1;
- (void)_notifyNonItemDataChanged;
- (void)_notifyItemChanged:(int)arg1;
- (_Bool)_setItem:(int)arg1 enabled:(_Bool)arg2;
- (void)_postItem:(int)arg1 withState:(unsigned long long)arg2;
- (void)updateStatusBarItem:(int)arg1;
- (void)_updateTetheringState;
- (void)_removeTetheringStatusBarStyleOverrideAssertion;
- (void)_updatePersonNameItem;
- (void)_updateCarPlayItem;
- (void)_updateThermalColorItem;
- (void)_updateAirplayItem;
- (void)_updateQuietModeItem;
- (void)_updateRotationLockItem;
- (void)_updateLocationItem;
- (void)_updateActivityItem;
- (void)_updateCallForwardingItem;
- (void)_updateVPNItem;
- (void)_updateAlarmItem;
- (void)_updateTTYItem;
- (void)_updateBluetoothBatteryItem;
- (void)_updateBluetoothHeadphonesItem;
- (void)_updateBluetoothItem;
- (void)_updateBatteryItems:(id)arg1;
- (void)_updateAllInternalBatteryItems;
- (void)_updateLiquidDetectionItem;
- (void)_updateDataNetworkItem;
- (void)_updateServiceItem;
- (void)_updateSignalStrengthItem;
- (void)_updateAirplaneMode;
- (void)_updateTimeItems;
- (void)_updateLockItem;
- (void)_registerForNotifications;
- (void)removePostingObserver:(id)arg1;
- (void)addPostingObserver:(id)arg1;
- (void)setQuietModeStateAggregator:(id)arg1;
- (void)sendStatusBarActions:(int)arg1;
- (void)setUserNameOverride:(id)arg1;
- (void)updateBackgroundActivityStartTimeForApplication:(id)arg1;
- (void)setShowsSyncActivityIndicator:(_Bool)arg1;
- (void)setShowsActivityIndicatorEverywhere:(_Bool)arg1;
- (void)setShowsActivityIndicatorOnHomeScreen:(_Bool)arg1;
- (void)setAlarmEnabled:(_Bool)arg1;
- (void)setShouldShowBluetoothHeadphoneGlyph:(_Bool)arg1 andShouldShowBluetoothHeadphoneBatteryPercent:(_Bool)arg2;
- (void)setShowsOverridesForRecording:(_Bool)arg1;
- (void)_tickRefCount:(long long *)arg1 up:(_Bool)arg2 withTransitionBlock:(CDUnknownBlockType)arg3;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (const CDStruct_8a690d05 *)_statusBarData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

