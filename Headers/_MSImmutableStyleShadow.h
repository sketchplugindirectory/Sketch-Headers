//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableStylePart.h"

@class MSImmutableColor, MSImmutableGraphicsContextSettings;

@interface _MSImmutableStyleShadow : MSImmutableStylePart
{
    double _blurRadius;
    BOOL _hasShadow;
    double _offsetX;
    double _offsetY;
    double _spread;
    MSImmutableColor *_color;
    MSImmutableGraphicsContextSettings *_contextSettings;
}

@property(retain, nonatomic) MSImmutableGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSImmutableColor *color; // @synthesize color=_color;
@property(nonatomic) double spread; // @synthesize spread=_spread;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

