//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSEventHandler.h"

@class MSShapeGroup;

@interface MSInsertLineEventHandler : MSEventHandler
{
    CDUnknownBlockType _lineShapeCreator;
    MSShapeGroup *_lineShape;
}

@property(retain, nonatomic) MSShapeGroup *lineShape; // @synthesize lineShape=_lineShape;
@property(copy, nonatomic) CDUnknownBlockType lineShapeCreator; // @synthesize lineShapeCreator=_lineShapeCreator;
- (void).cxx_destruct;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)findCurrentGroup;
- (double)lineThickness;
- (id)style;
- (void)createShapeAtMouse:(struct CGPoint)arg1;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (id)defaultCursor;
- (struct CGPoint)roundMouse:(struct CGPoint)arg1;

@end

