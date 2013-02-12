/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, SSAccount;

@interface SSAuthenticateResponse : NSObject <SSCoding> {
    SSAccount *_authenticatedAccount;
    NSDictionary *_responseDictionary;
    int _responseType;
}

@property int authenticateResponseType;
@property(retain) SSAccount * authenticatedAccount;
@property(copy) NSDictionary * responseDictionary;

- (int)authenticateResponseType;
- (id)authenticatedAccount;
- (id)copyPropertyListEncoding;
- (void*)copyXPCEncoding;
- (void)dealloc;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)responseDictionary;
- (void)setAuthenticateResponseType:(int)arg1;
- (void)setAuthenticatedAccount:(id)arg1;
- (void)setResponseDictionary:(id)arg1;

@end