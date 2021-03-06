/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISingleContactTableViewCell : SearchUISingleResultTableViewCell {
    CNAvatarView *_avatarView;
    NSString *_contactIdentifier;
    CNQuickActionsView *_quickActionsView;
    BOOL _supportsActions;
}

@property (retain) CNAvatarView *avatarView;
@property (retain) NSString *contactIdentifier;
@property (retain) CNQuickActionsView *quickActionsView;
@property (nonatomic) BOOL supportsActions;

+ (void)initialize;

- (void).cxx_destruct;
- (id)avatarView;
- (void)clearPurgeableMemory;
- (id)contactIdentifier;
- (BOOL)hasActionButton;
- (id)initWithResult:(id)arg1 style:(unsigned int)arg2;
- (id)quickActionsView;
- (void)setAvatarView:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setQuickActionsView:(id)arg1;
- (void)setSupportsActions:(BOOL)arg1;
- (BOOL)supportsActions;
- (void)updateThumbnailViewForResult:(id)arg1;
- (void)updateWithContact:(id)arg1;
- (void)updateWithResult:(id)arg1;
- (id)viewForActionButton:(id)arg1 style:(unsigned int)arg2 result:(id)arg3;
- (id)viewForThumbnail;

@end
