//
//  ViewController.h
//  065-- DouDiZhu
//
//  Created by 顾雪飞 on 17/5/23.
//  Copyright © 2017年 顾雪飞. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, assign) NSInteger sign;

- (void)startButtonClick:(UIButton *)button;

+ (instancetype)shareVc;

@end

