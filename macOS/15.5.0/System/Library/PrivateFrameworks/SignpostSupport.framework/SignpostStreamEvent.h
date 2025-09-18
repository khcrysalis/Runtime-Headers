@class NSObject;
@protocol OS_dispatch_source;

@interface SignpostStreamEvent : SignpostEvent

@property (nonatomic) unsigned long long _totalFrameCount;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource;
@property (nonatomic) unsigned long long serialNumber;

+ (id)serializationTypeNumber;

- (id)initWithOSLogEventProxy:(id)a0 timebaseRatio:(double)a1 shouldCompose:(BOOL)a2 serialNumber:(unsigned long long)a3 shouldCollectFrameInfo:(BOOL)a4 timeoutInSec:(unsigned long long)a5 timeoutHandlingQueue:(id)a6 timeoutHandlingBlock:(id /* block */)a7;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)_hasTotalSkyLightCompositeCount;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;

@end
