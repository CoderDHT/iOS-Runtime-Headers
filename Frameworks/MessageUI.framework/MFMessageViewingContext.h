/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MessageBody, MimePart, ActivityMonitor, MailMessage, NSLock, NSObject<MFMessageViewingContextDelegate>;

@interface MFMessageViewingContext : NSObject {
    unsigned int _loadedFullData : 1;
    unsigned int _loadBestAlternative : 1;
    unsigned int _hasNoContent : 1;
    unsigned int _failedToLoad : 1;
    unsigned int _isOutgoingMessage : 1;
    unsigned int _isDraftMessage : 1;
    MessageBody *_body;
    id _content;
    NSLock *_contentLock;
    NSUInteger _contentOffset;
    NSObject<MFMessageViewingContextDelegate> *_delegate;
    NSUInteger _loadIncrement;
    ActivityMonitor *_loadTask;
    MimePart *_loadedPart;
    MailMessage *_message;
}

+ (NSUInteger)nextOffsetForOffset:(NSUInteger)arg1 totalLength:(NSUInteger)arg2 requestedAmount:(NSUInteger)arg3;

- (void)_loadAttachments:(id)arg1;
- (void)_notifyAttachmentComplete:(id)arg1;
- (void)_notifyCompletelyComplete;
- (void)_notifyFullMessageLoadFailed;
- (void)_notifyInitialLoadComplete;
- (void)abortAttachmentLoad:(id)arg1 pluginClient:(id)arg2;
- (id)attachments;
- (void)cancelLoad;
- (id)content;
- (NSUInteger)contentOffset;
- (void)dealloc;
- (BOOL)failedToLoad;
- (id)fileWrappersForImageAttachments;
- (BOOL)hasLoaded;
- (BOOL)hasNoContent;
- (id)initWithMessage:(id)arg1;
- (BOOL)isDraftMessage;
- (BOOL)isOutgoingMessage;
- (BOOL)isPartial;
- (void)load;
- (void)loadAsPlainText:(BOOL)arg1 asHTML:(BOOL)arg2;
- (void)loadAttachment:(id)arg1 pluginClient:(id)arg2;
- (void)loadBestAlternative;
- (void)loadFull;
- (void)loadMore;
- (id)loadTask;
- (void)loadWithPriority:(NSInteger)arg1;
- (id)loadedPart;
- (id)message;
- (id)messageBody;
- (NSUInteger)numberOfImageAttachments;
- (void)setContent:(id)arg1;
- (void)setContentOffset:(NSUInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsDraftMessage:(BOOL)arg1;
- (void)setLoadTask:(id)arg1;
- (void)setLoadedPart:(id)arg1;
- (void)setMessageBody:(id)arg1;
- (void)setOutgoingMessage:(BOOL)arg1;
- (id)uniqueID;
- (void)unload;

@end