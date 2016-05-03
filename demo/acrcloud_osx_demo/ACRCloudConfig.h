//
//  ACRCloud_Config.h
//  ACRCloud_IOS_SDK
//
//  Created by olym on 15/3/25.
//  Copyright (c) 2015年 ACRCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    rec_mode_remote = 0,
    rec_mode_local = 1
}ACRCloudRecMode;

typedef enum {
    result_type_error = -1,
    result_type_none = 0,
    result_type_audio = 1,
    result_type_live = 2,
    result_type_audio_live = 3,
}ACRCloudResultType;

#define ACRCLOUD_VERSION @"1.0"

@interface ACRCloudConfig : NSObject
{
    NSString *_accessKey;
    NSString *_accessSecret;
    NSString *_host;
    NSString *_audioType;
    NSString *_homedir;
    NSString *_uuid;
    NSDictionary *_params;
    ACRCloudRecMode _recMode;
    int _requestTimeout;
}


@property(nonatomic, retain) NSString *accessKey;
@property(nonatomic, retain) NSString *accessSecret;
@property(nonatomic, retain) NSString *host;
@property(nonatomic, retain) NSString *audioType;
@property(nonatomic, retain) NSString *homedir;
@property(nonatomic, assign) ACRCloudRecMode recMode;
@property(nonatomic, assign) int requestTimeout;


@end
