/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
 */

@interface UNSRemoteNotificationRegistrar : NSObject <UNSNotificationRegistrarConnectionObserver> {
    NSString *_bundleIdentifier;
    <UNSRemoteNotificationRegistrarDelegate> *_delegate;
}

@property (copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNSRemoteNotificationRegistrarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)backgroundAppRefreshBundleIdentifierMapping;
+ (void)backgroundAppRefreshBundleIdentifierMappingWithResult:(id /* block */)arg1;
+ (void)setAllowsBackgroundRefresh:(BOOL)arg1 forBundleIdentifier:(id)arg2;

- (BOOL)allowsRemoteNotifications;
- (void)allowsRemoteNotificationsWithResult:(id /* block */)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)invalidateTokenForRemoteNotifications;
- (void)registerRemoteNotificationTypes:(unsigned int)arg1 withResult:(id /* block */)arg2;
- (unsigned int)remoteNotificationTypes;
- (void)remoteNotificationTypesWithResult:(id /* block */)arg1;
- (void)requestTokenForRemoteNotificationsWithResult:(id /* block */)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
