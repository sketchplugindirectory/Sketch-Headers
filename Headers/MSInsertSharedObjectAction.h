//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseAction.h"

#import "NSMenuDelegate.h"

@class NSString;

@interface MSInsertSharedObjectAction : MSBaseAction <NSMenuDelegate>
{
}

- (BOOL)hasSubMenu;
- (id)noSharedObjectsView;
- (void)showSharedObjectsSheet:(id)arg1;
- (void)insertSharedObjectInstance:(id)arg1;
- (id)menuItemForMenu:(id)arg1 name:(id)arg2 sharedObject:(id)arg3;
- (id)sharedObjectName;
- (id)unsortedSharedObjects;
- (id)firstSharedObjectForContents:(id)arg1;
- (void)populateMenu:(id)arg1 withDescriptors:(id)arg2;
- (void)updateMenuForSymbols:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

