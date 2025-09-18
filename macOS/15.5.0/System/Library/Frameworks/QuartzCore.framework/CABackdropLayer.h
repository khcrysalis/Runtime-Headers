@class NSString;
@protocol CABackdropLayerDelegate, CALayerDelegate;

@interface CABackdropLayer : CALayer

@property (class, readonly, copy, nonatomic) NSString *mt_keyPathForColorMatrixDrivenOpacity;
@property (class, readonly, copy, nonatomic) NSString *mt_keyPathForColorMatrixDrivenInoperativeOpacity;

@property (readonly, nonatomic) double mt_colorMatrixDrivenOpacity;
@property (readonly, nonatomic) double mt_colorMatrixDrivenInoperativeOpacity;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *groupName;
@property BOOL usesGlobalGroupNamespace;
@property (copy) NSString *groupNamespace;
@property double scale;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backdropRect;
@property double marginWidth;
@property BOOL disablesOccludedBackdropBlurs;
@property BOOL captureOnly;
@property BOOL allowsInPlaceFiltering;
@property BOOL reducesCaptureBitDepth;
@property BOOL ignoresScreenClip;
@property BOOL preallocatesScreenArea;
@property double bleedAmount;
@property BOOL windowServerAware;
@property (getter=isInverseMeshed) BOOL inverseMeshed;
@property BOOL allowsSubstituteColor;
@property struct CGColor { } *substituteColor;
@property BOOL ignoresOffscreenGroups;
@property double zoom;
@property (weak) id<CABackdropLayerDelegate, CALayerDelegate> delegate;

+ (struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })mt_colorMatrixForOpacity:(double)a0;
+ (id)mt_orderedFilterTypes;
+ (id)mt_orderedFilterTypesBlurAtEnd;
+ (void)initialize;
+ (id)defaultValueForKey:(id)a0;
+ (id)CA_attributes;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;

- (void)_mt_applyFilterDescription:(id)a0 remainingExistingFilters:(id)a1 filterOrder:(id)a2 removingIfIdentity:(BOOL)a3;
- (void)_mt_configureFilterOfType:(id)a0 ifNecessaryWithFilterOrder:(id)a1;
- (void)_mt_configureFilterOfType:(id)a0 ifNecessaryWithName:(id)a1 andFilterOrder:(id)a2;
- (void)_mt_removeFilterOfType:(id)a0 ifNecessaryWithName:(id)a1;
- (void)_mt_removeFilterOfTypeIfNecessary:(id)a0;
- (void)_mt_setColorMatrix:(struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })a0 withName:(id)a1 filterOrder:(id)a2 removingIfIdentity:(BOOL)a3;
- (void)_mt_setValue:(id)a0 forFilterOfType:(id)a1 valueKey:(id)a2 filterOrder:(id)a3 removingIfIdentity:(BOOL)a4;
- (void)mt_applyMaterialDescription:(id)a0 removingIfIdentity:(BOOL)a1;
- (void)mt_setColorMatrixDrivenInoperativeOpacity:(double)a0 removingIfIdentity:(BOOL)a1;
- (void)mt_setColorMatrixDrivenOpacity:(double)a0 removingIfIdentity:(BOOL)a1;
- (void)didChangeValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)_renderBackgroundInContext:(struct CGContext { } *)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;

@end
