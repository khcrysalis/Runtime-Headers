@class NSString, RTLocation, SMContactInformation, NSDateInterval, NSDate, RTLocationOfInterest;

@interface SMSuggestion : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long suggestionTrigger;
@property (readonly, nonatomic) unsigned long long suggestionUserType;
@property (nonatomic) unsigned long long suppressionReason;
@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, copy, nonatomic) RTLocation *sourceLocation;
@property (readonly, copy, nonatomic) RTLocation *destinationLocation;
@property (readonly, copy, nonatomic) SMContactInformation *buddy;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL isSuppressed;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) RTLocationOfInterest *locationOfInterest;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithSuggestionMO:(id)a0;
+ (id)stringFromSMSuggestionUserType:(unsigned long long)a0;
+ (id)stringFromSMSuggestionTrigger:(unsigned long long)a0;
+ (id)stringFromSMSuggestionSuppressionReason:(unsigned long long)a0;

- (id)managedObjectWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestionTrigger:(unsigned long long)a0 suggestionUserType:(unsigned long long)a1 suppressionReason:(unsigned long long)a2 sessionType:(unsigned long long)a3 sourceLocation:(id)a4 destinationLocation:(id)a5 buddy:(id)a6 dateInterval:(id)a7 creationDate:(id)a8;
- (id)initWithSuggestionTrigger:(unsigned long long)a0 suggestionUserType:(unsigned long long)a1 suppressionReason:(unsigned long long)a2 sessionType:(unsigned long long)a3 sourceLocation:(id)a4 destinationLocation:(id)a5 buddy:(id)a6 dateInterval:(id)a7 creationDate:(id)a8 locationOfInterest:(id)a9;

@end
