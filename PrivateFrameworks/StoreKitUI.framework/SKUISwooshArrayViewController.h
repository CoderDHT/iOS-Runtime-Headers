/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIProductPageChildViewControllerDelegate>, NSArray, NSMutableArray, NSOperationQueue, NSString, SKUIClientContext, SKUIColorScheme, SKUIMetricsController, SKUIProductPageHeaderViewController, SKUIResourceLoader, SSVPlatformRequestOperation, UIScrollView;

@interface SKUISwooshArrayViewController : UIViewController <SKUIMetricsViewController, SKUIResourceLoaderDelegate, SKUISwooshViewControllerDelegate, UIScrollViewDelegate, SKUIProductPageChildViewController> {
    SKUIResourceLoader *_artworkLoader;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    <SKUIProductPageChildViewControllerDelegate> *_delegate;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIMetricsController *_metricsController;
    NSOperationQueue *_operationQueue;
    SSVPlatformRequestOperation *_platformOperation;
    UIScrollView *_scrollView;
    NSMutableArray *_swooshArtworkLoaders;
    NSArray *_swooshComponents;
    NSMutableArray *_viewControllers;
    bool_askPermission;
}

@property bool askPermission;
@property(retain) SKUIClientContext * clientContext;
@property(retain) SKUIColorScheme * colorScheme;
@property(copy,readonly) NSString * debugDescription;
@property <SKUIProductPageChildViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) SKUIProductPageHeaderViewController * headerViewController;
@property(retain) SKUIMetricsController * metricsController;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) UIScrollView * scrollView;
@property(readonly) Class superclass;
@property(copy) NSArray * swooshComponents;

- (void).cxx_destruct;
- (void)_addHeaderView;
- (void)_addMissingItemsWithResponse:(id)arg1 error:(id)arg2;
- (id)_artworkLoader;
- (id)_clickEventForSeeAllForViewController:(id)arg1;
- (id)_clickEventWithItem:(id)arg1;
- (void)_layoutSwooshViews;
- (void)_loadMissingItemsIfNecessary;
- (void)_reloadChildViewControllers;
- (id)_scrollView;
- (id)activeMetricsController;
- (void)artworkLoaderDidIdle:(id)arg1;
- (bool)askPermission;
- (id)clientContext;
- (id)colorScheme;
- (void)dealloc;
- (id)delegate;
- (id)headerViewController;
- (id)initWithSwooshComponents:(id)arg1;
- (bool)isLoaded;
- (void)loadMissingItemData;
- (void)loadView;
- (id)metricsController;
- (id)operationQueue;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAskPermission:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setSwooshComponents:(id)arg1;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (id)swooshComponents;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end