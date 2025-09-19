@class NSString, NTPBDate, NSDate, CKRecord;

@interface NTPBReadingHistoryItem : PBCodable <FCMutableReadingHistoryItem, FCKeyValueStoreCoding, FCReadingHistoryItem, FCTodaySeenHistoryItem, FCTodayReadHistoryItem, NSCopying> {
    struct { unsigned char listenedCount : 1; unsigned char listeningProgress : 1; unsigned char maxVersionRead : 1; unsigned char maxVersionSeen : 1; unsigned char readCount : 1; unsigned char flags : 1; } _has;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *articleID;
@property (copy, nonatomic) NSString *sourceChannelTagID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSDate *lastVisitedAt;
@property (nonatomic) long long maxVersionRead;
@property (copy, nonatomic) NSDate *firstSeenAt;
@property (copy, nonatomic) NSDate *firstSeenAtOfMaxVersionSeen;
@property (nonatomic) long long maxVersionSeen;
@property (nonatomic) long long listenedCount;
@property (nonatomic) double listeningProgress;
@property (copy, nonatomic) NSDate *listeningProgressSavedAt;
@property (copy, nonatomic) NSDate *lastListenedAt;
@property (copy, nonatomic) NSString *readingPosition;
@property (copy, nonatomic) NSDate *readingPositionSavedAt;
@property (nonatomic) long long readCount;
@property (nonatomic) BOOL hasArticleBeenRead;
@property (nonatomic) BOOL hasArticleBeenSeen;
@property (nonatomic) BOOL hasArticleCompletedListening;
@property (nonatomic) BOOL hasArticleCompletedReading;
@property (nonatomic) BOOL hasArticleBeenMarkedOffensive;
@property (nonatomic) BOOL hasArticleBeenConsumed;
@property (nonatomic) BOOL hasArticleBeenRemovedFromAudio;
@property (nonatomic) unsigned long long articleLikingStatus;
@property (nonatomic, getter=isPruningDisabled) BOOL pruningDisabled;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) CKRecord *asCKRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL hasLastVisitedDate;
@property (retain, nonatomic) NTPBDate *lastVisitedDate;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) unsigned int flags;
@property (nonatomic) BOOL hasMaxVersionRead;
@property (nonatomic) long long maxVersionRead;
@property (readonly, nonatomic) BOOL hasFirstSeenDate;
@property (retain, nonatomic) NTPBDate *firstSeenDate;
@property (readonly, nonatomic) BOOL hasFirstSeenDateOfMaxVersionSeen;
@property (retain, nonatomic) NTPBDate *firstSeenDateOfMaxVersionSeen;
@property (nonatomic) BOOL hasMaxVersionSeen;
@property (nonatomic) long long maxVersionSeen;
@property (readonly, nonatomic) BOOL hasSourceChannelTagID;
@property (retain, nonatomic) NSString *sourceChannelTagID;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) BOOL hasListeningProgress;
@property (nonatomic) double listeningProgress;
@property (readonly, nonatomic) BOOL hasLastListened;
@property (retain, nonatomic) NTPBDate *lastListened;
@property (readonly, nonatomic) BOOL hasReadingPosition;
@property (retain, nonatomic) NSString *readingPosition;
@property (nonatomic) BOOL hasReadCount;
@property (nonatomic) long long readCount;
@property (readonly, nonatomic) BOOL hasListeningProgressSavedDate;
@property (retain, nonatomic) NTPBDate *listeningProgressSavedDate;
@property (readonly, nonatomic) BOOL hasReadingPositionSavedDate;
@property (retain, nonatomic) NTPBDate *readingPositionSavedDate;
@property (nonatomic) BOOL hasListenedCount;
@property (nonatomic) long long listenedCount;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)writeToKeyValuePair:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
