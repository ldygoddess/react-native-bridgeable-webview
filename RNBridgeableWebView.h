/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "RCTView.h"

extern NSString *const RNBridgeableWebViewMessageSent;

@class RCTEventDispatcher;

@interface RNBridgeableWebView : RCTView

@property (nonatomic, strong) NSURL *URL;
@property (nonatomic, assign) UIEdgeInsets contentInset;
@property (nonatomic, assign) BOOL shouldInjectAJAXHandler;
@property (nonatomic, assign) BOOL automaticallyAdjustContentInsets;

- (instancetype)initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher NS_DESIGNATED_INITIALIZER;

- (void)goForward;
- (void)goBack;
- (void)reload;

@end
