/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "BBObserverDelegate.h"
#import "SBBulletinListViewDelegate.h"
#import "SBBulletinWindowClient.h"
#import "SBWeeAppDelegate.h"

@class UIView, SBWeeApp, SBWeeAppPresentationView, NSMutableDictionary, NSArray, NSTimer, SBApplication, SBBulletinListView, BBObserver, NSMutableArray, SBBulletinListTabView, SBBulletinClearButton;

__attribute__((visibility("hidden")))
@interface SBBulletinListController : XXUnknownSuperclass <BBObserverDelegate, SBBulletinListViewDelegate, SBBulletinWindowClient, SBWeeAppDelegate> {
	BBObserver* _observer;
	NSMutableDictionary* _enabledSectionsByID;
	NSMutableArray* _visibleSectionIDs;
	NSArray* _possibleSectionIDs;
	unsigned _sectionOrderRule;
	NSMutableArray* _weeApps;
	NSMutableArray* _visibleWeeApps;
	NSMutableDictionary* _headerViewsBySectionID;
	SBBulletinListTabView* _tabView;
	SBBulletinListView* _listView;
	BOOL _listViewTableViewHasLoaded;
	BOOL _listViewIsActive;
	BOOL _animating;
	BOOL _weeAppFullViewsHaveBeenLoaded;
	BOOL _weeAppPresentingFullscreen;
	SBWeeApp* _presentingWeeApp;
	SBWeeAppPresentationView* _presentationView;
	UIView* _presentedFirstResponder;
	SBApplication* _coveredApplication;
	SBBulletinClearButton* _clearButtonCurrentlyInClearState;
	NSMutableArray* _enqueuedUpdates;
	BOOL _grabbed;
	float _grabbedY;
	BOOL _pullingDownOutsideList;
	float _showcaseOffset;
	NSTimer* _weeAppSnapshotTimer;
	id _keyboardNotificationObserverToken;
}
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(BOOL)weeAppWantsNotificationCenterDismissal:(id)dismissal;
-(BOOL)weeApp:(id)app updatePresentationMode:(int)mode duration:(float)duration delay:(float)delay;
-(void)weeAppWantsSizeUpdate:(id)update;
-(void)finishedScrollTest;
-(void)runScrollTest:(id)test iterations:(int)iterations delta:(int)delta;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableViewDidFinishReload:(id)tableView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)_weeAppCellForSection:(id)section sectionIndex:(unsigned)index tableView:(id)view;
-(BOOL)_useTopPaddingForWeeAppAtSectionIndex:(unsigned)sectionIndex;
-(id)_bulletinCellForSection:(id)section sectionIndex:(unsigned)index row:(unsigned)row tableView:(id)view;
-(int)_separatorStyleForRow:(unsigned)row inSection:(id)section sectionIndex:(unsigned)index;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(CGSize)observer:(id)observer composedAttachmentSizeForType:(int)type thumbnailWidth:(float)width height:(float)height key:(id)key;
-(id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
-(id)observer:(id)observer thumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
-(BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)observer;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
-(void)observer:(id)observer updateSectionInfo:(id)info;
-(void)observer:(id)observer updateSectionOrder:(id)order;
-(void)observer:(id)observer updateSectionOrderRule:(unsigned)rule;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer modifyBulletin:(id)bulletin;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(void)_updateModelAndTableViewForRemoval:(id)removal originalIndex:(unsigned)index;
-(void)_updateModelAndTableViewForModification:(id)modification originalIndex:(unsigned)index;
-(void)_updateModelAndTableViewForAddition:(id)addition;
-(void)_fixLastRowSeparatorsAndWeeAppTopPaddingInAllSections;
-(void)_fixCellSeparatorAboveRow:(unsigned)row inSection:(id)section sectionIndex:(unsigned)index;
-(void)_updateModelAndTableViewForNewSectionInfo:(id)newSectionInfo;
-(void)_updateModelAndTableViewForEnabledWeeAppSection:(id)enabledWeeAppSection withVisibility:(BOOL)visibility;
-(void)_updateModelAndTableViewForNewSectionOrder:(id)newSectionOrder;
-(void)_updateModelAndTableViewForNewSectionOrderRule:(unsigned)newSectionOrderRule;
-(void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
-(void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation;
-(void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow;
-(void)bulletinWindowDidResignKey;
-(void)bulletinWindowDidBecomeKey;
-(BOOL)requiresKeyWindow;
-(void)_setClearButtonCurrentlyInClearState:(id)clearState;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)handleEatenTouch:(id)touch;
-(void)handlePan:(id)pan;
-(void)handleTap:(id)tap;
-(void)handleShowNotificationsGestureCanceled;
-(void)handleShowNotificationsGestureEndedWithVelocity:(CGPoint)velocity completion:(id)completion;
-(void)handleShowNotificationsGestureChangedWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
-(void)handleShowNotificationsGestureBeganWithTouchLocation:(CGPoint)touchLocation;
-(void)_updateForTouchCanceled;
-(void)_updateForTouchEndedWithVelocity:(CGPoint)velocity completion:(id)completion;
-(void)_updateForTouchBeganOrMovedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
-(void)_handleUngrabWithVelocity:(CGPoint)velocity completion:(id)completion;
-(void)_clearSection:(id)section;
-(float)_headerHeightForSection:(id)section;
-(float)_rowHeightForBulletin:(id)bulletin;
-(id)_indexPathForBulletin:(id)bulletin;
-(id)_bulletinAtIndexPath:(id)indexPath;
-(id)_sectionAtIndex:(unsigned)index;
-(void)_configureForChangedContentAnimated:(BOOL)changedContentAnimated;
-(void)_reloadTableView;
-(void)_loadSections;
-(void)_performEnqueuedUpdates;
-(void)_performOrEnqueueUpdate:(id)update;
-(BOOL)_canPerformUpdate;
-(id)_weeAppForSectionID:(id)sectionID bundlePath:(id)path;
-(void)_removeWeeAppForSectionID:(id)sectionID;
-(id)_weeAppForSectionID:(id)sectionID;
-(unsigned)_insertVisibleSectionID:(id)anId;
-(void)_sortVisibleSectionIDs;
-(BOOL)isAnimating;
-(BOOL)weeAppIsFullScreen;
-(BOOL)listViewIsActive;
-(BOOL)isActive;
-(void)_tearDownPresentationView;
-(void)_tearDownTabView;
-(void)_tearDownListViewKeepingWindow:(BOOL)window;
-(void)_snapshotTimerFired;
-(void)_clearWeeAppSnapshots;
-(void)_clearSnapshotTimer;
-(void)adjustViewForShowcaseOffset:(float)showcaseOffset;
-(void)_setListViewActive:(BOOL)active;
-(void)showListViewWithInitialVelocity:(float)initialVelocity completion:(id)completion;
-(void)hideListViewWithInitialVelocity:(float)initialVelocity completion:(id)completion;
-(void)hideListViewWithInitialVelocity:(float)initialVelocity hiddenY:(float)y extraPull:(BOOL)pull additionalValueApplier:(id)applier completion:(id)completion;
-(void)showListViewWithInitialVelocity:(float)initialVelocity additionalValueApplier:(id)applier completion:(id)completion;
-(id)_newDynamicAnimationForShow:(BOOL)show targetValue:(double)value withInitialVelocity:(double)initialVelocity extraPull:(BOOL)pull;
-(void)hideFullScreenWeeApp;
-(void)hideListViewAnimated:(BOOL)animated useFade:(BOOL)fade keepWindow:(BOOL)window;
-(void)hideListViewAnimated:(BOOL)animated useFade:(BOOL)fade;
-(void)hideListViewAnimated:(BOOL)animated;
-(void)showListViewAnimated:(BOOL)animated;
-(void)finishShowingListView;
-(void)_finishShowingListViewAnimated:(BOOL)animated;
-(void)_cleanupAfterHideListViewKeepingWindow:(BOOL)window;
-(void)_cleanupAfterShowListView;
-(void)setListViewBottomShadowAlpha:(float)alpha;
-(void)positionListViewAtY:(float)y;
-(void)_positionTabViewAtY:(float)y;
-(void)prepareToHideListViewAnimated:(BOOL)hideListViewAnimated;
-(void)prepareToShowListViewAnimated:(BOOL)showListViewAnimated aboveBanner:(BOOL)banner;
-(BOOL)isShowingTabView;
-(void)hideTabViewAnimated:(BOOL)animated;
-(void)showTabViewAnimated:(BOOL)animated;
-(float)listViewHeight;
-(id)listView;
-(void)_configureBBObserver;
-(void)dealloc;
-(id)init;
@end

