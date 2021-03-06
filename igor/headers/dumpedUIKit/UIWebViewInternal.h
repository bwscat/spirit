/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>
#import "UIFormAssistantDelegate.h"

@class UIWebViewWebViewDelegate, UIScroller, UIWebDocumentView, NSURLRequest, UICheckeredPatternView;
@protocol UIWebViewDelegate;

__attribute__((visibility("hidden")))
@interface UIWebViewInternal : NSObject <UIFormAssistantDelegate> {
@private
	UIScroller* scroller;
	UIWebDocumentView* documentView;
	UICheckeredPatternView* checkeredPatternView;
	id<UIWebViewDelegate> delegate;
	unsigned scalesPageToFit : 1;
	unsigned isLoading : 1;
	unsigned drawsCheckeredPattern : 1;
	unsigned usedGeolocation : 1;
	unsigned webSelectionEnabled : 1;
	unsigned drawInWebThread : 1;
	unsigned allowsPopUps : 1;
	NSURLRequest* request;
	int clickedAlertButtonIndex;
	UIWebViewWebViewDelegate* webViewDelegate;
}
-(void)_updateScrollerIndicatorSubrectForEditingForms:(BOOL)editingForms;
-(void)_updateScrollerContentSize:(BOOL)size;
-(void)formAssistant:(id)assistant didBeginEditingFormNode:(id)node;
-(void)formAssistant:(id)assistant didEndEditingFormNode:(id)node;
@end

