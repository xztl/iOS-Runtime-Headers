/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MCMediaControlClientRemote : NSObject {
}

- (void)authorizeWithPICRequest:(id)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)dealloc;
- (void)getPlaybackInfoWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)getPositionWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)getVolumeWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)invalidate;
- (void)playRemoteWithParams:(id)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)playWithLocalFilePath:(id)arg1 startPosition:(float)arg2 playInfo:(id)arg3 completionQueue:(struct dispatch_queue_s { }*)arg4 completionBlock:(id)arg5;
- (void)setEventHandlerQueue:(struct dispatch_queue_s { }*)arg1 eventHandlerBlock:(id)arg2;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPosition:(float)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)setRate:(float)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)setVolume:(float)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)stopWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;

@end