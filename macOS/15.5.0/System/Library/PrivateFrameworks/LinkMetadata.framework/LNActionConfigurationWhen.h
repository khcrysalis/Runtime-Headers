@class LNActionConfigurationCondition, LNActionConfiguration;

@interface LNActionConfigurationWhen : LNActionConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNActionConfigurationCondition *condition;
@property (readonly, nonatomic) LNActionConfiguration *when;
@property (readonly, nonatomic) LNActionConfiguration *otherwise;

- (id)actionConfigurationByEvaluatingAction:(id)a0;
- (id)actionConfigurationByEvaluatingAction:(id)a0 context:(id)a1;
- (id)valueForAction:(id)a0 context:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCondition:(id)a0 when:(id)a1 otherwise:(id)a2;

@end
