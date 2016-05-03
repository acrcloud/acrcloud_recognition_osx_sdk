//
//  ACRCloud_IOS_SDK.h
//  ACRCloud_IOS_SDK
//
//  Created by olym on 15/3/24.
//  Copyright (c) 2015年 ACRCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ACRCloudConfig.h"

@interface ACRCloudRecognition : NSObject

-(id)initWithConfig:(ACRCloudConfig*)config;

//"RIFF (little-endian) data, WAVE audio, Microsoft PCM, 16 bit, mono 8000 Hz"
-(NSString*)recognize:(char*)buffer len:(int)len;

//"RIFF (little-endian) data, WAVE audio, Microsoft PCM, 16 bit, mono 8000 Hz"
+(NSData*)get_fingerprint:(char*)pcm len:(int)len;

//"RIFF (little-endian) data, WAVE audio, Microsoft PCM, 16 bit, mono 8000 Hz"
+(NSData*) get_fingerprint:(char*)pcm
                     len:(unsigned)len
                sampleRate:(unsigned)sampleRate
                  nChannel:(short)nChannel;

+(NSData*) resample:(char*)pcm
                len:(unsigned)len
         sampleRate:(unsigned)sampleRate
           nChannel:(short)nChannel;

@end
