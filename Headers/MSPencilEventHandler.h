//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSEventHandler.h"

@class MSLayerGroup, MSShapePathLayer;

@interface MSPencilEventHandler : MSEventHandler
{
    BOOL isDragging;
    struct CGPoint lastMouse;
    MSShapePathLayer *_shape;
    MSLayerGroup *_currentGroup;
}

@property(retain, nonatomic) MSLayerGroup *currentGroup; // @synthesize currentGroup=_currentGroup;
@property(retain, nonatomic) MSShapePathLayer *shape; // @synthesize shape=_shape;
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)shouldDrawLayerSelection;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)addCurvePoint:(id)arg1;
- (void)addPoint:(struct CGPoint)arg1;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (BOOL)mouseDownEvent:(id)arg1;
- (BOOL)pathShouldClose;
- (void)removeRedundantPoints:(id)arg1;
- (id)fittedBezierPathFromShapePath:(id)arg1;
- (void)unflattenResult;
- (void)selectShape;
- (void)removeShape;
- (void)finishShapeOrRemoveIfEmpty;
- (void)handlerWillLoseFocus;
- (id)toolbarIdentifier;
- (void)handlerGotFocus;
- (void)adjustStyleForGroup:(id)arg1;
- (void)insertNewShapeForEditingAtPoint:(struct CGPoint)arg1;

@end

