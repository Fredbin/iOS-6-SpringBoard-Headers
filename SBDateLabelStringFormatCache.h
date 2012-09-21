/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumberFormatter, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface SBDateLabelStringFormatCache : XXUnknownSuperclass {
	NSDateFormatter* _dayOfWeekFormatter;
	NSDateFormatter* _dayOfWeekWithTimeFormatter;
	NSDateFormatter* _dayMonthYearFormatter;
	NSDateFormatter* _shortDayMonthFormatter;
	NSDateFormatter* _shortDayMonthTimeFormatter;
	NSDateFormatter* _abbrevDayMonthFormatter;
	NSDateFormatter* _abbrevDayMonthTimeFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _relativeDateTimeFormatter;
	NSNumberFormatter* _decimalFormatter;
}
+(id)sharedInstance;
+(void)load;
-(id)formatDateAsRelativeDateAndTimeStyle:(id)style;
-(id)formatDateAsTimeStyle:(id)style;
-(id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)timeStyle;
-(id)formatDateAsAbbreviatedDayMonthStyle:(id)style;
-(id)formatDateAsShortDayMonthWithTimeStyle:(id)timeStyle;
-(id)formatDateAsDayMonthYearStyle:(id)style;
-(id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)time;
-(id)formatDateAsDayOfWeek:(id)week;
-(id)formatNumberAsDecimal:(id)decimal;
-(void)resetFormatters:(id)formatters;
-(void)resetFormattersIfNecessary;
-(void)dealloc;
-(id)init;
@end
