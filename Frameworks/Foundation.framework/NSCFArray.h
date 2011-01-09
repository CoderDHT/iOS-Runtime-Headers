/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSCFArray : NSMutableArray 
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)replaceObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withObjects:(id*)arg2 count:(NSUInteger)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (Class)classForCoder;
- (void)finalize;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)exchangeObjectAtIndex:(NSUInteger)arg1 withObjectAtIndex:(NSUInteger)arg2;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSUInteger)retainCount;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)removeLastObject;
- (oneway void)release;
- (id)retain;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;

@end