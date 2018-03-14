//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSystemGestureRecognizerDelegate.h"

@class NSString, SBCoverSheetDismissGestureSettings, UIGestureRecognizer, UIPanGestureRecognizer, UIViewController;

@interface SBCoverSheetSystemGesturesDelegate : NSObject <SBSystemGestureRecognizerDelegate>
{
    int _syntheticAppearState;
    id <SBCoverSheetSystemGestureDelegatePositionProviding> _positionProvider;
    UIPanGestureRecognizer *_presentGestureRecognizer;
    UIViewController *_viewController;
    UIGestureRecognizer *_dismissGestureRecognizer;
    UIGestureRecognizer *_dismissAddendumGestureRecognizer;
    UIGestureRecognizer *_preemptingGestureRecognizer;
    SBCoverSheetDismissGestureSettings *_dismissGestureSettings;
}

@property(retain, nonatomic) SBCoverSheetDismissGestureSettings *dismissGestureSettings; // @synthesize dismissGestureSettings=_dismissGestureSettings;
@property(retain, nonatomic) UIGestureRecognizer *preemptingGestureRecognizer; // @synthesize preemptingGestureRecognizer=_preemptingGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *dismissAddendumGestureRecognizer; // @synthesize dismissAddendumGestureRecognizer=_dismissAddendumGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) int syntheticAppearState; // @synthesize syntheticAppearState=_syntheticAppearState;
@property(retain, nonatomic) UIPanGestureRecognizer *presentGestureRecognizer; // @synthesize presentGestureRecognizer=_presentGestureRecognizer;
@property(nonatomic) __weak id <SBCoverSheetSystemGestureDelegatePositionProviding> positionProvider; // @synthesize positionProvider=_positionProvider;
- (void).cxx_destruct;
- (_Bool)isAnyGestureActivelyRecognized;
- (_Bool)_isGestureActivelyRecognized:(id)arg1;
- (_Bool)_canPresentGestureBegin;
- (_Bool)_canDismissGestureBegin;
- (_Bool)_isGestureAllowedByTopmostAlertOrApp;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (_Bool)isPresentGestureActive;
- (_Bool)isDismissGestureActive;
- (id)initWithViewController:(id)arg1 dismissGestureRecognizer:(id)arg2 dismissAddendumGestureRecognizer:(id)arg3 dismissalPreemptingGestureRecognizer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

