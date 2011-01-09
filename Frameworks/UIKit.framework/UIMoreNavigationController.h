/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIMoreListController, UINavigationController, UIViewController;



@interface UIMoreNavigationController : UINavigationController 
{
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

@property(retain) NSArray *moreViewControllers;
@property BOOL allowsCustomizing;
@property UIViewController *displayedViewController;


- (id)_preparedViewController:(id)arg1;
- (void)_restoreOriginalNavigationController;
- (BOOL)allowsCustomizing;
- (void)setMoreViewControllers:(id)arg1;
- (id)displayedViewController;
- (id)moreViewControllers;
- (void)setDisplayedViewController:(id)arg1;
- (void)setAllowsCustomizing:(BOOL)arg1;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)init;
- (void)dealloc;

@end