//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableTextLayer.h"

@class NSBezierPath;

@interface MSImmutableTextLayer : _MSImmutableTextLayer
{
    BOOL _isEditingText;
    NSBezierPath *_firstUnderlyingShapePath;
    double _fontSize;
}

@property(nonatomic) BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSBezierPath *firstUnderlyingShapePath; // @synthesize firstUnderlyingShapePath=_firstUnderlyingShapePath;
- (void).cxx_destruct;
- (id)initWithMutableModelObject:(id)arg1;

@end

