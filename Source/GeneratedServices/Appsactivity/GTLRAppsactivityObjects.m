// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   G Suite Activity API (appsactivity/v1)
// Description:
//   Provides a historical view of activity.
// Documentation:
//   https://developers.google.com/google-apps/activity/

#import "GTLRAppsactivityObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRAppsactivity_Event.additionalEventTypes
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Comment = @"comment";
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Create = @"create";
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Edit = @"edit";
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_EmptyTrash = @"emptyTrash";
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Move = @"move";
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_PermissionChange = @"permissionChange";
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Rename = @"rename";
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Trash = @"trash";
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Unknown = @"unknown";
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Untrash = @"untrash";
NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Upload = @"upload";

// GTLRAppsactivity_Event.primaryEventType
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Comment = @"comment";
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Create = @"create";
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Edit = @"edit";
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_EmptyTrash = @"emptyTrash";
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Move = @"move";
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_PermissionChange = @"permissionChange";
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Rename = @"rename";
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Trash = @"trash";
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Unknown = @"unknown";
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Untrash = @"untrash";
NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Upload = @"upload";

// GTLRAppsactivity_Permission.role
NSString * const kGTLRAppsactivity_Permission_Role_Commenter   = @"commenter";
NSString * const kGTLRAppsactivity_Permission_Role_Owner       = @"owner";
NSString * const kGTLRAppsactivity_Permission_Role_PublishedReader = @"publishedReader";
NSString * const kGTLRAppsactivity_Permission_Role_Reader      = @"reader";
NSString * const kGTLRAppsactivity_Permission_Role_Writer      = @"writer";

// GTLRAppsactivity_Permission.type
NSString * const kGTLRAppsactivity_Permission_Type_Anyone = @"anyone";
NSString * const kGTLRAppsactivity_Permission_Type_Domain = @"domain";
NSString * const kGTLRAppsactivity_Permission_Type_Group  = @"group";
NSString * const kGTLRAppsactivity_Permission_Type_User   = @"user";

// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_Activity
//

@implementation GTLRAppsactivity_Activity
@dynamic combinedEvent, singleEvents;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"singleEvents" : [GTLRAppsactivity_Event class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_Event
//

@implementation GTLRAppsactivity_Event
@dynamic additionalEventTypes, eventTimeMillis, fromUserDeletion, move,
         permissionChanges, primaryEventType, rename, target, user;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"additionalEventTypes" : [NSString class],
    @"permissionChanges" : [GTLRAppsactivity_PermissionChange class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_ListActivitiesResponse
//

@implementation GTLRAppsactivity_ListActivitiesResponse
@dynamic activities, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"activities" : [GTLRAppsactivity_Activity class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"activities";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_Move
//

@implementation GTLRAppsactivity_Move
@dynamic addedParents, removedParents;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"addedParents" : [GTLRAppsactivity_Parent class],
    @"removedParents" : [GTLRAppsactivity_Parent class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_Parent
//

@implementation GTLRAppsactivity_Parent
@dynamic identifier, isRoot, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_Permission
//

@implementation GTLRAppsactivity_Permission
@dynamic name, permissionId, role, type, user, withLink;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_PermissionChange
//

@implementation GTLRAppsactivity_PermissionChange
@dynamic addedPermissions, removedPermissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"addedPermissions" : [GTLRAppsactivity_Permission class],
    @"removedPermissions" : [GTLRAppsactivity_Permission class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_Photo
//

@implementation GTLRAppsactivity_Photo
@dynamic url;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_Rename
//

@implementation GTLRAppsactivity_Rename
@dynamic newTitle, oldTitle;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_Target
//

@implementation GTLRAppsactivity_Target
@dynamic identifier, mimeType, name;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAppsactivity_User
//

@implementation GTLRAppsactivity_User
@dynamic isDeleted, isMe, name, permissionId, photo;
@end
