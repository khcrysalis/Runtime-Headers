@class NSString, NSDictionary, NSDate, NSNumber, MTSound;

@interface MTMutableAlarm : MTAlarm

@property (copy, nonatomic) NSDictionary *siriContext;
@property (copy, nonatomic) NSDate *bypassReloadDate;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) unsigned long long bedtimeHour;
@property (nonatomic) unsigned long long bedtimeMinute;
@property (nonatomic) unsigned long long bedtimeReminderMinutes;
@property (copy, nonatomic) NSNumber *bedtimeReminder;
@property (nonatomic) BOOL timeInBedTracking;
@property (nonatomic) BOOL sleepSchedule;
@property (nonatomic) unsigned long long repeatSchedule;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL allowsSnooze;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MTSound *sound;

- (void)co_setHomeKitSaveDate:(id)a0;
- (void)co_setIsMediaSystemOriginating;
- (void)co_setTargetReference:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyChangesFromChangeSet:(id)a0;

@end
