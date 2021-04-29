//
//  C2HybridViewController+JSSDK.h
//  C2-iOS-Base
//
//  Created by watson on 2020/11/4.
//  Copyright © 2020 watson. All rights reserved.
//

#import "C2HybridViewController.h"
#import <TZImagePickerController.h>
#import <FFDropDownMenuView.h>
#import "C2HybridModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, C2ReturnType) {
    C2ReturnType_OnSuccess,// 成功返回结果
    C2ReturnType_OnFail,// 失败返回结果
    C2ReturnType_OnPageResult// 上一页面返回结果
};

typedef void(^C2ActionBlock)(id returnValue, C2ReturnType returnFunc);

@interface C2HybridViewController (JSSDK)<FFDropDownMenuViewDelegate,TZImagePickerControllerDelegate>

@property (nonatomic, strong) FFDropDownMenuView *dropdownMenu;

/**
 根据url配置导航栏
 
 @param url 请求地址
 */
- (void)configNaviWithUrl:(NSString *)url;

/**
 JSSDK的Api对应原生处理
 
 @param hybrid 传递过来的JSSDK的Api对应 model
 @param actionBlock 原生处理完成后执行的操作
 */
- (void)actionWithHybrid:(C2HybridModel *)hybrid action:(C2ActionBlock)actionBlock;

@end

NS_ASSUME_NONNULL_END
