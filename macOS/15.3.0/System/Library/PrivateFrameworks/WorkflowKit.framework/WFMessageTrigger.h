@class NSString, NSArray;

@interface WFMessageTrigger : WFTrigger

@property (retain, nonatomic) NSString *selectedContents;
@property (retain, nonatomic) NSArray *selectedSenders;
@property (retain, nonatomic) NSArray *selectedSendersStrings;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)requiresNotification;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)messagesGreen;

- (id)contentCollectionWithEventInfo:(id)a0;
- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (BOOL)requiresEventInfoAsInput;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedDescriptionWithConfigurationSummaryWithCount:(unsigned long long)a0;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;
- (Class)shortcutInputContentItemClass;

@end
