@class NSString, SAMPReleaseInfo, NSNumber, SACalendar;

@interface SAMPMediaItem : SAMPMediaEntity

@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *artist;
@property (retain, nonatomic) SACalendar *datePurchased;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSNumber *perceivableStartTimeInSeconds;
@property (retain, nonatomic) SAMPReleaseInfo *releaseInfo;
@property (copy, nonatomic) NSString *sortAlbum;
@property (copy, nonatomic) NSString *sortArtist;

+ (id)_af_mediaItemWithMRContentItem:(id)a0;
+ (id)_af_mediaItemWithMRContentItemRef:(void *)a0;
+ (id)mediaItem;
+ (id)mediaItemWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
