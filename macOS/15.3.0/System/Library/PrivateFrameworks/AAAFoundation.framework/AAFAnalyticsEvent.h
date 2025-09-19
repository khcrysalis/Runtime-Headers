@class NSString, NSDictionary, NSError, NSNumber;

@interface AAFAnalyticsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double eventCreationTime;
@property (nonatomic) unsigned long long initTime;
@property (nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } clock_timebase;
@property (copy, nonatomic) NSError *topLevelError;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSDictionary *reportData;
@property (readonly, copy, nonatomic) NSNumber *eventCategory;
@property (copy, nonatomic) NSNumber *clientType;
@property (copy, nonatomic) NSString *clientBundleId;
@property (copy, nonatomic) NSString *clientName;

+ (id)ak_analyticsEventWithContext:(id)a0 client:(id)a1 eventName:(id)a2 error:(id)a3;
+ (id)ak_analyticsEventWithContext:(id)a0 eventName:(id)a1 error:(id)a2;
+ (id)ak_analyticsEventWithEventName:(id)a0 account:(id)a1 error:(id)a2;
+ (id)ak_analyticsEventWithEventName:(id)a0 error:(id)a1;
+ (id)analyticsEventWithName:(id)a0 altDSID:(id)a1 flowID:(id)a2;
+ (id)accountForAuthenticationResults:(id)a0 accountManager:(id)a1;
+ (id)aida_analyticsDurationEventForAIDAServiceType:(id)a0 accountManager:(id)a1 authenticationResults:(id)a2;
+ (id)aida_analyticsEventWithEventName:(id)a0;
+ (id)aida_analyticsEventWithEventName:(id)a0 accountManager:(id)a1 authenticationResults:(id)a2;
+ (id)aida_analyticsFinishEventForAIDAServiceType:(id)a0 accountManager:(id)a1 authenticationResults:(id)a2 success:(BOOL)a3 error:(id)a4;
+ (id)aida_analyticsStartEventForAIDAServiceType:(id)a0 accountManager:(id)a1 authenticationResults:(id)a2;
+ (id)eventNameForService:(id)a0;
+ (id)finishEventNameForService:(id)a0;
+ (id)startEventNameForService:(id)a0;
+ (id)analyticsEventWithContext:(id)a0 eventName:(id)a1 category:(id)a2;
+ (id)analyticsEventWithFollowUpContext:(id)a0 eventName:(id)a1 category:(id)a2;
+ (id)analyticsEventWithName:(id)a0 eventCategory:(id)a1 initData:(id)a2;

- (void)ak_updateTelemetryIdWithAccount:(id)a0;
- (void)ak_updateWithAuthenticationResults:(id)a0 authContext:(id)a1 error:(id)a2;
- (void)updateTaskResultWithError:(id)a0;
- (void)aida_updateEventWithSuccess:(BOOL)a0 error:(id)a1;
- (void)aida_updateTelemetryIdsWithAuthenticationResults:(id)a0 accountManager:(id)a1;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithEventName:(id)a0 eventCategory:(id)a1 initData:(id)a2;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)a0;
- (double)machAbsoluteTimeToMilliseconds:(unsigned long long)a0;
- (void)_populateUnderlyingErrorsStartingWithRootError:(id)a0 maxDepth:(unsigned int)a1;
- (void)completeEvent;
- (double)machAbsoluteTimeToSeconds:(unsigned long long)a0;

@end
