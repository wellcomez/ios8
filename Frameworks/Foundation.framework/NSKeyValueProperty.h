/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSKeyValueContainerClass, NSString;

// Not exported
@interface NSKeyValueProperty : NSObject <NSCopying>
{
    NSKeyValueContainerClass *_containerClass;
    NSString *_keyPath;
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1;
- (id)dependentValueKeyOrKeysIsASet:(_Bool *)arg1;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;
- (Class)isaForAutonotifying;
- (id)keyPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;

@end
