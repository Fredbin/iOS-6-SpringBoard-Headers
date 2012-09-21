/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CADisplayLink, NSArray, UIView;

__attribute__((visibility("hidden")))
@interface SBAnimationStepper : XXUnknownSuperclass {
	id m_delegate;
	UIView* m_view;
	NSArray* m_animatingSubviews;
	double m_duration;
	float m_percentage;
	CADisplayLink* m_displayLink;
	double m_finishBackwardTimestamp;
	double m_finishBackwardDuration;
	float m_finishBackwardPercentage;
}
@property(assign, nonatomic) float percentage;
@property(assign, nonatomic) double duration;
@property(copy, nonatomic) NSArray* animatingSubviews;
@property(retain, nonatomic) UIView* view;
@property(assign, nonatomic) id delegate;
-(void)updateFinishBackwardToStart:(id)start;
-(void)finishBackwardToStart;
-(void)finishForwardToEnd;
-(void)stepAnimationsInView:(id)view animatingSubviews:(id)subviews duration:(double)duration;
-(void)dealloc;
-(id)init;
@end

