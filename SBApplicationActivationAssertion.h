/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication, NSString;

__attribute__((visibility("hidden")))
@interface SBApplicationActivationAssertion : XXUnknownSuperclass {
	SBApplication* _app;
	NSString* _name;
}
@property(copy, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) SBApplication* application;
-(void)dealloc;
-(id)initWithApplication:(id)application name:(id)name;
@end
