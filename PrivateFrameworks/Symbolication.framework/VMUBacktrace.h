/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUBacktrace : NSObject <NSCopying>
{
    NSInteger _flavor;
    struct { 
        struct { 
            double t_begin; 
            double t_end; 
            NSInteger pid; 
            NSUInteger thread; 
            NSInteger run_state; 
            unsigned long long dispatch_queue_serial_num; 
        } context; 
        NSUInteger *frames; 
        char *frame_types; 
        NSUInteger length; 
    } _callstack;
}


- (void)setEndTime:(double)arg1;
- (struct _CSTypeRef { NSUInteger x1; NSUInteger x2; })_symbolicator;
- (id)initWithSamplingContext:(struct sampling_context_t { }*)arg1 thread:(NSUInteger)arg2;
- (id)initWithTask:(NSUInteger)arg1 thread:(NSUInteger)arg2 is64Bit:(BOOL)arg3;
- (id)initWithTask:(NSUInteger)arg1 thread:(NSUInteger)arg2 is64Bit:(BOOL)arg3 taskMemoryCache:(id)arg4;
- (void)fixupStackWithTask:(NSUInteger)arg1 symbolicator:(struct _CSTypeRef { NSUInteger x1; NSUInteger x2; })arg2 taskMemoryCache:(id)arg3;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { }*)arg1 symbolicator:(struct _CSTypeRef { NSUInteger x1; NSUInteger x2; })arg2;
- (BOOL)hasSameCallstack:(id)arg1;
- (NSUInteger)topmostFrame;
- (void)removeTopmostFrame;
- (void)setLengthTime:(double)arg1;
- (NSUInteger*)backtrace;
- (NSUInteger)backtraceLength;
- (NSUInteger)thread;
- (void)setThreadState:(NSInteger)arg1;
- (NSInteger)threadState;
- (unsigned long long)dispatchQueueSerialNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)setStartTime:(double)arg1;
- (void)dealloc;

@end