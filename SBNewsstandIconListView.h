/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBFolderIconListView.h"
#import "SpringBoard-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBNewsstandIconListView : SBFolderIconListView {
	unsigned _firstVisibleRow;
	unsigned _lastVisibleRow;
	unsigned _preRotationFirstVisibleRow;
	unsigned _postRotationFirstVisibleRow;
	unsigned _rotationPlacementRow;
	NSMutableArray* _visibleIcons;
}
+(unsigned)maxVisibleIconRowsInterfaceOrientation:(int)orientation;
+(unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+(unsigned)iconRowsForInterfaceOrientation:(int)interfaceOrientation;
+(unsigned)maxIcons;
-(void)showIconImagesFromRow:(unsigned)row toRow:(unsigned)row2;
-(void)_noteNewIconInModel:(id)model;
-(void)_updateVisibleIconsFromRow:(unsigned)row toRow:(unsigned)row2 includeIcon:(id)icon layoutIfNeeded:(BOOL)needed;
-(void)setFirstRowToStartRotation:(unsigned)startRotation endRotation:(unsigned)rotation moveIconsRelativeToRow:(unsigned)row;
-(unsigned)_rotationReferenceRow;
-(unsigned)_postRotationFirstVisibleRow;
-(unsigned)_preRotationFirstVisibleRow;
-(id)visibleIcons;
-(void)cleanupAfterRotation;
-(CATransform3D)_transformForIconAtIndex:(unsigned)index inOrientation:(int)orientation;
-(CGSize)defaultIconSize;
-(float)verticalIconPadding;
-(float)sideIconInset;
-(float)bottomIconInset;
-(float)topIconInset;
-(unsigned)iconRowsForCurrentOrientation;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(Class)iconRotationContainerClass;
@end
