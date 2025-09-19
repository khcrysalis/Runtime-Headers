@class NSString;

@interface TSKDateTimeFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) BOOL formatStringContainsOnlyDate;
@property (readonly, nonatomic) BOOL formatStringContainsAMPMSpecifier;
@property (readonly, nonatomic) NSString *formatString;

+ (id)nowFormatForLocale:(id)a0;
+ (id)todayFormatForLocale:(id)a0;
+ (id)defaultDateOnlyShortFormatForLocale:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)initWithFormatString:(id)a0;
- (id)asDateTimeFormat;
- (id)stringFromDate:(id)a0 locale:(id)a1;

@end
