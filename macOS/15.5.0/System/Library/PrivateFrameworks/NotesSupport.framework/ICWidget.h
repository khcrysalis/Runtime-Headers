@interface ICWidget : NSObject

@property (class, readonly, nonatomic) ICWidget *sharedWidget;

@property (nonatomic) BOOL reloadsTimelinesAutomatically;
@property (nonatomic) BOOL objc_reloadsTimelinesAutomatically;

- (BOOL)hidesObject:(id)a0;
- (void)reloadTimelinesWithReason:(id)a0;
- (void)reloadTimelineForKind:(id)a0 reason:(id)a1;

@end
