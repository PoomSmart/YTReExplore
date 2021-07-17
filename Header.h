#import <Foundation/Foundation.h>

@interface YTIBrowseRequest : NSObject
+ (NSString *)browseIDForExploreTab;
@end

@interface YTIPivotBarItemRenderer : NSObject
- (NSString *)pivotIdentifier;
@end

@interface YTIPivotBarSupportedRenderers : NSObject
- (YTIPivotBarItemRenderer *)pivotBarItemRenderer;
@end

@interface YTIPivotBarRenderer : NSObject
+ (YTIPivotBarSupportedRenderers *)pivotSupportedRenderersWithBrowseId:(NSString *)browseId title:(NSString *)title iconType:(int)iconType;
- (NSMutableArray <YTIPivotBarSupportedRenderers *> *)itemsArray;
@end

@interface YTIGuideResponseSupportedRenderers : NSObject
- (YTIPivotBarRenderer *)pivotBarRenderer;
@end

@interface YTIGuideResponse : NSObject
- (NSMutableArray <YTIGuideResponseSupportedRenderers *> *)itemsArray;
@end