@interface LSApplicationProxy (AltList)
- (BOOL)atl_isSystemApplication;
- (BOOL)atl_isUserApplication;
- (BOOL)atl_isHidden;
- (NSString*)atl_fastDisplayName;
- (NSString*)atl_nameToDisplay;
@end