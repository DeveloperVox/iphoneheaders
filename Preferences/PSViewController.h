/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>
#import "Preferences-Structs.h"
#import "PSBaseView.h"

@class PSRootController;

@interface PSViewController : NSObject <PSBaseView> {
	id<PSBaseView> _parentController;
	PSRootController* _rootController;
}
// in a protocol: +(BOOL)isOverlay;
// in a protocol: -(id)initForContentSize:(CGSize)contentSize;
// in a protocol: -(id)navigationTitle;
// in a protocol: -(id)navigationItem;
// in a protocol: -(void)pushNavigationItemWithTitle:(id)title;
// in a protocol: -(void)insertNavigationItem:(id)item atIndex:(int)index;
// in a protocol: -(void)insertNavigationItem:(id)item atIndexFromEnd:(int)end;
// in a protocol: -(void)pushNavigationItem:(id)item;
// in a protocol: -(void)popNavigationItem;
// in a protocol: -(void)popNavigationItemWithAnimation:(BOOL)animation;
// in a protocol: -(void)hideNavigationBarButtons;
// in a protocol: -(void)showNavigationBarButtons:(id)buttons :(id)arg2;
// in a protocol: -(void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;
// in a protocol: -(void)setNavigationBarEnabled:(BOOL)enabled;
// in a protocol: -(void)setPrompt:(id)prompt;
// in a protocol: -(void)navigationBarButtonClicked:(int)clicked;
// in a protocol: -(id)view;
// in a protocol: -(void)setParentController:(id)controller;
// in a protocol: -(id)parentController;
// in a protocol: -(void)setRootController:(id)controller;
// in a protocol: -(id)rootController;
// in a protocol: -(void)setPreferenceValue:(id)value specifier:(id)specifier;
// in a protocol: -(id)readPreferenceValue:(id)value;
// in a protocol: -(void)viewDidBecomeVisible;
// in a protocol: -(void)viewWillBecomeVisible:(void*)view;
// in a protocol: -(void)viewWillRedisplay;
// in a protocol: -(void)viewTransitionCompleted;
// in a protocol: -(void)suspend;
// in a protocol: -(void)didLock;
// in a protocol: -(void)willUnlock;
// in a protocol: -(void)didUnlock;
// in a protocol: -(void)didWake;
// in a protocol: -(void)pushController:(id)controller;
// in a protocol: -(void)handleURL:(id)url;
// in a protocol: -(BOOL)popController;
// in a protocol: -(BOOL)popControllerWithAnimation:(BOOL)animation;
// inherited: -(id)methodSignatureForSelector:(SEL)selector;
// inherited: -(void)forwardInvocation:(id)invocation;
@end

