//
//  ViewController.m
//  acrcloud_osx_demo
//
//  Created by olym.yin on 5/3/16.
//  Copyright © 2016 ACRCloud. All rights reserved.
//

#import "ViewController.h"
#import "ACRCloudRecognition.h"
#import "ACRCloudConfig.h"

@implementation ViewController
{
    ACRCloudRecognition         *_client;
    ACRCloudConfig          *_config;
    
}

- (void)viewDidLoad {
    [super viewDidLoad];

    // Do any additional setup after loading the view.
    
    _config = [[ACRCloudConfig alloc] init];
    
    _config.accessKey = @"<your project access key>";
    _config.accessSecret = @"<your project access secret>";
    _config.host = @"<your project host>";
    _config.requestTimeout = 10;
    
    _client = [[ACRCloudRecognition alloc] initWithConfig:_config];
    
    //"RIFF (little-endian) data, WAVE audio, Microsoft PCM, 16 bit, mono 8000 Hz"
    FILE *fp = fopen("/Users/olym.yin/Downloads/sample.wav", "r");
    char buffer[120000] = {0};
    fread(buffer, 1, 120000, fp);
    NSString* r = [_client recognize:buffer len:120000];
    NSLog(r);
}

- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}

@end
