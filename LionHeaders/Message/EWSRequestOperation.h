/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/MonitoredOperation.h>

@class EWSGateway, EWSResponseOperation;

@interface EWSRequestOperation : MonitoredOperation
{
    EWSResponseOperation *_responseOperation;
    EWSGateway *_gateway;
    BOOL _isOffline;
}

+ (Class)classForResponse;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)prepareRequest;
- (void)executeOperation;
- (BOOL)isFolderRequest;
- (BOOL)isOffline;
- (void)goOffline;
- (void)setupOfflineResponse;
- (id)description;
@property(retain, nonatomic) EWSGateway *gateway; // @synthesize gateway=_gateway;
@property(retain, nonatomic) EWSResponseOperation *responseOperation; // @synthesize responseOperation=_responseOperation;

@end
