//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEDocumentKVCEdition : SKEDocumentEdition
{
    NSString *_keyPath;
    id _object;
    id _value;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1 object:(id)arg2 value:(id)arg3 keyPath:(id)arg4;

@end