/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class NSString;

@interface ATPError : PBCodable <NSCopying> {
    int _code;
    NSString *_domain;
    long long _domainCode;
    NSString *_errorDescription;
    struct { 
        unsigned int domainCode : 1; 
        unsigned int code : 1; 
    } _has;
}

@property int code;
@property(retain) NSString * domain;
@property long long domainCode;
@property(retain) NSString * errorDescription;
@property BOOL hasCode;
@property(readonly) BOOL hasDomain;
@property BOOL hasDomainCode;
@property(readonly) BOOL hasErrorDescription;

- (void).cxx_destruct;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (long long)domainCode;
- (id)errorDescription;
- (BOOL)hasCode;
- (BOOL)hasDomain;
- (BOOL)hasDomainCode;
- (BOOL)hasErrorDescription;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setDomainCode:(long long)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setHasCode:(BOOL)arg1;
- (void)setHasDomainCode:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
