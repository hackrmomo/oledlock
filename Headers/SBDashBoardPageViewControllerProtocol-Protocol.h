//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplicationHosting.h"
#import "SBDashBoardViewPresenting.h"

@protocol SBDashBoardPageViewControllerProtocol <SBDashBoardViewPresenting, SBApplicationHosting>
+ (unsigned long long)requiredCapabilities;
+ (_Bool)isAvailableForConfiguration;
@property(readonly, nonatomic) _Bool authenticated;
@property(nonatomic, getter=isTransitioning) _Bool transitioning;
@property(nonatomic) __weak id <SBDashBoardViewControllerProtocol> dashBoardViewController;

@optional
- (double)listInsetX;
- (double)customListWidth;
- (unsigned long long)listWidthStrategy;
- (unsigned long long)listLayout;
- (double)dateTimeInsetX;
- (unsigned long long)dateTimeLayout;
@end
