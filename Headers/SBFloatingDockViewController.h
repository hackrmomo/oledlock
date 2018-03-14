//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFTouchPassThroughViewController.h"

#import "SBFloatingDockSuggestionsViewControllerDelegate.h"
#import "SBFolderControllerDelegate.h"
#import "SBFolderPresentingViewControllerDelegate.h"
#import "SBIconListModelObserver.h"
#import "SBIconListViewDragDelegate.h"
#import "SBIconViewMapDelegate.h"
#import "SBIconViewQuerying.h"
#import "SBScaleIconZoomAnimationContaining.h"

@class NSHashTable, NSMutableArray, NSString, SBApplicationController, SBFTouchPassThroughView, SBFloatingDockSuggestionsViewController, SBFloatingDockView, SBFolderController, SBFolderPresentingViewController, SBHomeScreenIconTransitionAnimator, SBIconController, SBIconListModel, SBIconViewMap, SBWorkspaceApplicationSceneTransitionContext, UIView, UIWindow, _UILegibilitySettings;

@interface SBFloatingDockViewController : SBFTouchPassThroughViewController <SBIconViewMapDelegate, SBIconListViewDragDelegate, SBIconListModelObserver, SBFloatingDockSuggestionsViewControllerDelegate, SBFolderControllerDelegate, SBFolderPresentingViewControllerDelegate, SBScaleIconZoomAnimationContaining, SBIconViewQuerying>
{
    SBFloatingDockView *_dockView;
    _UILegibilitySettings *_legibilitySettings;
    NSHashTable *_bouncedDropSessions;
    struct __CFRunLoopObserver *_resizeRunLoopObserver;
    id <SBFloatingDockViewControllerDelegate> _delegate;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBIconViewMap *_dockIconViewMap;
    SBIconListModel *_dockListModel;
    SBFloatingDockSuggestionsViewController *_suggestionsViewController;
    SBFolderPresentingViewController *_folderPresentingViewController;
    SBHomeScreenIconTransitionAnimator *_currentFolderAnimator;
    NSMutableArray *_currentExpandCompletions;
    NSMutableArray *_currentCollapseCompletions;
    SBFTouchPassThroughView *_scalingView;
    SBWorkspaceApplicationSceneTransitionContext *_currentTransitionContext;
}

@property(retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *currentTransitionContext; // @synthesize currentTransitionContext=_currentTransitionContext;
@property(retain, nonatomic) SBFTouchPassThroughView *scalingView; // @synthesize scalingView=_scalingView;
@property(retain, nonatomic) NSMutableArray *currentCollapseCompletions; // @synthesize currentCollapseCompletions=_currentCollapseCompletions;
@property(retain, nonatomic) NSMutableArray *currentExpandCompletions; // @synthesize currentExpandCompletions=_currentExpandCompletions;
@property(retain, nonatomic) SBHomeScreenIconTransitionAnimator *currentFolderAnimator; // @synthesize currentFolderAnimator=_currentFolderAnimator;
@property(retain, nonatomic) SBFolderPresentingViewController *folderPresentingViewController; // @synthesize folderPresentingViewController=_folderPresentingViewController;
@property(retain, nonatomic) SBFloatingDockSuggestionsViewController *suggestionsViewController; // @synthesize suggestionsViewController=_suggestionsViewController;
@property(retain, nonatomic) SBIconListModel *dockListModel; // @synthesize dockListModel=_dockListModel;
@property(retain, nonatomic) SBIconViewMap *dockIconViewMap; // @synthesize dockIconViewMap=_dockIconViewMap;
@property(readonly, nonatomic) SBApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
@property(nonatomic) __weak id <SBFloatingDockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (_Bool)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDragOnIconView:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint)arg4;
- (id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (_Bool)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerWillBeginScrolling:(id)arg1;
- (void)folderControllerShouldEndEditing:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerWillClose:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (Class)controllerClassForFolder:(id)arg1;
- (id)targetIconContainerView;
- (void)returnScalingView;
- (id)borrowScalingView;
- (id)dockIconListView;
- (id)currentIconListView;
- (id)iconViewMap;
@property(readonly, nonatomic) UIView *fallbackIconContainerView;
@property(readonly, nonatomic) UIWindow *animationWindow;
@property(readonly, nonatomic) UIView *containerView;
- (void)folderPresentationController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id)arg4;
- (id)folderPresentationController:(id)arg1 animationControllerForTransitionWithFolder:(id)arg2 presenting:(_Bool)arg3 animated:(_Bool)arg4;
- (void)_presentFolderForIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissPresentedFolderAnimated:(_Bool)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentFolderForIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)floatingDockSuggestionsViewControllerDidChangeNumberOfVisibleSuggestions:(id)arg1;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2;
- (_Bool)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDragOnIconView:(id)arg2;
- (void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
- (void)iconListView:(id)arg1 performIconDrop:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint)arg3;
- (id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2;
- (_Bool)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2;
- (void)viewMap:(id)arg1 configureIconView:(id)arg2;
- (long long)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (unsigned long long)viewMap:(id)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
- (id)viewMapShouldPrepareViewsOfClasses:(id)arg1;
- (Class)iconViewClassForIcon:(id)arg1 location:(long long)arg2;
- (_Bool)viewMap:(id)arg1 shouldRecycleView:(id)arg2;
- (id)windowForRecycledViewsInViewMap:(id)arg1;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (void)_sizeCategoryDidChange:(id)arg1;
- (void)reduceTransparencyEnabledStateDidChange:(id)arg1;
- (void)iconDraggingDidChange:(id)arg1;
- (void)iconEditingDidChange:(id)arg1;
- (void)iconModelDidLayout:(id)arg1;
- (void)iconControllerDidChangeIconModel:(id)arg1;
- (_Bool)_shouldIndicateImpossibleDrop;
- (void)_updatePlatterShadowForEnvironmentMode:(long long)arg1;
- (void)_updateFolderBackgroundsForEnvironmentMode:(long long)arg1;
- (void)_updateDockForEnvironmentMode:(long long)arg1;
- (unsigned long long)_folderIconBackgroundStyleForEnvironmentMode:(long long)arg1;
- (unsigned long long)_currentFolderIconBackgroundStyle;
- (unsigned long long)_platterEffectForPresentedFolder;
- (unsigned long long)_backgroundEffectForPresentedFolder;
- (_Bool)_isInAppToAppTransition;
- (long long)_locationForIcon:(id)arg1;
- (void)_coalesceRequestsToResizeDockForChangedNumberOfIcons;
- (void)_resizeDockForChangedNumberOfIcons;
- (_Bool)_shouldOpenFolderIcon:(id)arg1;
- (void)_rebuildAfterIconModelChange;
- (void)_rebuildIconListViewAndViewMap;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(long long)arg2;
- (id)iconViewForIcon:(id)arg1 location:(long long)arg2;
- (void)cleanupAfterTransitionToEnvironmentMode:(long long)arg1;
- (void)prepareForTransitionToEnvironmentMode:(long long)arg1 fromDockVisible:(_Bool)arg2 toDockVisible:(_Bool)arg3;
- (_Bool)isDisplayingIcon:(id)arg1;
- (void)layoutUserControlledIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(_Bool)arg3;
- (void)dockViewDidBecomeVisible;
- (void)dockViewDidResignVisible;
- (void)dockViewWillResignVisible;
- (void)dockViewWillBecomeVisible;
@property(readonly, nonatomic) struct CGRect floatingDockScreenPresentationFrame;
@property(readonly, nonatomic) struct CGRect floatingDockScreenFrame;
@property(readonly, nonatomic) SBFolderController *presentedFolderController;
@property(readonly, nonatomic, getter=isPresentingFolder) _Bool presentingFolder;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)enumerateVisibleIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (double)minimumVerticalMarginForFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) double preferredVerticalMargin;
- (double)contentHeightForFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) double contentHeight;
- (id)recentIconListView;
- (id)userIconListView;
@property(retain, nonatomic) SBFloatingDockView *dockView;
- (id)dockViewIfExists;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithIconController:(id)arg1 applicationController:(id)arg2 suggestionsViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

