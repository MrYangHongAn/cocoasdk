//
//  C2HybridViewController.h
//  C2-iOS-Base
//
//  Created by watson on 2020/11/4.
//  Copyright © 2020 watson. All rights reserved.
//

#import "C2WebViewController.h"
#import <C2AppModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^C2BackBlock)(NSString *result);

// hybrid 控制器
@interface C2HybridViewController : C2WebViewController

/**
 @param url 请求地址
 @param index 路由路径
 @param microApp 微应用详情
 */
- (instancetype)initWithUrl:(NSString *)url index:(NSString *)index;
- (instancetype)initWithUrl:(NSString *)url index:(NSString *)index microApp:(C2AppModel *)microApp;

@property (nonatomic, copy) NSString *index;
@property (nonatomic, strong) C2AppModel *microApp;
@property (nonatomic, assign) BOOL forceLandscape;
@property (nonatomic, copy) C2BackBlock backBlock;

@end

NS_ASSUME_NONNULL_END
