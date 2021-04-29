//
//  C2HybridModel.h
//  C2-iOS-Base
//
//  Created by watson on 2020/6/17.
//  Copyright © 2020 watson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface C2HybridItem : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *iconUrl;

@end

@interface C2FileModel : NSObject

@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, assign) long long size;

@end

@interface C2HybridValue : NSObject

//util.open
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSDictionary *params;

//util.openLink
@property (nonatomic, copy) NSString *url;

//util.openApp
//@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *corpId;
//@property (nonatomic, copy) NSDictionary *params;

//util.clipboardData
//@property (nonatomic, copy) NSString *text;

//navigation.openPage
//@property (nonatomic, copy) NSString *appId;
//@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *path;
//@property (nonatomic, copy) NSDictionary *params;

//navigation.goBack
@property (nonatomic, copy) NSString *result;

//navigation.close
//@property (nonatomic, copy) NSString *result;
@property (nonatomic, assign) NSInteger count;

//navigation.setTitle
@property (nonatomic, copy) NSString *title;

//navigation.setRight
@property (nonatomic, assign) BOOL show;
@property (nonatomic, assign) BOOL control;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *textColor;

//navigation.setMenu
@property (nonatomic, copy) NSString *backgroundColor;
//@property (nonatomic, copy) NSString *textColor;
@property (nonatomic, copy) NSArray<C2HybridItem *> *items;

//system.customToolBar
@property (nonatomic, copy) NSString *buttonID;

//system.request
@property (nonatomic, copy) NSString *requestMethod;
//@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSDictionary *queryParams;
@property (nonatomic, strong) id bodyParams;
@property (nonatomic, copy) NSDictionary *headers;

//auth.login
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *account;
@property (nonatomic, copy) NSString *pwd;
@property (nonatomic, assign) BOOL cleanCache;
@property (nonatomic, assign) BOOL isAutoLogin;

//auth.mofifyPassword
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *currentPassword;

//auth.register
@property (nonatomic, copy) NSString *username;
//@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *phone;
@property (nonatomic, copy) NSString *verifyCode;

//auth.thirdpartyLogin
@property (nonatomic, copy) NSString *userId;
//@property (nonatomic, assign) BOOL isAutoLogin;


//image.chooseImage
//@property (nonatomic, assign) NSInteger count;
@property (nonatomic, copy) NSArray<NSString *> *sizeType;
@property (nonatomic, copy) NSArray<NSString *> *sourceType;
@property (nonatomic, assign) BOOL isCircleCrop;

//image.uploadImage
@property (nonatomic, strong) C2FileModel *source;
@property (nonatomic, assign) BOOL isShowProgressTips;

//image.previewImage
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic, copy) NSString *current;

//file.uploadFile
//@property (nonatomic, strong) C2FileModel *source;
//@property (nonatomic, copy) NSString *url;
//@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSDictionary *formdata;
//@property (nonatomic, copy) NSString *name;

//file.previewFile
//@property (nonatomic, copy) NSString *url;

//file.openLocalFile
@property (nonatomic, copy) NSString *localPath;

//ui.setProgressBarColor
@property (nonatomic, copy) NSString *color;

//ui.showLoading
//@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) BOOL mask;
@property (nonatomic, assign) CGFloat duration;

//domainStorage
//@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, assign) BOOL isTemp;

//custom
//@property (nonatomic, copy) NSDictionary *params;
@property (nonatomic, copy) NSString *action;

//telephone
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *phoneCode;
@property (nonatomic, copy) NSString *smsContent;

@property (nonatomic, copy) NSString *onProgress;
@property (nonatomic, copy) NSString *onPageResult;
@property (nonatomic, copy) NSString *onSuccess;
@property (nonatomic, copy) NSString *onFail;
@property (nonatomic, strong) id returnValue;
@property (nonatomic, copy) NSString *funcName;

@end

@interface C2HybridParameters : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, strong) C2HybridValue *value;

@end

@interface C2HybridModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *method;
@property (nonatomic, copy) NSString *module;
@property (nonatomic, copy) NSArray<C2HybridParameters *> *parameters;

@end


NS_ASSUME_NONNULL_END
