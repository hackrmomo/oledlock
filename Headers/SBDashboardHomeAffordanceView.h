//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUIOptionalLegibility.h"

@class MTLumaDodgePillView, MTStaticColorPillView, NSString, UIColor, _UILegibilitySettings;

@interface SBDashboardHomeAffordanceView : UIView <SBUIOptionalLegibility>
{
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _style;
    UIColor *_overrideColor;
    MTStaticColorPillView *_staticHomeAffordance;
    MTLumaDodgePillView *_dynamicHomeAffordance;
}

+ (struct CGSize)suggestedSizeForContentWidth:(double)arg1;
@property(nonatomic) __weak MTLumaDodgePillView *dynamicHomeAffordance; // @synthesize dynamicHomeAffordance=_dynamicHomeAffordance;
@property(nonatomic) __weak MTStaticColorPillView *staticHomeAffordance; // @synthesize staticHomeAffordance=_staticHomeAffordance;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void).cxx_destruct;
- (id)_viewForStyle:(unsigned long long)arg1;
- (void)_transitionToStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_updateForLegibility;
- (void)_createDynamicHomeAffordance;
- (void)_createStaticHomeAffordance;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

