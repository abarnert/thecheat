
/*
 * The Cheat - The legendary universal game trainer for Mac OS X.
 * http://www.brokenzipper.com/trac/wiki/TheCheat
 *
 * Copyright (c) 2003-2011, Charles McGarvey et al.
 *
 * Distributable under the terms and conditions of the 2-clause BSD
 * license; see the file COPYING for the legal text of the license.
 */


#import <Cocoa/Cocoa.h>


@interface TrackerScroller : NSScroller
{
	id _delegate;
}

- (id)delegate;
- (void)setDelegate:(id)delegate;

@end


@interface NSObject ( TrackerScrollerDelegate )

- (void)scrollerDidStartScrolling:(TrackerScroller *)scroller;
- (void)scrollerDidStopScrolling:(TrackerScroller *)scroller;

@end
