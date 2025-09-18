@class NSString, NTPBDate, NSDate;

@interface NTPBIssueReadingHistoryItem : PBCodable <FCMutableIssueReadingHistoryItem, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *issueID;
@property (copy, nonatomic) NSDate *lastVisitedDate;
@property (copy, nonatomic) NSDate *lastBadgedDate;
@property (copy, nonatomic) NSDate *lastEngagedDate;
@property (copy, nonatomic) NSDate *lastSeenDate;
@property (copy, nonatomic) NSDate *lastRemovedFromMyMagazinesDate;
@property (copy, nonatomic) NSString *lastVisitedArticleID;
@property (copy, nonatomic) NSString *lastVisitedPageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIssueID;
@property (retain, nonatomic) NSString *issueID;
@property (readonly, nonatomic) BOOL hasLastVisitedPBDate;
@property (retain, nonatomic) NTPBDate *lastVisitedPBDate;
@property (readonly, nonatomic) BOOL hasLastVisitedArticleID;
@property (retain, nonatomic) NSString *lastVisitedArticleID;
@property (readonly, nonatomic) BOOL hasLastVisitedPageID;
@property (retain, nonatomic) NSString *lastVisitedPageID;
@property (readonly, nonatomic) BOOL hasLastBadgedPBDate;
@property (retain, nonatomic) NTPBDate *lastBadgedPBDate;
@property (readonly, nonatomic) BOOL hasLastEngagedPBDate;
@property (retain, nonatomic) NTPBDate *lastEngagedPBDate;
@property (readonly, nonatomic) BOOL hasLastRemovedFromMyMagazinesPBDate;
@property (retain, nonatomic) NTPBDate *lastRemovedFromMyMagazinesPBDate;
@property (readonly, nonatomic) BOOL hasLastSeenPBDate;
@property (retain, nonatomic) NTPBDate *lastSeenPBDate;

+ (id)issueReadingHistoryItemWithCKRecord:(id)a0;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)a0;

@end
