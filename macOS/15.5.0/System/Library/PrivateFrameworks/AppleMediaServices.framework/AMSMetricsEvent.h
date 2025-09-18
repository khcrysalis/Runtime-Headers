@class NSString, NSDictionary, NSMutableDictionary, ACAccount, NSNumber;

@interface AMSMetricsEvent : NSObject <NSCopying, NSSecureCoding, AMSEngagementEvent> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalStateLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=im_setName:) NSString *im_name;
@property (retain, nonatomic, setter=im_setContentIdentifier:) id im_contentIdentifier;
@property (retain, nonatomic, setter=im_setToken:) NSString *im_token;
@property (copy, nonatomic) NSString *clientEventID;
@property (readonly, nonatomic) NSDictionary *databaseEventBody;
@property (readonly, nonatomic) NSNumber *databasePID;
@property (readonly, nonatomic) BOOL engagementEvent;
@property (readonly, nonatomic) NSDictionary *engagementMetrics;
@property (nonatomic) BOOL checkDiagnosticsAndUsageSetting;
@property (copy, nonatomic) NSString *diagnosticsSubmissionBugType;
@property (readonly, nonatomic) NSDictionary *dictionaryForPosting;
@property (nonatomic) BOOL preventSampling;
@property (readonly, nonatomic) NSMutableDictionary *underlyingDictionary;
@property (readonly, nonatomic) NSDictionary *underlyingDictionaryOverride;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic, getter=isAnonymous) BOOL anonymous;
@property (copy, nonatomic) NSString *app;
@property (copy, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSNumber *baseVersion;
@property (copy, nonatomic) NSString *canaryIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSNumber *eventTime;
@property (copy, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *eventVersion;
@property (copy, nonatomic) NSString *osBuildVersion;
@property (copy, nonatomic) NSString *osName;
@property (copy, nonatomic) NSString *osVersion;
@property (nonatomic) BOOL suppressEngagement;
@property (retain, nonatomic) NSNumber *timezoneOffset;
@property (copy, nonatomic) NSString *topic;
@property (readonly) NSDictionary *engagementData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)im_clickEventWithDefaultTopic;
+ (id)im_defaultTopicForEvents;
+ (id)im_eventWithDefaultTopic;
+ (id)im_eventWithDefaultTopicAndEventType:(id)a0;
+ (id)im_eventWithTopic:(id)a0 eventType:(id)a1;
+ (id)im_pageEventWithDefaultTopic;
+ (id)_buyParamsFromString:(id)a0;
+ (id)_buyParamsStringFromAuthenticationContext:(id)a0;
+ (id)_deepCopiedAndSanitizedTopLevelDictionaryFromDictionary:(id)a0;
+ (id)_deepCopiedJSONObjectOrNilForObject:(id)a0;
+ (id)_deepCopiedJSONObjectOrNilForObject:(id)a0 key:(id)a1 enforcingClassUsingKnownPropertiesClassMapping:(id)a2;
+ (id)_propertyValueClassesForKnownProperties;
+ (id)_topicFromAuthenticationContext:(id)a0;
+ (id)createEventFromAuthenticationContext:(id)a0 error:(id)a1;
+ (id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)a0;
+ (id)sanitizedObject:(id)a0;

- (id)shortDescription;
- (void)im_addPropertiesWithDictionary:(id)a0;
- (void)im_setProperty:(id)a0 forBodyKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTopic:(id)a0;
- (void)setProperty:(id)a0 forBodyKey:(id)a1;
- (id)_propertyForBodyKey:(id)a0 clientOnly:(BOOL)a1;
- (id)_initWithSanitizedUnderlyingDictionary:(id)a0 account:(id)a1 databasePID:(id)a2;
- (id)_initWithUnderlyingDictionary:(id)a0 account:(id)a1 databasePID:(id)a2 addBasefields:(BOOL)a3;
- (void)_setProperty:(id)a0 forBodyKey:(id)a1 clientOnly:(BOOL)a2;
- (void)addClientIdentifier:(id)a0;
- (void)addPropertiesWithDictionary:(id)a0;
- (id)initForEngagement;
- (id)initWithDatabaseEventBody:(id)a0 account:(id)a1 databasePID:(id)a2;
- (id)initWithUnderlyingDictionary:(id)a0;
- (id)propertyForBodyKey:(id)a0;
- (void)removePropertiesForKeys:(id)a0;

@end
