@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString *keyPath;
@property (getter=isAdditive) BOOL additive;
@property (getter=isCumulative) BOOL cumulative;
@property (retain) CAValueFunction *valueFunction;

+ (id)animationWithKeyPath:(id)a0;

- (void)NS_renameKeyPathsUsingBlock:(id /* block */)a0;
- (void)NS_addAffectedKeyPaths:(id)a0;
- (void)NS_renameKeyPath:(id)a0 toKeyPath:(id)a1;
- (id)animationForObject:(id)a0 key:(id)a1 targetValue:(id)a2;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (BOOL)additive;
- (BOOL)cumulative;

@end
