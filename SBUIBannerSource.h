/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBUIBannerSource <NSObject>
-(id)newBannerViewForItem:(id)item;
-(void)removeAllBannerItems;
-(id)dequeueNextBannerItem;
-(id)peekNextBannerItem;
@optional
-(void)bannerViewDidDismiss:(id)bannerView forReason:(int)reason;
-(void)bannerViewWillDismiss:(id)bannerView forReason:(int)reason;
-(void)bannerViewDidAppear:(id)bannerView;
-(void)bannerViewWillAppear:(id)bannerView;
@end

