@class NSString, NSSet, NSTimeZone;

@interface CADEventPredicate : EKPredicate <EKPredicateExpanding, EKPredicateEvaluating, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long propertyLoadMode;
@property (readonly, nonatomic) NSString *eventUUID;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) BOOL shouldLoadProposedTimesInRange;
@property (nonatomic) BOOL excludeAllDayEvents;
@property (nonatomic) BOOL excludeTimedEvents;
@property (nonatomic) BOOL excludeDeclined;
@property (nonatomic) BOOL excludeProposed;
@property (nonatomic) BOOL excludeDeclinedUnlessProposed;
@property (nonatomic) BOOL excludeNoAttendeeEvents;
@property (nonatomic) BOOL excludeNoLocationEvents;
@property (nonatomic) BOOL excludeSkippedReminders;
@property (retain, nonatomic) NSSet *filteredOutTitles;
@property (nonatomic) BOOL randomize;
@property (nonatomic) long long limit;

+ (void)_addEventOccurrenceAndProposedTimeOccurrenceFor:(id)a0 withOccurrenceStartDate:(id)a1 toResults:(id)a2 excludeProposed:(BOOL)a3 excludeDeclinedUnlessProposed:(BOOL)a4 excludeSkippedReminders:(BOOL)a5;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3 propertyLoadMode:(unsigned long long)a4;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 eventUUID:(id)a3 calendars:(id)a4;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3;

- (void)expandWithObjectsPendingCommit:(id)a0 deletedObjectIDs:(id)a1 andResultArray:(id)a2;
- (BOOL)ekPredicateEvaluateWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predicateFormat;
- (void)beginSignpostWithHandle:(id)a0 signpostID:(unsigned long long)a1;
- (id)defaultPropertiesToLoad;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 calendars:(id)a3 propertyLoadMode:(unsigned long long)a4;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 eventUUID:(id)a3 calendars:(id)a4;
- (id)relatedObjectPropertiesToLoad;

@end
