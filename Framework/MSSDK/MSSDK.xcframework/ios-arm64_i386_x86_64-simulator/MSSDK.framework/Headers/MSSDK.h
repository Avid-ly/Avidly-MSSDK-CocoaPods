//
//  MSSDK.h
//  MeteorShowSDK
//
//  Created by steve on 2020/4/21.
//  Copyright © 2020 UPLTV Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol MSRewardedVideoDelegate <NSObject>

//激励视频广告打开
- (void)MSRewardVideoAdDidOpen;

//激励视频广告点击
- (void)MSRewardVideoAdDidCilck;

//激励视频广告关闭
- (void)MSRewardVideoAdDidClose;

//准备发放奖励
- (void)MSRewardVideoAdDidRewardUserWithReward;

@end

@protocol MSInterstitialDelegate <NSObject>

//插屏广告打开
- (void)MSInterstitialAdDidOpen;

//插屏广告点击
- (void)MSInterstitialAdDidCilck;

//插屏广告关闭
- (void)MSInterstitialAdDidClose;

@end

@interface MSSDK : NSObject

#pragma mark - Init

+ (void)initSDK;

+ (void)initSDKCompletion:(void(^)(void))completionBlock;

#pragma mark - Reward

+ (BOOL)hasRewardAdAvailable;

+ (void)setRewardDelegate:(id<MSRewardedVideoDelegate>)rewardDelegate;

+ (void)presentRewardVideoAdForAdUnitID:(NSString *)adUnitID fromViewController:(UIViewController *)viewController;

#pragma mark - Interstitial

+ (BOOL)hasInterstitialAdAvailable;

+ (void)setInterstitialDelegate:(id<MSInterstitialDelegate>)interstitialDelegate;

+ (void)presentInterstitialForAdUnitID:(NSString *)adUnitID fromViewController:(UIViewController *)viewController;

#pragma mark - Banner

+ (UIView *)initBannerView;

#pragma mark - GDPR

+ (void)grantConsent;

+ (void)revokeConsent;

#pragma mark - Debug

+ (void)openLog:(BOOL)open;

@end

