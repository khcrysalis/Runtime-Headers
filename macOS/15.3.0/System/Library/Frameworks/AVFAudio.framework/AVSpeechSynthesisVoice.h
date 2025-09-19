@class NSString, AVSpeechSynthesisProviderVoice, NSDictionary;

@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long quality;
@property (readonly, nonatomic) NSString *nameWithoutQuality;
@property (readonly, nonatomic) NSString *nonLocalizedName;
@property (readonly, nonatomic) NSString *nonLocalizedNameWithoutQuality;
@property (readonly, nonatomic) BOOL supportsSSML;
@property (nonatomic) BOOL isNoveltyVoice;
@property (retain, nonatomic) AVSpeechSynthesisProviderVoice *synthesisProviderVoice;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long quality;
@property (nonatomic) long long gender;
@property (nonatomic) unsigned long long voiceTraits;
@property (readonly, nonatomic) NSDictionary *audioFileSettings;

+ (id)speechVoices;
+ (id)currentLanguageCode;
+ (id)speechVoicesIncludingSuperCompact;
+ (id)voiceWithIdentifier:(id)a0;
+ (id)voiceWithLanguage:(id)a0;
+ (id)_remapOldIdentifierIfNecessary:(id)a0;
+ (id)_speechVoicesIncludingSiri;
+ (id)_speechVoicesIncludingSiri:(BOOL)a0;
+ (id)_speechVoicesIncludingSiriAndSuperCompact;
+ (id)_voiceFromInternalVoiceListWithIdentifier:(id)a0;
+ (id)_voiceWithIdentifier:(id)a0 includingSiri:(BOOL)a1;
+ (void)test_setInternalSpeechVoices:(id)a0;
+ (void)test_setSpeechVoices:(id)a0;
+ (id)test_speechVoices;
+ (void)initialize;
+ (id)speechVoices;
+ (id)currentLanguageCode;
+ (id)voiceWithIdentifier:(id)a0;
+ (id)voiceWithLanguage:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isInstalled;
- (long long)gender;
- (id)initWithLanguage:(id)a0;
- (void)setGender:(long long)a0;
- (BOOL)isDefault;
- (void)setIsDefault:(BOOL)a0;
- (BOOL)isSystemVoice;
- (id)siriDisplayName;
- (BOOL)canBeDownloaded;
- (void)setIsInstalled:(BOOL)a0;
- (long long)assetSize;
- (id)backupName;
- (BOOL)isSynthesisProviderVoice;
- (void)setAssetSize:(long long)a0;
- (void)setBackupName:(id)a0;
- (void)setCanBeDownloaded:(BOOL)a0;
- (void)setNonLocalizedNameWithoutQuality:(id)a0;
- (unsigned long long)voiceTraits;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)audioFileSettings;

@end
