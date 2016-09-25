/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceDiscoverySession : NSObject {
    NSArray * _deviceTypes;
    NSArray * _devices;
    NSString * _mediaType;
    int * _position;
}

@property (nonatomic, readonly) NSArray *devices;

+ (id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(int)arg3;

- (id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(int)arg3;
- (void)dealloc;
- (id)description;
- (id)devices;
- (id)init;

@end