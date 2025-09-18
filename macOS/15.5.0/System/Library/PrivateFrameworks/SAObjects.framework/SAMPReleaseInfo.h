@class NSString, SACalendar;

@interface SAMPReleaseInfo : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SACalendar *releaseDate;
@property (nonatomic) long long releaseYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_af_releaseInfoWithReleaseDate:(id)a0;
+ (id)releaseInfo;
+ (id)releaseInfoWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
