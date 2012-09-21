/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBApplicationIcon.h"

@class UIWebClip;

__attribute__((visibility("hidden")))
@interface SBWebApplicationIcon : SBApplicationIcon {
	UIWebClip* _webClip;
}
@property(retain, nonatomic) UIWebClip* webClip;
-(id)folderFallbackTitle;
-(id)folderTitleOptions;
-(id)uninstallAlertCancelTitle;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertBody;
-(id)uninstallAlertTitle;
-(BOOL)allowsUninstall;
-(BOOL)shouldEllipsizeLabel;
-(BOOL)canGenerateImageInBackgroundForFormat:(int)format;
-(id)generateIconImage:(int)image;
-(void)dealloc;
-(id)initWithApplication:(id)application;
@end

