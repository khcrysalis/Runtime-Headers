@class NSString, NSDate;

@interface BMAppInFocus : BMEventBase <ATXTimedEventProtocol, ATXShadowEventProtocol, BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) int launchType;
@property (readonly, nonatomic) NSString *launchReason;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *parentBundleID;
@property (readonly, nonatomic) NSString *extensionHostID;
@property (readonly, nonatomic) NSString *shortVersionString;
@property (readonly, nonatomic) NSString *exactVersionString;
@property (readonly, nonatomic) unsigned int dyldPlatform;
@property (nonatomic) BOOL hasDyldPlatform;
@property (readonly, nonatomic) BOOL isNativeArchitecture;
@property (nonatomic) BOOL hasIsNativeArchitecture;
@property (readonly, nonatomic) int displayType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

@end
