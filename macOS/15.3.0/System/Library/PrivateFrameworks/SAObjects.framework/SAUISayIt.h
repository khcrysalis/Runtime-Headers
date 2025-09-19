@class NSString, NSArray, SAUIAudioData, NSNumber, SAUIListenAfterSpeakingBehavior;
@protocol SAAceSerializable;

@interface SAUISayIt : SABaseClientBoundCommand <AFAceCommandClientFeedbackEnumerating>

@property (retain, nonatomic) SAUIAudioData *audioData;
@property (copy, nonatomic) NSString *audioDataUrl;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) id<SAAceSerializable> context;
@property (copy, nonatomic) NSArray *coordinationOptions;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL repeatable;
@property (copy, nonatomic) NSString *voiceName;

+ (id)sayIt;
+ (id)sayItWithDictionary:(id)a0 context:(id)a1;

- (void)_af_enumerateClientFeedbackDetails:(id /* block */)a0;
- (void)af_addEntriesToAnalyticsContext:(id)a0;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
