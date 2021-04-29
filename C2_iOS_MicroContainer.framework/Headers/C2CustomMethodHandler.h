//
//  C2CustomMethodHandler.h
//  C2-iOS-Base
//
//  Created by watson on 2020/12/2.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "C2HybridViewController+JSSDK.h"

NS_ASSUME_NONNULL_BEGIN

//JSSDK 自定义API接口实现类
@interface C2CustomMethodHandler : NSObject

/**
 替换方法实现来进行业务处理
 替换方式：1.Category方法重写（有警告） 2.Method Swizzling
 方法实现Example:
 if ([action isEqualToString:@""]) {
     if (eventBlock) {
         eventBlock(@{}, C2ReturnType_XXX);
     }
 }
 */
+ (void)customMethodWithAction:(NSString *)action params:(NSDictionary *)params eventBlock:(C2ActionBlock)eventBlock;

@end

NS_ASSUME_NONNULL_END
