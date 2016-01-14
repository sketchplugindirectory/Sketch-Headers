//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSPage.h"

#import "MSPage.h"
#import "MSRootLayer.h"

@class MSArtboardGroup, MSLayoutGrid, MSRulerData, MSSimpleGrid, NSArray, NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSPage : _MSPage <MSRootLayer, MSPage>
{
    long long ignoreLayerSelectionDidChangeNotificationsCounter;
    id <MSPageDelegate> _pageDelegate;
    MSArtboardGroup *_currentArtboard;
    NSArray *_cachedArtboards;
    NSArray *_cachedExportableLayers;
}

+ (unsigned long long)traits;
+ (id)page;
@property(retain, nonatomic) NSArray *cachedExportableLayers; // @synthesize cachedExportableLayers=_cachedExportableLayers;
@property(retain, nonatomic) NSArray *cachedArtboards; // @synthesize cachedArtboards=_cachedArtboards;
@property(nonatomic) __weak MSArtboardGroup *currentArtboard; // @synthesize currentArtboard=_currentArtboard;
@property(nonatomic) __weak id <MSPageDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
- (void).cxx_destruct;
- (BOOL)shouldDrawSelection;
@property(readonly, nonatomic) BOOL hasClickThrough;
- (id)allAncestorsOfLayers:(id)arg1;
- (id)currentVerticalRulerData;
- (id)currentHorizontalRulerData;
- (void)moveLayersToArtboards;
- (BOOL)canContainLayer:(id)arg1;
- (id)ancestorsOfLayer:(id)arg1 inContainer:(id)arg2;
- (id)ancestorsOfLayer:(id)arg1;
- (void)ignoreLayerSelectionDidChangeNotificationsInBlock:(CDUnknownBlockType)arg1;
- (void)rectSizeDidChange:(id)arg1;
- (void)layerSelectionDidChange;
- (void)dataArray:(id)arg1 willRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 didAddObject:(id)arg2;
- (void)changeLayerExpandedTypeToAutomaticIfCollapsed;
@property(readonly, nonatomic) __weak NSArray *artboards;
- (void)setCurrentLayout:(id)arg1;
- (id)currentLayout;
- (void)setCurrentGrid:(id)arg1;
- (id)currentGrid;
- (id)parentRoot;
- (id)currentRoot;
- (id)ancestorTransforms;
- (id)ancestors;
- (id)parentPage;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (BOOL)resizeToFitChildrenWithOption:(long long)arg1;
- (BOOL)layers:(id)arg1 fitOnArtboard:(id)arg2;
- (id)destinationArtboardForLayers:(id)arg1 artboards:(id)arg2;
- (void)addOrRemoveLayerFromArtboardIfNecessary:(id)arg1;
- (void)tryToMoveLayer:(id)arg1 toArtboards:(id)arg2;
- (void)tryToMoveLayerToArtboard:(id)arg1;
- (id)exportableLayers;
- (id)symbolLayersInGroup:(id)arg1;
- (id)artboardForSlice:(id)arg1 inArtboards:(id)arg2;
@property(nonatomic) struct CGPoint rulerBase;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (id)transform;
- (void)invalidateCachedImmutableModelObjects;
- (void)setZoomValue:(double)arg1;
- (void)setScrollOrigin:(struct CGPoint)arg1;
- (void)setName:(id)arg1;
- (BOOL)canBeContainedByDocument;
- (void)dealloc;
- (id)selectedLayers;
- (id)parentGroup;
- (BOOL)canBeHovered;
- (id)displayName;
- (id)cloneForDocument:(id)arg1;
- (BOOL)isExportableViaDragAndDrop;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (id)previewImages;
- (void)duplicate:(id)arg1;
- (unsigned long long)displayType;
- (BOOL)parentOrSelfIsSymbol;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(readonly, nonatomic) id <MSSimpleGrid> gridGeneric; // @dynamic gridGeneric;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(readonly, nonatomic) id <MSRulerData> horizontalRulerDataGeneric; // @dynamic horizontalRulerDataGeneric;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatDoNotCascade;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, nonatomic) id <MSArray> layersGeneric;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(readonly, nonatomic) id <MSLayoutGrid> layoutGeneric; // @dynamic layoutGeneric;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSObject<NSCopying><NSCoding> *originalObjectID;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) struct CGPoint scrollOrigin;
@property(readonly, nonatomic) NSObject<NSCopying><NSCoding> *sharedObjectID;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly, nonatomic) id <MSStyle> styleGeneric;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) MSRulerData *verticalRulerData;
@property(readonly, nonatomic) id <MSRulerData> verticalRulerDataGeneric; // @dynamic verticalRulerDataGeneric;
@property(readonly, nonatomic) double zoomValue;

@end
