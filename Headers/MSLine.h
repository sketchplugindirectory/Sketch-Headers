//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCLineObject.h"

@interface MSLine : BCLineObject
{
    struct CGRect _area;
    BOOL _areaIsInitial;
    unsigned long long _snapTag;
    id _associatedObject;
}

+ (id)linesForRect:(struct CGRect)arg1;
+ (id)verticalLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2 snapTag:(unsigned long long)arg3;
+ (id)horizontalLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2 snapTag:(unsigned long long)arg3;
+ (id)verticalLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2;
+ (id)horizontalLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2;
+ (id)verticalLineWithPosition:(double)arg1 snapTag:(unsigned long long)arg2;
+ (id)horizontalLineWithPosition:(double)arg1 snapTag:(unsigned long long)arg2;
+ (id)verticalLineWithPosition:(double)arg1;
+ (id)horizontalLineWithPosition:(double)arg1;
@property(nonatomic) __weak id associatedObject; // @synthesize associatedObject=_associatedObject;
@property(readonly, nonatomic) unsigned long long snapTag; // @synthesize snapTag=_snapTag;
- (void).cxx_destruct;
- (id)description;
- (struct CGRect)dirtyAbsoluteRectInFrame:(struct CGRect)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)drawWithZoomValue:(double)arg1;
- (void)addRect:(struct CGRect)arg1;
- (id)initVerticalLineWithPosition:(double)arg1 snapTag:(unsigned long long)arg2;
- (id)initHorizontalLineWithPosition:(double)arg1 snapTag:(unsigned long long)arg2;

@end

