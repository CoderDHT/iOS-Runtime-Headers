/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABTCC : NSObject {
    unsigned int _simulateAccessPromptDelay;
    long long _simulateType;
    bool_calledExternalChangeCallbacks;
    bool_simulateAccessPrompt;
    bool_simulateAccessPromptGranted;
}

+ (id)sharedInstance;

- (id)_simulateQueue;
- (int)accessPreflight;
- (void)accessRequestWithCompletion:(id)arg1;
- (void)callExternalChangeCallbacks:(bool)arg1;
- (void)dealloc;
- (id)init;
- (unsigned char)isAccessRestricted;
- (void)simulate:(long long)arg1;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(bool)arg1 withDelay:(unsigned int)arg2;

@end