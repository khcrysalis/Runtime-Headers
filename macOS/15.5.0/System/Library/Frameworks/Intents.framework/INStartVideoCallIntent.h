@class NSArray, INStartCallRequestMetadata, NSString;

@interface INStartVideoCallIntent : INIntent <INStartVideoCallIntentExport>

@property (readonly, copy) NSArray *contacts;
@property long long audioRoute;
@property (copy) INStartCallRequestMetadata *callRequestMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)cd_groupName;
- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (BOOL)cd_saveToPeopleStore;
- (id)cd_sender;
- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setContacts:(id)a0;
- (id)initWithContacts:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_spotlightContentType;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
