/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AAAutoAccountVerifier, ACAccount, ACAccountStore, DAAccount, MFAccountValidator, NSMutableArray, NSMutableDictionary, NSString;

@interface AAUICloudSyncServicesController : NSObject <DAValidityCheckConsumer> {
    ACAccount *_account;
    DAAccount *_accountBeingValidated;
    ACAccountStore *_accountStore;
    NSMutableArray *_dataclassesRequiringMergeDecision;
    BOOL _didUserConsentToMerge;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    BOOL _isVerifyingExistingEmailAccount;
    NSMutableDictionary *_queuedDataclassActions;
    MFAccountValidator *_validator;
    AAAutoAccountVerifier *_verifier;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (Class)_accountClassForAddress:(id)arg1;
+ (id)_domainFromAddress:(id)arg1;
+ (id)_usernameFromAddress:(id)arg1;
+ (BOOL)canAutoSetupMailAccount:(id)arg1;
+ (BOOL)needSetupForMailAccount:(id)arg1;

- (void).cxx_destruct;
- (id)_account;
- (void)_addDAEmailAccount:(id)arg1;
- (void)_addMailAccount:(id)arg1;
- (void)_createAndValidateDAMailAccountWithProperties:(id)arg1;
- (void)_createAndValidateMailAccountWithProperties:(id)arg1;
- (BOOL)_dataclassBoundToSingleAccountAndOnAlready:(id)arg1 withAccount:(id)arg2;
- (void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2;
- (BOOL)_shouldInitiallyEnableDataclass:(id)arg1 forAccount:(id)arg2;
- (void)_validateDAAccount:(id)arg1;
- (void)_validateExistingEmailAccount:(id)arg1 withPassword:(id)arg2;
- (void)_validateMailAccount:(id)arg1;
- (void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)completeEnablingCloudServicesWithCompletion:(id)arg1;
- (id)init;
- (void)setBackupEnabled:(BOOL)arg1 completion:(id)arg2;
- (void)setCloudServicesEnabled:(BOOL)arg1 completion:(id)arg2;
- (void)setDeviceLocatorEnabled:(BOOL)arg1;
- (void)setupMailAccount:(id)arg1 password:(id)arg2 completion:(id)arg3;
- (void)verifyAccountWithAppleID:(id)arg1 completion:(id)arg2;

@end
