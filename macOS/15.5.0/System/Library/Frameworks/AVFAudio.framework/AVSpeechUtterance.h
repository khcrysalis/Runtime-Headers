@class NSString, AVSpeechSynthesisVoice, TTSSpeechAction, NSAttributedString;

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) TTSSpeechAction *action;
@property (retain, nonatomic) NSString *speechString;
@property (retain, nonatomic) NSAttributedString *attributedSpeechString;
@property (retain, nonatomic) AVSpeechSynthesisVoice *voice;
@property (nonatomic) float rate;
@property (nonatomic) float pitchMultiplier;
@property (nonatomic) float volume;
@property (nonatomic) BOOL prefersAssistiveTechnologySettings;
@property (nonatomic) double preUtteranceDelay;
@property (nonatomic) double postUtteranceDelay;

+ (id)speechUtteranceWithString:(id)a0;
+ (id)speechUtteranceWithAttributedString:(id)a0;
+ (id)speechUtteranceWithSSMLRepresentation:(id)a0;
+ (void)transformUtteranceBasedOnSSMLIfDetected:(id)a0;
+ (void)initialize;
+ (id)speechUtteranceWithString:(id)a0;
+ (id)speechUtteranceWithAttributedString:(id)a0;
+ (id)speechUtteranceWithSSMLRepresentation:(id)a0;

- (id)description;
- (id)initWithString:(id)a0;
- (id)initWithAttributedString:(id)a0;
- (void)setAudioBufferCallback:(id /* block */)a0;
- (id /* block */)audioBufferCallback;
- (id)initWithSSMLRepresentation:(id)a0;
- (id /* block */)markerCallback;
- (id)prefersAssistiveTechnologyExceptions;
- (BOOL)processEmoticons;
- (void)setMarkerCallback:(id /* block */)a0;
- (void)setPrefersAssistiveTechnologyExceptions:(id)a0;
- (void)setProcessEmoticons:(BOOL)a0;
- (void)setSsmlRepresentation:(id)a0;
- (void)setVoiceSelection:(id)a0;
- (id)ssmlRepresentation;
- (id)voiceSelection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttributedString:(id)a0;
- (id)speechString;
- (id)initWithSSMLRepresentation:(id)a0;
- (void)setSpeechString:(id)a0;

@end
