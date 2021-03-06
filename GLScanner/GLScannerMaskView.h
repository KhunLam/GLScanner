//
//  GLScannerMaskView.h
//  GLCodeScanner
//
//  Created by Gavin on 2017/6/29.
//  Copyright © 2017年 Gavin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GLScannerMaskView : UIView

/**
 使用裁切区域实例化遮罩视图

 @param frame 视图区域
 @param cropRect 裁切区域
 @return 遮罩视图
 */
+ (instancetype)maskViewWithFrame:(CGRect)frame cropRect:(CGRect)cropRect;

/**  裁切区域  */
@property (nonatomic) CGRect cropRect;

@end
