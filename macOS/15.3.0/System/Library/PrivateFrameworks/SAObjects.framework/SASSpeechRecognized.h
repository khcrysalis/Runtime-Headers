@class SAUIGetResponseAlternatives, NSString, SASRecognition, SASAudioAnalytics, NSNumber;

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (retain, nonatomic) SASAudioAnalytics *audioAnalytics;
@property (nonatomic) BOOL eager;
@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (retain, nonatomic) SASRecognition *recognition;
@property (retain, nonatomic) SAUIGetResponseAlternatives *responseAlternatives;
@property (copy, nonatomic) NSString *resultId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *title;

+ (id)speechRecognized;
+ (id)speechRecognizedWithDictionary:(id)a0 context:(id)a1;

- (id)af_bestTextInterpretation;
- (id)af_correctionContext;
- (BOOL)af_isUserUtterance;
- (BOOL)af_isUtterance;
- (id)af_userUtteranceValue;
- (BOOL)af_waitsForConfirmation;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
