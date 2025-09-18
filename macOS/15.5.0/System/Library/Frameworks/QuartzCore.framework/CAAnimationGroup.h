@class NSArray;

@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray *animations;

+ (id)CA_attributes;

- (void)NS_renameKeyPathsUsingBlock:(id /* block */)a0;
- (void)NS_addAffectedKeyPaths:(id)a0;
- (void)NS_renameKeyPath:(id)a0 toKeyPath:(id)a1;
- (void)NS_takeImpliedValuesFromPresentationObject:(id)a0 modelObject:(id)a1;
- (void)NS_transformValuesAtKeyPath:(id)a0 usingBlock:(id /* block */)a1;
- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void)setDefaultDuration:(double)a0;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (unsigned int)_propertyFlagsForLayer:(id)a0;

@end
