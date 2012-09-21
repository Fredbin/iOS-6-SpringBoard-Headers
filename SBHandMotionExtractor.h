/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBHandMotionExtractor : XXUnknownSuperclass {
	UIEdgeInsets _pixelDeltas;
	UIEdgeInsets _smoothedDeltas;
	UIEdgeInsets _allPixelDeltas;
	float _averageTranslation;
	float _farthestFingerSeparation;
	CGPoint _movementVelocityInPointsPerSecond;
}
@property(readonly, assign, nonatomic) CGPoint movementVelocityInPointsPerSecond;
@property(readonly, assign, nonatomic) UIEdgeInsets allPixelDeltas;
@property(readonly, assign, nonatomic) float farthestFingerSeparation;
@property(readonly, assign, nonatomic) float averageTranslation;
@property(readonly, assign, nonatomic) UIEdgeInsets averageVelocities;
@property(readonly, assign, nonatomic) UIEdgeInsets pixelDeltas;
-(void)extractHandMotionForActiveTouches:(XXStruct_DSYOgA*)activeTouches count:(unsigned)count centroid:(CGPoint)centroid;
-(void)clear;
@end

