@class NSString, AVSpeechSynthesisProviderVoice;

@interface AVSpeechSynthesisProviderRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *ssmlRepresentation;
@property (retain, nonatomic) AVSpeechSynthesisProviderVoice *voice;
@property (retain, nonatomic) NSString *jobIdentifier;
@property (retain, nonatomic) NSString *ssmlRepresentation;
@property (retain, nonatomic) AVSpeechSynthesisProviderVoice *voice;

+ (void)initialize;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSSMLRepresentation:(id)a0 voice:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSSMLRepresentation:(id)a0 voice:(id)a1;

@end
