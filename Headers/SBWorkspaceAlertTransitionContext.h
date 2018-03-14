//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransitionContext.h"

@class SBWorkspaceAlert;

@interface SBWorkspaceAlertTransitionContext : SBWorkspaceTransitionContext
{
    SBWorkspaceAlert *_alertToActivate;
    SBWorkspaceAlert *_alertToDeactivate;
    _Bool _transitionIsAlertActivation;
}

@property(nonatomic) _Bool transitionIsAlertActivation; // @synthesize transitionIsAlertActivation=_transitionIsAlertActivation;
@property(retain, nonatomic) SBWorkspaceAlert *alertToDeactivate; // @synthesize alertToDeactivate=_alertToDeactivate;
@property(retain, nonatomic) SBWorkspaceAlert *alertToActivate; // @synthesize alertToActivate=_alertToActivate;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;

@end

