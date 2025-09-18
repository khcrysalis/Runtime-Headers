@interface CADRespondedEventsPredicate : CADPredicate <EKPredicateEvaluating, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)predicate;

- (BOOL)ekPredicateEvaluateWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;

@end
