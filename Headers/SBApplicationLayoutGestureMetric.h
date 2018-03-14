//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAnalyticsBackendEventHandling.h"

@class NSString, PETScalarEventTracker;

@interface SBApplicationLayoutGestureMetric : NSObject <SBAnalyticsBackendEventHandling>
{
    PETScalarEventTracker *_pinGestureCompletionTracker;
    PETScalarEventTracker *_unpinGestureCompletionTracker;
    PETScalarEventTracker *_movePIPGestureCompletionTracker;
    PETScalarEventTracker *_moveSideGestureCompletionTracker;
}

- (void).cxx_destruct;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (unsigned long long)_moveActionForInitialSpaceConfig:(long long)arg1 finalConfig:(long long)arg2;
- (unsigned long long)_moveActionForInitialFloatingConfig:(long long)arg1 finalConfig:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

