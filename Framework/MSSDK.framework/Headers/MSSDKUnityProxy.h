//
//  MSSDKUnityProxy.h
//  MSSDK
//
//  Created by steve on 2017/5/18.
//  Copyright © 2017年 liuguojun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSSDKUnityProxy : NSObject

#pragma mark - Init

extern "C" const char* initIosSDK(const char* callbackClassName, const char* callbackFunctionName);

#pragma mark - Reward

extern "C" bool isRewardReady();

extern "C" void showReward(const char *cpAdUnitID);

#pragma mark - Interstitial

extern "C" bool isInterstitialReady(const char *cpAdUnitID);

extern "C" void showInterstitial(const char *cpAdUnitID);

#pragma mark - Banner

extern "C" void showBanner(const char *cpAdUnitID, double x, double y, double width, double height);

extern "C" void removeBanner(const char *cpAdUnitID);

#pragma mark - Debug

extern "C" void openLog(BOOL open);

#pragma mark - Privacy

extern "C" void grantConsent();

extern "C" void revokeConsent();

@end
