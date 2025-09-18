@class NSString, AVSpeechUtterance, NSArray;
@protocol AVSpeechSynthesizerDelegate;

@interface AVSpeechSynthesizer : NSObject

@property (class, readonly, nonatomic) BOOL _supportsSpeakingWithPersonalVoices;
@property (class, copy, nonatomic) id /* block */ assetFlushedCallback;
@property (class, readonly, nonatomic) unsigned long long personalVoiceAuthorizationStatus;

@property (nonatomic) BOOL isInternalSynth;
@property (retain, nonatomic) NSString *speechSource;
@property (nonatomic) unsigned int audioDeviceId;
@property (retain, nonatomic) AVSpeechUtterance *inflightUtterance;
@property (nonatomic) BOOL initializedWebKitUsage;
@property (nonatomic) BOOL detectSSMLAndModifyUtterances;
@property (weak, nonatomic) id<AVSpeechSynthesizerDelegate> delegate;
@property (readonly, nonatomic, getter=isSpeaking) BOOL speaking;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) NSArray *outputChannels;
@property (nonatomic) BOOL usesApplicationAudioSession;
@property (nonatomic) BOOL mixToTelephonyUplink;

+ (BOOL)isSoftAppUsageProtectionDisabled;
+ (void)requestPersonalVoiceAuthorizationWithCompletionHandler:(id /* block */)a0;
+ (void)initialize;
+ (unsigned long long)personalVoiceAuthorizationStatus;
+ (void)requestPersonalVoiceAuthorizationWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (BOOL)continueSpeaking;
- (BOOL)pauseSpeakingAtBoundary:(long long)a0;
- (BOOL)stopSpeakingAtBoundary:(long long)a0;
- (id)speechManager;
- (void)speakUtterance:(id)a0;
- (id)speechQueue;
- (void)_enqueueNextJob;
- (id)skipLuthorRules;
- (unsigned int)audioQueueFlags;
- (void)setAudioSessionInactiveTimeout:(double)a0;
- (void)_applyWebKitBehaviors;
- (long long)_convertBoundary:(long long)a0;
- (void)_handleSpeechDone:(id)a0 successful:(BOOL)a1;
- (void)_speakUtterance:(id)a0;
- (id)coreSynth;
- (BOOL)isInAudioInterruption;
- (void)prepareSpeechManager;
- (void)processSpeechJobFinished:(id)a0 successful:(BOOL)a1;
- (unsigned long long)setActiveOptions;
- (void)setAudioQueueFlags:(unsigned int)a0;
- (void)setSetActiveOptions:(unsigned long long)a0;
- (void)setSkipLuthorRules:(id)a0;
- (void)setSupportsAccurateWordCallbacks:(id)a0;
- (id)supportsAccurateWordCallbacks;
- (void)tearDownWarmupManager;
- (void)writeUtterance:(id)a0 toBufferCallback:(id /* block */)a1;
- (void)writeUtterance:(id)a0 toBufferCallback:(id /* block */)a1 toMarkerCallback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (BOOL)isPaused;
- (BOOL)continueSpeaking;
- (BOOL)isSpeaking;
- (BOOL)pauseSpeakingAtBoundary:(long long)a0;
- (BOOL)stopSpeakingAtBoundary:(long long)a0;
- (void)speakUtterance:(id)a0;
- (void)writeUtterance:(id)a0 toBufferCallback:(id /* block */)a1;
- (void)writeUtterance:(id)a0 toBufferCallback:(id /* block */)a1 toMarkerCallback:(id /* block */)a2;

@end
