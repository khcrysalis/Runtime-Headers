@interface AVVoiceTriggerClient : NSObject {
    struct AVVoiceTriggerClientImpl { void /* function */ **x0; unsigned int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; id x7; BOOL x8; void *x9; void /* function */ *x10; id x11; id x12; } *voiceTriggerClientImpl;
}

@property (copy, nonatomic) id /* block */ avvcServerCrashedBlock;
@property (copy, nonatomic) id /* block */ avvcServerResetBlock;
@property (copy, nonatomic) id /* block */ voiceTriggerBlock;
@property (copy, nonatomic) id /* block */ speakerStateChangedBlock;
@property (copy, nonatomic) id /* block */ speakerMuteStateChangedBlock;
@property (copy, nonatomic) id /* block */ portStateChangedBlock;
@property (copy, nonatomic) id /* block */ siriClientRecordStateChangedBlock;
@property (copy, nonatomic) id /* block */ serverCrashedBlock;
@property (copy, nonatomic) id /* block */ serverResetBlock;
@property (readonly, nonatomic) unsigned long long voiceTriggerPastDataFramesAvailable;

+ (id)sharedInstance;
+ (BOOL)supportsDuckingOnSpeakerOutput;
+ (BOOL)isAPIAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)portStateActiveCompletionBlock:(id /* block */)a0;
- (void)enableListeningOnPorts:(id)a0 completionBlock:(id /* block */)a1;
- (id)recordingPIDList;
- (void)setAggressiveECMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)callServerCrashedBlock;
- (void)callServerResetBlock;
- (void)enableBargeInMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)enableSpeakerStateListening:(BOOL)a0;
- (void)enableSpeakerStateListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)enableVoiceTriggerListening:(BOOL)a0;
- (void)enableVoiceTriggerListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (void)listeningEnabledCompletionBlock:(id /* block */)a0;
- (void)portStateChangedNotification:(id)a0;
- (void)setAVVCServerCrashedBlock:(id /* block */)a0;
- (void)setAVVCServerResetBlock:(id /* block */)a0;
- (void)setListeningProperty:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)siriClientRecordStateChangedNotification:(BOOL)a0 recordingCount:(unsigned long long)a1;
- (void)siriClientsRecordingCompletionBlock:(id /* block */)a0;
- (void)speakerMuteStateChangedNotification:(BOOL)a0;
- (BOOL)speakerStateActive;
- (void)speakerStateActiveCompletionBlock:(id /* block */)a0;
- (void)speakerStateChangedNotification:(id)a0;
- (BOOL)speakerStateMuted;
- (void)speakerStateMutedCompletionBlock:(id /* block */)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)voiceTriggerNotification:(id)a0;
- (void)voiceTriggerPastDataFramesAvailableCompletion:(id /* block */)a0;
- (id)voiceTriggerServerConnection;

@end
