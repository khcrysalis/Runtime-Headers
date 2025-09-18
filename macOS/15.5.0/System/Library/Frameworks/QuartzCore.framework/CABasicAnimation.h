@interface CABasicAnimation : CAPropertyAnimation

@property BOOL roundsToInteger;
@property double startAngle;
@property double endAngle;
@property (retain) id fromValue;
@property (retain) id toValue;
@property (retain) id byValue;

+ (id)CA_attributes;

- (void)NS_takeImpliedValuesFromPresentationObject:(id)a0 modelObject:(id)a1;
- (void)NS_transformValuesAtKeyPath:(id)a0 usingBlock:(id /* block */)a1;
- (id)animationForObject:(id)a0 key:(id)a1 targetValue:(id)a2;
- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (double)_timeFunction:(double)a0;

@end
