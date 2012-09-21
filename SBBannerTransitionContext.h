/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView;
@protocol SBUIBannerItemView;

__attribute__((visibility("hidden")))
@interface SBBannerTransitionContext : XXUnknownSuperclass {
	UIView<SBUIBannerItemView>* _fromView;
	UIView<SBUIBannerItemView>* _toView;
	int dismissReason;
	int animation;
}
@property(assign, nonatomic) int animation;
@property(assign, nonatomic) int dismissReason;
@property(retain, nonatomic) UIView<SBUIBannerItemView>* toView;
@property(retain, nonatomic) UIView<SBUIBannerItemView>* fromView;
+(id)contextFromView:(id)view toView:(id)view2;
-(void)dealloc;
@end
