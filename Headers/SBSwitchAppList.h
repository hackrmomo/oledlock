//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SBSwitchAppList : NSObject
{
    NSArray *_appLayouts;
}

@property(copy, nonatomic) NSArray *appLayouts; // @synthesize appLayouts=_appLayouts;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resetAppLayouts;
- (id)previousAppLayoutForAppLayout:(id)arg1;
- (id)nextAppLayoutForAppLayout:(id)arg1;
- (void)resetList;
- (_Bool)containsAppLayout:(id)arg1;
- (id)description;
- (id)init;

@end

