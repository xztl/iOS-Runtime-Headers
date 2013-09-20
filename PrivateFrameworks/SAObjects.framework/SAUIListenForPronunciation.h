/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASPronunciationContext;

@interface SAUIListenForPronunciation : SABaseClientBoundCommand {
}

@property(retain) SASPronunciationContext * context;

+ (id)listenForPronunciation;
+ (id)listenForPronunciationWithDictionary:(id)arg1 context:(id)arg2;

- (id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setContext:(id)arg1;

@end