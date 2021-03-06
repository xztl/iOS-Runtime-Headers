/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem {
    CoreDAVItemWithNoChildren *_inviteNotification;
    CoreDAVItemWithNoChildren *_inviteReply;
    CoreDAVItemWithNoChildren *_resourceChanged;
}

@property (nonatomic, retain) CoreDAVItemWithNoChildren *inviteNotification;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *inviteReply;
@property (nonatomic, readonly) BOOL isInviteNotification;
@property (nonatomic, readonly) BOOL isInviteReply;
@property (nonatomic, readonly) BOOL isResourceChanged;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *resourceChanged;

- (void).cxx_destruct;
- (id)copyParseRules;
- (id)description;
- (id)inviteNotification;
- (id)inviteReply;
- (BOOL)isInviteNotification;
- (BOOL)isInviteReply;
- (BOOL)isResourceChanged;
- (BOOL)notificationNameIn:(id)arg1;
- (BOOL)notificationNameMatches:(id)arg1;
- (id)resourceChanged;
- (void)setInviteNotification:(id)arg1;
- (void)setInviteReply:(id)arg1;
- (void)setResourceChanged:(id)arg1;

@end
