/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBLeafIcon.h"
#import "SpringBoard-Structs.h"

@class NSMutableArray, NSString, SSDownload, SSDownloadStatus, NSOperation;

__attribute__((visibility("hidden")))
@interface SBDownloadingIcon : SBLeafIcon {
	NSString* _applicationBundleID;
	SSDownload* _download;
	float _progress;
	BOOL _installing;
	BOOL _wasUninstalledByUser;
	BOOL _isNewsstandDownload;
	SSDownloadStatus* _lastStatus;
	SSDownload* _downloadForImageDataBeingLoaded;
	NSOperation* _iconImageGenerationOperation;
	NSMutableArray* _imageCacheFilePaths;
	BOOL _imageCacheBeingRead;
}
+(id)__iconImageFromData:(id)data format:(int)format scale:(float)scale options:(int)options darken:(BOOL)darken;
+(id)__darkenedIconImageForImage:(id)image;
+(id)leafIdentifierForDownload:(id)download;
+(id)leafIdentifierForDownloadUniqueID:(id)downloadUniqueID;
+(void)setupDownloadingIconImageCache;
+(id)__imageCacheDirectoryPath;
+(id)backgroundQueue;
-(BOOL)iconAppearsInNewsstand;
-(void)_showAlertForError:(id)error;
-(id)uninstallAlertCancelTitle;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertBody;
-(id)uninstallAlertTitle;
-(void)setUninstalledByUser:(BOOL)user;
-(BOOL)uninstalledByUser;
-(void)retry;
-(void)setNewsstandDownload:(BOOL)download;
-(BOOL)isNewsstandDownload;
-(id)download;
-(void)setDownload:(id)download;
-(void)setDownload:(id)download allowReloadImage:(BOOL)image;
-(void)setApplicationBundleID:(id)anId;
-(id)applicationBundleID;
-(BOOL)isDone;
-(float)progress;
-(void)reloadForStatusChange;
-(void)completeUninstall;
-(BOOL)allowsUninstall;
-(void)launch;
-(id)realDisplayName;
-(id)displayName;
-(id)_downloadingLabel;
-(BOOL)canEllipsizeLabel;
-(id)generateIconImage:(int)image;
-(void)_removeImageCacheFileAtPath:(id)path;
-(void)_reloadThumbnailImage;
-(void)loadAndDarkenHomeScreenIconImageInBackground;
-(BOOL)shouldCacheImageForFormat:(int)format;
-(id)getGenericIconImage:(int)image;
-(int)_iconImageOptions;
-(id)undarkenedHomeScreenIconImage;
-(id)identifierForCorrespondingApplicationIcon;
-(id)description;
-(id)representation;
-(BOOL)matchesRepresentation:(id)representation;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithDownload:(id)download;
-(id)initWithDownload:(id)download tryLoadImageImmediately:(BOOL)immediately;
-(id)initWithLeafIdentifier:(id)leafIdentifier;
@end

