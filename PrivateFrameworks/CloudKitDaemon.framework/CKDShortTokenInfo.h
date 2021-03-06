/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKShareID, NSData, NSString;

@interface CKDShortTokenInfo : NSObject <NSCopying> {
    NSString *_routingKey;
    CKShareID *_shareID;
    NSData *_shortSharingTokenHashData;
}

@property(retain) NSString * routingKey;
@property(retain) CKShareID * shareID;
@property(retain) NSData * shortSharingTokenHashData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)routingKey;
- (void)setRoutingKey:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setShortSharingTokenHashData:(id)arg1;
- (id)shareID;
- (id)shortSharingTokenHashData;

@end
