//
// Created by Mads Lee Jensen on 04/06/2017.
// Copyright (c) 2017 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import "MobilePayManager.h"


@interface RNMobilePayHandler : NSObject

+ (instancetype)sharedInstance;

- (void)setup:(NSString *)merchantId country:(MobilePayCountry)country merchantUrlScheme:(NSString *)merchantUrlScheme;
- (void)setCountry:(MobilePayCountry)country;
- (void)setMerchantId:(NSString *)merchantId;

- (bool)handleMobilePayPaymentWithUrl:(NSURL *)url;
- (void)createPayment:(NSString *)orderId productPrice:(NSDecimalNumber *)productPrice resolve:(RCTPromiseResolveBlock)resolve reject:(RCTPromiseRejectBlock)reject;

@end
