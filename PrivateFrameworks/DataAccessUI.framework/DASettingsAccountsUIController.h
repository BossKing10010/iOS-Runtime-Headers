/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@interface DASettingsAccountsUIController : ACUIViewController <DAValidityCheckConsumer, UIActionSheetDelegate, UIAlertViewDelegate> {
    DAAccount *_account;
    BOOL _accountNeedsAdd;
    BOOL _attemptedValidation;
    BOOL _confirmedUnvalidatedAccount;
    BOOL _didSetFullHostURL;
    BOOL _haveRegisteredForAccountsChanged;
    BOOL _isSettingUpNewAccount;
    BOOL _needsSave;
    BOOL _transitioningToFinishedAccountSetup;
    BOOL _validatedSuccessfully;
}

@property (nonatomic, retain) DAAccount *account;
@property (nonatomic) BOOL accountNeedsAdd;
@property (nonatomic) BOOL attemptedValidation;
@property (nonatomic) BOOL confirmedUnvalidatedAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetFullHostURL;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL haveRegisteredForAccountsChanged;
@property (nonatomic) BOOL isSettingUpNewAccount;
@property (nonatomic) BOOL needsSave;
@property (readonly) Class superclass;
@property (nonatomic) BOOL transitioningToFinishedAccountSetup;
@property (nonatomic) BOOL validatedSuccessfully;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (void)_beginAccountValidation;
- (void)_confirmSaveUnvalidatedAccount;
- (id)_defaultAccountDescription;
- (void)_deleteAccount;
- (void)_dismissAndUpdateParent;
- (void)_finishSaveAccountDismissWhenDone:(BOOL)arg1;
- (void)_saveAccountDismissWhenDone:(BOOL)arg1;
- (id)account;
- (void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3;
- (id)accountBooleanPropertyWithSpecifier:(id)arg1;
- (id)accountFromSpecifier;
- (BOOL)accountNeedsAdd;
- (id)accountPropertyWithSpecifier:(id)arg1;
- (id)accountSpecifiers;
- (BOOL)attemptedValidation;
- (void)cancelButtonTapped:(id)arg1;
- (BOOL)confirmedUnvalidatedAccount;
- (id)currentlyEditingCell;
- (id)daAccountWithBackingAccountInfo:(id)arg1;
- (void)dealloc;
- (void)deleteAccountButtonTapped;
- (void)didConfirmSaveUnvalidatedAccount:(BOOL)arg1;
- (void)didConfirmTryWithoutSSL:(BOOL)arg1;
- (BOOL)didSetFullHostURL;
- (BOOL)dismissesAfterInitialSetup;
- (void)doneButtonTapped:(id)arg1;
- (void)finishedAccountSetup;
- (BOOL)haveEnoughValues;
- (BOOL)haveRegisteredForAccountsChanged;
- (void)hideProgressWithPrompt:(id)arg1;
- (int)indexOfCurrentlyEditingCell;
- (BOOL)isRunningFromMobileMailApp;
- (BOOL)isSettingUpNewAccount;
- (id)lastGroupSpecifierInSpecifiers:(id)arg1;
- (id)localizedAccountSetupTitleString;
- (id)localizedAccountTitleString;
- (id)localizedConfirmSaveUnvalidatedAccountMessageString;
- (id)localizedConfirmSaveUnvalidatedAccountTitleString;
- (id)localizedValidationFailureTitleString;
- (BOOL)needsSave;
- (id)newDefaultAccount;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)propertyValueChanged:(id)arg1;
- (void)reloadAccount;
- (void)setAccount:(id)arg1;
- (void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setAccountNeedsAdd:(BOOL)arg1;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setAttemptedValidation:(BOOL)arg1;
- (void)setConfirmedUnvalidatedAccount:(BOOL)arg1;
- (void)setDidSetFullHostURL:(BOOL)arg1;
- (void)setHaveRegisteredForAccountsChanged:(BOOL)arg1;
- (void)setHostString:(id)arg1;
- (void)setIsSettingUpNewAccount:(BOOL)arg1;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setNeedsSaveAndValidation:(BOOL)arg1;
- (void)setTransitioningToFinishedAccountSetup:(BOOL)arg1;
- (void)setValidatedSuccessfully:(BOOL)arg1;
- (void)showIdenticalAccountFailureView;
- (void)showSSLFailureView;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)transitioningToFinishedAccountSetup;
- (BOOL)transitionsAfterInitialSetup;
- (void)updateDoneButton;
- (BOOL)validateAccount;
- (BOOL)validatedSuccessfully;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
