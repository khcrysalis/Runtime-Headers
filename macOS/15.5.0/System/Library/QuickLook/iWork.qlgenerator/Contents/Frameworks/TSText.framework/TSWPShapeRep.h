@class TSWPRep, NSString, TSWPStorage, NSObject;
@protocol TSDContainerInfo;

@interface TSWPShapeRep : TSDShapeRep <TSDMagicMoveMatching, TSWPContainerTextEditingRep, TSWPShapeLayoutDelegate> {
    struct CGPoint { double x; double y; } _originalAutosizePositionOffset;
}

@property (readonly, nonatomic) TSWPStorage *textStorageForTexture;
@property (readonly, nonatomic) BOOL isShapeInvisible;
@property (readonly, nonatomic) TSWPRep *containedRep;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;
+ (id)magicMoveTextMatchesBetweenOutgoingObjects:(id)a0 andIncomingObjects:(id)a1 textureDescription:(id)a2 textDeliveryType:(long long)a3 repToOpacityTextRangeDictMap:(id)a4;
+ (id)magicMoveAnimationMatchesFromMatches:(id)a0 description:(id)a1;
+ (void)p_getOutgoingTextureSet:(id *)a0 incomingTextureSet:(id *)a1 withOutgoingRep:(id)a2 outgoingChunkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 outgoingTextureByGlyphStyle:(int)a4 incomingRep:(id)a5 incomingChunkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 incomingTextureByGlyphStyle:(int)a7 includeListLabels:(BOOL)a8;
+ (BOOL)p_listLabelsAreEqualWithOutgoingStorage:(id)a0 outgoingCharIndex:(long long)a1 incomingStorage:(id)a2 incomingCharIndex:(long long)a3 shouldMatch:(BOOL *)a4;
+ (unsigned long long)p_longestChunkInOutgoingObjects:(id)a0 incomingObjects:(id)a1 textDeliveryType:(long long)a2 addOutgoingChunksToArray:(id)a3 addIncomingChunksToArray:(id)a4 textureDescription:(id)a5;
+ (double)p_mmAttributeMatchPercentWithOutgoingTextChunk:(id)a0 incomingTextChunk:(id)a1;
+ (id)p_potentialMatchesWithChunkLength:(unsigned long long)a0 outgoingTextChunks:(id)a1 incomingTextChunks:(id)a2 textureDescription:(id)a3 textDeliveryType:(long long)a4;
+ (BOOL)p_shouldDisableTextMorphingBetweenOutgoingRep:(id)a0 outgoingChunkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 incomingRep:(id)a2 incomingChunkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
+ (id)p_stringByApplyingCapitalizationPropertyFromStorage:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 toString:(id)a2;
+ (id)p_textureSetFromRep:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textureByGlyphStyle:(int)a2 includeListLabel:(BOOL)a3 desiredContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

- (BOOL)p_hasContentForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 labelOnly:(BOOL)a1;
- (void)addChildTexturesToTextureSet:(id)a0 forDescription:(id)a1 passingTest:(id /* block */)a2;
- (id)newTextureRenderableForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 includeListLabel:(BOOL)a1 isMagicMove:(BOOL)a2 desiredContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 textureByGlyphStyle:(int)a4 includeGroupedShadow:(BOOL)a5 groupedShadowOnly:(BOOL)a6 textureBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a7;
- (void)p_drawRubyInContext:(struct CGContext { } *)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)p_getBoundsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 applyReflection:(BOOL *)a3 applyShadow:(BOOL *)a4 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 includeListLabel:(BOOL)a6 isMagicMove:(BOOL)a7;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_getCaretRectForCharIndex:(unsigned long long)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 integralBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 leadingEdge:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_rectForRubyFields:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)stageChunksForDeliveryStyle:(unsigned long long)a0 byGlyphStyle:(int)a1;
- (long long)stageIndexForStorageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forTextureDescription:(id)a1 stageChunks:(id)a2;
- (id)textureForDescription:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)childReps;
- (id)childRepsForHitTesting;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)updateChildrenFromLayout;
- (id)layoutsForChildReps;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reflectionFrameInRootForClipping;
- (void)p_destroyContainedRep;

@end
