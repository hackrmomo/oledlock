//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBViewControllerAnimatedTransitioning.h"
#import "SBViewControllerRestartableTransitioning.h"

@protocol SBViewControllerReversibleAnimatedTransitioning <SBViewControllerAnimatedTransitioning, SBViewControllerRestartableTransitioning>
- (void)cancelTransition:(id <SBViewControllerContextTransitioning>)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
@end

