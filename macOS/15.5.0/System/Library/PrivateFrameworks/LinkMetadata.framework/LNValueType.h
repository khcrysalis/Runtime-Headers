@class NSArray, NSString;

@interface LNValueType : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) NSArray *objectClassesForCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *cat_dialogType;

- (id)cat_keyPath;
- (id)cat_value:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (Class)objectClass;
- (BOOL)valueIsKindOfType:(id)a0;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (BOOL)objectIsMemberOfType:(id)a0;

@end
