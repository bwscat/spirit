/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UINavigationBar.h"

@class UIColor, UINavigationItem, NSArray, NSMutableArray;

@interface UINavigationBar : UIView <NSCoding> {
@private
	NSMutableArray* _itemStack;
	float _rightMargin;
	unsigned _state;
	id _delegate;
	UIView* _titleView;
	UIView* _leftView;
	UIView* _rightView;
	UIView* _prompt;
	UIView* _accessoryView;
	UIColor* _tintColor;
	struct {
		unsigned animate : 1;
		unsigned animationDisabledCount : 10;
		unsigned transitioningBarStyle : 1;
		unsigned newBarStyle : 3;
		unsigned barStyle : 3;
		unsigned isTranslucent : 1;
		unsigned disableLayout : 1;
		unsigned backPressed : 1;
		unsigned animatePromptChange : 1;
		unsigned pendingHideBackButton : 1;
		unsigned titleAutosizesToFit : 1;
		unsigned usingNewAPI : 1;
		unsigned minibar : 1;
		unsigned forceFullHeightInLandscape : 1;
		unsigned isLocked : 1;
		unsigned shouldUpdatePromptAfterTransition : 1;
		unsigned roundedCorners : 1;
		unsigned crossfadeItems : 1;
	} _navbarFlags;
}
@property(retain, nonatomic) UIColor* tintColor;
@property(copy, nonatomic) NSArray* items;
@property(readonly, retain, nonatomic) UINavigationItem* backItem;
@property(readonly, retain, nonatomic) UINavigationItem* topItem;
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) int barStyle;
+(CGSize)defaultSizeForOrientation:(int)orientation;
+(CGSize)defaultSizeWithPromptForOrientation:(int)orientation;
+(CGSize)defaultSize;
+(CGSize)defaultSizeWithPrompt;
+(id)defaultPromptFont;
+(void)setDefaultAnimationDuration:(double)duration;
-(float)defaultButtonHeight;
-(CGSize)defaultSizeForOrientation:(int)orientation;
-(void)_updateOpacity;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)locked;
-(id)_defaultTitleFont;
-(int)state;
-(void)drawRect:(CGRect)rect;
-(void)setAccessoryView:(id)view animate:(BOOL)animate;
-(void)pushNavigationItem:(id)item animated:(BOOL)animated;
-(void)_pushNavigationItem:(id)item transition:(int)transition;
-(void)_prepareForPushAnimationWithItems:(id)items;
-(void)pushNavigationItem:(id)item;
-(id)popNavigationItemAnimated:(BOOL)animated;
-(id)_popNavigationItemWithTransition:(int)transition;
-(void)_prepareForPopAnimationWithNewTopItem:(id)newTopItem;
-(void)popNavigationItem;
-(int)_transitionForOldItems:(id)oldItems newItems:(id)items;
-(void)setItems:(id)items animated:(BOOL)animated;
-(BOOL)_didVisibleItemsChangeWithNewItems:(id)newItems oldItems:(id)items;
-(void)_setItems:(id)items transition:(int)transition;
-(void)_setupTopNavItem:(id)item oldTopNavItem:(id)item2;
-(void)setNavigationItems:(id)items;
-(CGSize)sizeThatFits:(CGSize)fits;
-(id)navigationItems;
-(void)_cancelInProgressPushOrPop;
-(id)navigationItemAtPoint:(CGPoint)point;
-(void)_navigationAnimationDidFinish:(id)_navigationAnimation finished:(id)finished context:(void*)context;
-(BOOL)_canHandleStatusBarMouseEvents:(GSEventRef)events;
-(id)_commonHitTest:(CGPoint)test forView:(id)view;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)_handleMouseDownAtPoint:(CGPoint)point;
-(void)_handleMouseUpAtPoint:(CGPoint)point;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseUp:(GSEventRef)up;
-(void)_updateNavigationBarItem:(id)item forStyle:(int)style;
-(void)didAddSubview:(id)subview;
-(void)_updateNavigationBarItemsForStyle:(int)style;
-(void)setHasRoundedCorners:(BOOL)corners;
-(BOOL)hasRoundedCorners;
-(BOOL)isMinibar;
-(BOOL)forceFullHeightInLandscape;
-(void)setForceFullHeightInLandscape:(BOOL)landscape;
-(void)setRightMargin:(float)margin;
-(void)setTitleAutoresizesToFit:(BOOL)fit;
-(BOOL)titleAutoresizesToFit;
-(void)updateTitleView;
-(void)setTitleView:(id)view;
-(id)currentLeftView;
-(id)currentRightView;
-(BOOL)_hasBackButton;
-(id)currentBackButton;
-(void)updatePrompt;
-(void)setPrompt:(id)prompt;
-(id)prompt;
-(id)promptView;
-(CGRect)promptBounds;
-(void)disableAnimation;
-(void)enableAnimation;
-(BOOL)isAnimationEnabled;
-(unsigned)animationDisabledCount;
-(void)drawBackgroundInRect:(CGRect)rect withStyle:(int)style;
-(void)drawBackButtonBackgroundInRect:(CGRect)rect withStyle:(int)style pressed:(BOOL)pressed;
-(void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title;
-(void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title leftBack:(BOOL)back;
-(void)showButtonsWithLeft:(id)left right:(id)right leftBack:(BOOL)back;
-(void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;
-(void)_setLeftView:(id)view rightView:(id)view2;
-(void)_showLeftRightButtonsAnimationDidStop:(id)_showLeftRightButtonsAnimation finished:(id)finished context:(void*)context;
-(void)setButton:(int)button enabled:(BOOL)enabled;
-(id)createButtonWithContents:(id)contents width:(float)width barStyle:(int)style buttonStyle:(int)style4 isRight:(BOOL)right;
-(void)hideButtons;
-(void)_hideButtonsAnimationDidStop:(id)_hideButtonsAnimation finished:(id)finished context:(void*)context;
-(void)showBackButton:(BOOL)button animated:(BOOL)animated;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
-(CGRect)availableTitleArea;
-(void)_removeAccessoryView;
-(CGRect)_boundsForPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;
-(void)_drawPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;
-(void)_startBarStyleAnimation:(int)animation withTintColor:(id)tintColor;
-(void)_backgroundFadeDidFinish:(id)_backgroundFade finished:(id)finished context:(void*)context;
-(void)_startPushAnimationFromItems:(id)items fromBarStyle:(int)barStyle;
-(void)_startPopAnimationFromItems:(id)items fromBarStyle:(int)barStyle toItems:(id)items3 toBarStyle:(int)barStyle4;
-(void)_removeItemsFromSuperview:(id)superview;
-(void)_fadeViewOut:(id)anOut;
-(void)_fadeViewsOut:(id)anOut;
-(void)_fadeViewsIn:(id)anIn;
-(void)_adjustVisibleItemsByDelta:(float)delta;
-(float)_barWidth;
-(void)_getTitleViewFrame:(CGRect*)frame leftViewFrame:(CGRect*)frame2 rightViewFrame:(CGRect*)frame3;
-(void)layoutSubviews;
-(int)_barStyle:(BOOL)style;
-(void)_navBarButtonPressed:(id)pressed;
@end

@interface UINavigationBar (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end
