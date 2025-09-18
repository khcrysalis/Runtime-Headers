@class NSArray, NSDictionary, NSString;

@interface AVSpeechSynthesisProviderVoice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *primaryLanguages;
@property (retain, nonatomic) NSArray *supportedLanguages;
@property (retain, nonatomic) NSDictionary *extraAttributes;
@property (nonatomic) struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } auComponentDesc;
@property (retain, nonatomic) NSString *synthesizerBundleIdentifier;
@property (retain, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) NSString *groupName;
@property (nonatomic) BOOL isFirstParty;
@property (nonatomic) BOOL isPersonalVoice;
@property (nonatomic) BOOL hasPerVoiceSettings;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *supportedLanguages;
@property (readonly, nonatomic) NSArray *primaryLanguages;
@property (nonatomic) long long voiceSize;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long gender;
@property (nonatomic) long long age;

+ (void)updateSpeechVoices;
+ (void)updateSpeechVoicesForClient:(id)a0;
+ (void)initialize;
+ (void)updateSpeechVoices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)supportedCharacterSet;
- (id)uniqueAudioDescSpeechSynthTuple;
- (id)fullBundleIdentifier;
- (id)initWithName:(id)a0 identifier:(id)a1 primaryLanguages:(id)a2 supportedLanguages:(id)a3;
- (id)rawTTSIdentifier;
- (id)uniqueAudioDescTriple;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 identifier:(id)a1 primaryLanguages:(id)a2 supportedLanguages:(id)a3;

@end
