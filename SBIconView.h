/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>
#import <QuartzCore/QuartzCore.h>

#import "SBIconObserver-Protocol.h"
#import "SBIconViewDelegate-Protocol.h"
#import "SBIconViewObserver-Protocol.h"

typedef enum {
    SBIconViewLocationHomeScreen = 0,
    SBIconViewLocationDock       = 1,
    SBIconViewLocationSwitcher   = 2
} SBIconViewLocation;

@class NSTimer, SBIcon, SBIconAccessoryImageView, SBIconImageContainerView, SBIconImageView, SBIconLabelImageView, UIImage, UIImageView;

@interface SBIconView : UIView <SBIconObserver>
{
    SBIcon *_icon;
    id<SBIconViewDelegate> _delegate;
    id<SBIconViewObserver> _observer;
    SBIconImageContainerView *_iconImageContainer;
    SBIconImageView *_iconImageView;
    UIImageView *_iconDarkeningOverlay;
    UIImageView *_ghostlyImageView;
    UIImageView *_reflection;
    UIImageView *_shadow;
    SBIconAccessoryImageView *_accessoryView;
    SBIconLabelImageView *_labelView;
    BOOL _labelHidden;
    UIView *_closeBox;
    int _closeBoxType;
    UIImageView *_dropGlow;
    NSUInteger _drawsLabel:1;
    NSUInteger _isGrabbed:1;
    NSUInteger _isOverlapping:1;
    NSUInteger _refusesRecipientStatus:1;
    NSUInteger _highlighted:1;
    NSUInteger _launchDisabled:1;
    NSUInteger _isJittering:1;
    NSUInteger _allowJitter:1;
    NSUInteger _touchDownInIcon:1;
    NSUInteger _hideShadow:1;
    NSTimer *_delayedUnhighlightTimer;
    NSUInteger _ghostlyRequesters;
    SBIconViewLocation _iconLocation;
    CGFloat _iconImageAlpha;
    CGFloat _iconImageBrightness;
    CGFloat _iconLabelAlpha;
    CGFloat _accessoryAlpha;
    CGPoint _unjitterPoint;
    CGPoint _grabPoint;
    NSTimer *_longPressTimer;
    NSUInteger _ghostlyTag;
    UIImage *_ghostlyImage;
    BOOL _ghostlyPending;
}

+ (id)_jitterTransformAnimation;
+ (id)_jitterPositionAnimation;
+ (id)_labelImageParametersForIcon:(id)arg1 location:(int)arg2;
+ (Class)_labelImageParametersClassForIcon:(id)arg1 location:(int)arg2;
+ (CGSize)_maxLabelSize;
+ (CGSize)defaultIconImageSize;
+ (CGSize)defaultIconSize;

@property(nonatomic, assign) id<SBIconViewObserver> observer; // @synthesize observer=_observer;
@property(nonatomic, assign) id<SBIconViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, assign, getter = isHighlighted) BOOL highlighted;
@property(nonatomic, assign) SBIconViewLocation location;
@property(nonatomic, retain) SBIcon *icon;

- (void)dealloc;
- (id)initWithDefaultSize;

- (void)iconLaunchEnabledDidChange:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconImageDidUpdate:(id)arg1;
- (CGRect)defaultFrameForProgressBar;
- (void)prepareForRecycling;
- (id)createShadowImageView;
- (int)_delegateCloseBoxType;
- (BOOL)_delegateTapAllowed;
- (void)_delegateTouchEnded:(BOOL)arg1;
- (BOOL)_delegatePositionIsEditable;
- (void)_updateShadowFrame;
- (void)_updateShadowFrameForShadow:(id)arg1;
- (void)setShadowsHidden:(BOOL)arg1;
- (UIEdgeInsets)snapshotEdgeInsets;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)closeBoxTapped;
- (BOOL)isShowingCloseBox;
- (void)setShowsCloseBox:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsCloseBox:(BOOL)arg1;
- (id)_newCloseBoxOfType:(int)arg1;
- (void)positionCloseBoxOfType:(int)arg1;
- (void)hideCloseBoxAnimationDidStop:(id)arg1 didFinish:(id)arg2 closeBox:(id)arg3;
- (void)setTouchDownInIcon:(BOOL)arg1;
- (BOOL)isTouchDownInIcon;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)cancelLongPressTimer;
- (void)longPressTimerFired;
- (int)ghostlyRequesters;
- (BOOL)isGhostly;
- (void)removeGhostlyImageView;
- (void)setPartialGhostly:(CGFloat)arg1 requester:(int)arg2;
- (void)setGhostly:(BOOL)arg1 requester:(int)arg2;
- (void)prepareGhostlyImageView;
- (void)prepareGhostlyImage;
- (void)prepareGhostlyImageIfNeeded;
- (id)_genGhostlyImage:(id)arg1;
- (void)placeGhostlyImageView;
- (BOOL)isShowingDropGlow;
- (id)dropGlow;
- (void)removeDropGlow;
- (void)showDropGlow:(BOOL)arg1;
- (void)prepareDropGlow;
- (CGAffineTransform)transformToMakeDropGlowShrinkToIconSize;
- (void)setIsOverlapping:(BOOL)arg1;
- (BOOL)isGrabbed;
- (void)setIsGrabbed:(BOOL)arg1;
- (double)grabDurationForEvent:(id)arg1;
- (BOOL)canReceiveGrabbedIcon:(SBIconView *)iconView;
- (void)setRefusesRecipientStatus:(BOOL)arg1;
- (void)setIconPosition:(CGPoint)arg1;
- (void)removeAllIconAnimations;
- (BOOL)allowJitter;
- (void)setAllowJitter:(BOOL)arg1;
- (void)setIsJittering:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGFloat)_reflectionImageOffset;
- (BOOL)showsReflection;
- (void)updateReflection;
- (void)_updateShadow;
- (id)_shadowImage;
- (BOOL)isInDock;
- (void)_delayedUnhighlight;
- (void)setHighlighted:(BOOL)arg1 delayUnhighlight:(BOOL)arg2;
- (BOOL)delaysUnhighlightWhenTapped;
- (BOOL)allowsTapWhileEditing;
- (void)_updateIconBrightness;
- (void)updateIconOverlayView;
- (void)placeIconOverlayView;
- (CGRect)frameForIconOverlay;
- (BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)_automationID;
- (void)updateBadge;
- (void)_updateAccessoryPosition;
- (id)_superviewForAccessoryView;
- (CGRect)_frameForAccessoryView;
- (id)_iconBoundsForAccessory:(CGRect *)arg1;
- (UIEdgeInsets)_viewInsetsForAccessoryType:(int)arg1;
- (void)updateLabel;
- (void)positionLabel;
- (void)setLabelHidden:(BOOL)shouldHide;
- (SBIconImageView *)iconImageView;
- (void)setIconLabelAlpha:(CGFloat)arg1;
- (void)setIconImageAlpha:(CGFloat)arg1;
- (id)reflectedIconWithBrightness:(CGFloat)arg1;
- (id)iconImageSnapshot:(id)arg1;
- (NSDictionary *)snapshotSettings;
- (void)setDisplayedIconImage:(id)arg1;
- (void)applyIconImageTransform:(CATransform3D)arg1 duration:(CGFloat)arg2 delay:(CGFloat)arg3;
- (void)positionIconImageView;

@end

