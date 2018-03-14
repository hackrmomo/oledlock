//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBSceneLayoutWorkspaceTransactionDelegate.h"
#import "SBUIAnimationControllerObserver.h"
#import "SBWorkspaceApplicationSceneTransitionContextDelegate.h"

@class FBUIApplicationSceneDeactivationAssertion, NSMutableArray, NSString, NSTimer, SBAppLayout, SBFluidSwitcherViewController, SBMainDisplayLayoutState, SBMainWorkspaceTransaction, SBSceneLayoutWorkspaceTransaction, SBUISwitcherAnimationController;

@interface SBFluidSwitcherGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, SBWorkspaceApplicationSceneTransitionContextDelegate>
{
    _Bool _calledBeginWithGesture;
    SBFluidSwitcherViewController *_switcherViewController;
    SBAppLayout *_selectedAppLayout;
    FBUIApplicationSceneDeactivationAssertion *_appDeactivationAssertion;
    SBMainDisplayLayoutState *_originalLayoutState;
    SBMainDisplayLayoutState *_activeLayoutState;
    SBUISwitcherAnimationController *_animationController;
    SBMainWorkspaceTransaction *_finalRootTransaction;
    SBSceneLayoutWorkspaceTransaction *_sceneLayoutTransaction;
    CDUnknownBlockType _layoutCompletion;
    NSTimer *_activateScenesTimer;
    NSMutableArray *_iconForceTouchWindowHostWrappers;
}

@property(retain, nonatomic) NSMutableArray *iconForceTouchWindowHostWrappers; // @synthesize iconForceTouchWindowHostWrappers=_iconForceTouchWindowHostWrappers;
@property(retain, nonatomic) NSTimer *activateScenesTimer; // @synthesize activateScenesTimer=_activateScenesTimer;
@property(copy, nonatomic) CDUnknownBlockType layoutCompletion; // @synthesize layoutCompletion=_layoutCompletion;
@property(retain, nonatomic) SBSceneLayoutWorkspaceTransaction *sceneLayoutTransaction; // @synthesize sceneLayoutTransaction=_sceneLayoutTransaction;
@property(retain, nonatomic) SBMainWorkspaceTransaction *finalRootTransaction; // @synthesize finalRootTransaction=_finalRootTransaction;
@property(retain, nonatomic) SBUISwitcherAnimationController *animationController; // @synthesize animationController=_animationController;
@property(retain, nonatomic) SBMainDisplayLayoutState *activeLayoutState; // @synthesize activeLayoutState=_activeLayoutState;
@property(retain, nonatomic) SBMainDisplayLayoutState *originalLayoutState; // @synthesize originalLayoutState=_originalLayoutState;
@property(retain, nonatomic) FBUIApplicationSceneDeactivationAssertion *appDeactivationAssertion; // @synthesize appDeactivationAssertion=_appDeactivationAssertion;
@property(retain, nonatomic) SBAppLayout *selectedAppLayout; // @synthesize selectedAppLayout=_selectedAppLayout;
@property(nonatomic) __weak SBFluidSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
- (void).cxx_destruct;
- (id)_transitionRequestForApplicationTransitionContext:(id)arg1 eventLabel:(id)arg2;
- (id)_alertTransitionContextForActivation:(_Bool)arg1 ofAlert:(id)arg2;
- (id)_alertEntityForAppLayout:(id)arg1;
- (id)_copiedTransitionRequestFromTransitionRequest:(id)arg1;
- (id)_transitionRequestForFinalAction:(unsigned long long)arg1 eventLabel:(id)arg2;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (void)_failRunningLayoutStateTransition;
- (void)_runSceneLayoutTransactionForTransitionRequest:(id)arg1 updateScenes:(_Bool)arg2;
- (void)_addChildTransactionForFinalAction:(unsigned long long)arg1;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(CDUnknownBlockType)arg2;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (id)createSceneEntityForHandle:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (void)_finishWithGesture:(id)arg1;
- (void)_updateWithGesture:(id)arg1;
- (void)_beginWithGesture:(id)arg1;
- (void)_switcherGestureDidUpdate:(id)arg1;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_didInterruptWithReason:(id)arg1;
- (_Bool)_requireLiveHomeScreenContentBackdrop;
- (long long)_gestureType;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1 fluidSwitcherViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

