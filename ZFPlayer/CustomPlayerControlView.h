//
//  CustomPlayerControlView.h
//  Player
//
//  Created by lip on 2018/4/8.
//  Copyright © 2018年 任子丰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ASValueTrackingSlider.h"

@interface CustomPlayerControlView : UIView
/// 进度条已经播放的颜色
@property (strong, nonatomic) UIColor *minimumTrackTintColor;
/// 是否显示重播和分享按钮, 默认显示
@property (nonatomic, assign) BOOL hiddenReplayAndShareBtn;
/// 是否隐藏全屏按钮, 默认显示
@property (nonatomic, assign) BOOL hiddenFullScreenBtn;
/// 是否隐藏返回按钮, 默认全屏下显示
@property (nonatomic, assign) BOOL hiddenBackBtn;

/// [回调] 播放完毕
- (void)zf_playerPlayEnd;
/// [回调] 控制视图消失
- (void)didHiddenControlView;
/// 重置控制视图, 需要隐藏重播按钮、分享按钮就在复写
- (void)zf_playerResetControlView;

/// 显示控制视图
- (void)showControlView;

/// 重播视频, 可以复写比如重播默认不显示控制视图
- (void)replayVideo:(UIButton *)sender;

/// 更新loading素材
- (void)uploadLoadingImages:(NSArray*)images;
/// 隐藏顶部阴影
- (void)setTopMaskLayerImage:(UIImage*) image;
/// 隐藏底部阴影
- (void)setBottomMaskLayerImage:(UIImage*) image;

@end
