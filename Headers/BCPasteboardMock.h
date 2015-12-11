//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface BCPasteboardMock : NSObject
{
    NSMutableDictionary *_storage;
}

+ (id)generalPasteboard;
@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)types;
- (id)availableTypeFromArray:(id)arg1;
- (id)propertyListForType:(id)arg1;
- (BOOL)setPropertyList:(id)arg1 forType:(id)arg2;
- (id)stringForType:(id)arg1;
- (BOOL)setString:(id)arg1 forType:(id)arg2;
- (id)dataForType:(id)arg1;
- (void)setData:(id)arg1 forType:(id)arg2;
- (void)declareTypes:(id)arg1 owner:(id)arg2;
- (id)init;

@end

