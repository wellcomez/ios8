/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct internal_state;

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    void *zalloc;
    void *zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

// Ambiguous groups
typedef struct {
    unsigned int limit:1;
} CDStruct_88fc3008;

typedef struct {
    unsigned int maxChanges:1;
} CDStruct_f8809e99;

typedef struct {
    unsigned int type:1;
} CDStruct_f953fb60;

