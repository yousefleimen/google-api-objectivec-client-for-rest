// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   G Suite Activity API (appsactivity/v1)
// Description:
//   Provides a historical view of activity.
// Documentation:
//   https://developers.google.com/google-apps/activity/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAppsactivity_Activity;
@class GTLRAppsactivity_Event;
@class GTLRAppsactivity_Move;
@class GTLRAppsactivity_Parent;
@class GTLRAppsactivity_Permission;
@class GTLRAppsactivity_PermissionChange;
@class GTLRAppsactivity_Photo;
@class GTLRAppsactivity_Rename;
@class GTLRAppsactivity_Target;
@class GTLRAppsactivity_User;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRAppsactivity_Event.additionalEventTypes

/** Value: "comment" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Comment;
/** Value: "create" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Create;
/** Value: "edit" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Edit;
/** Value: "emptyTrash" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_EmptyTrash;
/** Value: "move" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Move;
/** Value: "permissionChange" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_PermissionChange;
/** Value: "rename" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Rename;
/** Value: "trash" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Trash;
/** Value: "unknown" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Unknown;
/** Value: "untrash" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Untrash;
/** Value: "upload" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_AdditionalEventTypes_Upload;

// ----------------------------------------------------------------------------
// GTLRAppsactivity_Event.primaryEventType

/** Value: "comment" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Comment;
/** Value: "create" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Create;
/** Value: "edit" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Edit;
/** Value: "emptyTrash" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_EmptyTrash;
/** Value: "move" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Move;
/** Value: "permissionChange" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_PermissionChange;
/** Value: "rename" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Rename;
/** Value: "trash" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Trash;
/** Value: "unknown" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Unknown;
/** Value: "untrash" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Untrash;
/** Value: "upload" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Event_PrimaryEventType_Upload;

// ----------------------------------------------------------------------------
// GTLRAppsactivity_Permission.role

/** Value: "commenter" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Permission_Role_Commenter;
/** Value: "owner" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Permission_Role_Owner;
/** Value: "publishedReader" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Permission_Role_PublishedReader;
/** Value: "reader" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Permission_Role_Reader;
/** Value: "writer" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Permission_Role_Writer;

// ----------------------------------------------------------------------------
// GTLRAppsactivity_Permission.type

/** Value: "anyone" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Permission_Type_Anyone;
/** Value: "domain" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Permission_Type_Domain;
/** Value: "group" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Permission_Type_Group;
/** Value: "user" */
GTLR_EXTERN NSString * const kGTLRAppsactivity_Permission_Type_User;

/**
 *  An Activity resource is a combined view of multiple events. An activity has
 *  a list of individual events and a combined view of the common fields among
 *  all events.
 */
@interface GTLRAppsactivity_Activity : GTLRObject

/** The fields common to all of the singleEvents that make up the Activity. */
@property(nonatomic, strong, nullable) GTLRAppsactivity_Event *combinedEvent;

/** A list of all the Events that make up the Activity. */
@property(nonatomic, strong, nullable) NSArray<GTLRAppsactivity_Event *> *singleEvents;

@end


/**
 *  Represents the changes associated with an action taken by a user.
 */
@interface GTLRAppsactivity_Event : GTLRObject

/**
 *  Additional event types. Some events may have multiple types when multiple
 *  actions are part of a single event. For example, creating a document,
 *  renaming it, and sharing it may be part of a single file-creation event.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *additionalEventTypes;

/**
 *  The time at which the event occurred formatted as Unix time in milliseconds.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *eventTimeMillis;

/**
 *  Whether this event is caused by a user being deleted.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *fromUserDeletion;

/**
 *  Extra information for move type events, such as changes in an object's
 *  parents.
 */
@property(nonatomic, strong, nullable) GTLRAppsactivity_Move *move;

/**
 *  Extra information for permissionChange type events, such as the user or
 *  group the new permission applies to.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAppsactivity_PermissionChange *> *permissionChanges;

/**
 *  The main type of event that occurred.
 *
 *  Likely values:
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_Comment Value "comment"
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_Create Value "create"
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_Edit Value "edit"
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_EmptyTrash Value
 *        "emptyTrash"
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_Move Value "move"
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_PermissionChange Value
 *        "permissionChange"
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_Rename Value "rename"
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_Trash Value "trash"
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_Unknown Value "unknown"
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_Untrash Value "untrash"
 *    @arg @c kGTLRAppsactivity_Event_PrimaryEventType_Upload Value "upload"
 */
@property(nonatomic, copy, nullable) NSString *primaryEventType;

/**
 *  Extra information for rename type events, such as the old and new names.
 */
@property(nonatomic, strong, nullable) GTLRAppsactivity_Rename *rename;

/** Information specific to the Target object modified by the event. */
@property(nonatomic, strong, nullable) GTLRAppsactivity_Target *target;

/** Represents the user responsible for the event. */
@property(nonatomic, strong, nullable) GTLRAppsactivity_User *user;

@end


/**
 *  The response from the list request. Contains a list of activities and a
 *  token to retrieve the next page of results.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "activities" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAppsactivity_ListActivitiesResponse : GTLRCollectionObject

/**
 *  List of activities.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAppsactivity_Activity *> *activities;

/** Token for the next page of results. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Contains information about changes in an object's parents as a result of a
 *  move type event.
 */
@interface GTLRAppsactivity_Move : GTLRObject

/** The added parent(s). */
@property(nonatomic, strong, nullable) NSArray<GTLRAppsactivity_Parent *> *addedParents;

/** The removed parent(s). */
@property(nonatomic, strong, nullable) NSArray<GTLRAppsactivity_Parent *> *removedParents;

@end


/**
 *  Contains information about a parent object. For example, a folder in Drive
 *  is a parent for all files within it.
 */
@interface GTLRAppsactivity_Parent : GTLRObject

/**
 *  The parent's ID.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Whether this is the root folder.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isRoot;

/** The parent's title. */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  Contains information about the permissions and type of access allowed with
 *  regards to a Google Drive object. This is a subset of the fields contained
 *  in a corresponding Drive Permissions object.
 */
@interface GTLRAppsactivity_Permission : GTLRObject

/** The name of the user or group the permission applies to. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The ID for this permission. Corresponds to the Drive API's permission ID
 *  returned as part of the Drive Permissions resource.
 */
@property(nonatomic, copy, nullable) NSString *permissionId;

/**
 *  Indicates the Google Drive permissions role. The role determines a user's
 *  ability to read, write, or comment on the file.
 *
 *  Likely values:
 *    @arg @c kGTLRAppsactivity_Permission_Role_Commenter Value "commenter"
 *    @arg @c kGTLRAppsactivity_Permission_Role_Owner Value "owner"
 *    @arg @c kGTLRAppsactivity_Permission_Role_PublishedReader Value
 *        "publishedReader"
 *    @arg @c kGTLRAppsactivity_Permission_Role_Reader Value "reader"
 *    @arg @c kGTLRAppsactivity_Permission_Role_Writer Value "writer"
 */
@property(nonatomic, copy, nullable) NSString *role;

/**
 *  Indicates how widely permissions are granted.
 *
 *  Likely values:
 *    @arg @c kGTLRAppsactivity_Permission_Type_Anyone Value "anyone"
 *    @arg @c kGTLRAppsactivity_Permission_Type_Domain Value "domain"
 *    @arg @c kGTLRAppsactivity_Permission_Type_Group Value "group"
 *    @arg @c kGTLRAppsactivity_Permission_Type_User Value "user"
 */
@property(nonatomic, copy, nullable) NSString *type;

/** The user's information if the type is USER. */
@property(nonatomic, strong, nullable) GTLRAppsactivity_User *user;

/**
 *  Whether the permission requires a link to the file.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *withLink;

@end


/**
 *  Contains information about a Drive object's permissions that changed as a
 *  result of a permissionChange type event.
 */
@interface GTLRAppsactivity_PermissionChange : GTLRObject

/** Lists all Permission objects added. */
@property(nonatomic, strong, nullable) NSArray<GTLRAppsactivity_Permission *> *addedPermissions;

/** Lists all Permission objects removed. */
@property(nonatomic, strong, nullable) NSArray<GTLRAppsactivity_Permission *> *removedPermissions;

@end


/**
 *  Photo information for a user.
 */
@interface GTLRAppsactivity_Photo : GTLRObject

/** The URL of the photo. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  Contains information about a renametype event.
 */
@interface GTLRAppsactivity_Rename : GTLRObject

/** The new title. */
@property(nonatomic, copy, nullable) NSString *newTitle NS_RETURNS_NOT_RETAINED;

/** The old title. */
@property(nonatomic, copy, nullable) NSString *oldTitle;

@end


/**
 *  Information about the object modified by the event.
 */
@interface GTLRAppsactivity_Target : GTLRObject

/**
 *  The ID of the target. For example, in Google Drive, this is the file or
 *  folder ID.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The MIME type of the target. */
@property(nonatomic, copy, nullable) NSString *mimeType;

/**
 *  The name of the target. For example, in Google Drive, this is the title of
 *  the file.
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  A representation of a user.
 */
@interface GTLRAppsactivity_User : GTLRObject

/**
 *  A boolean which indicates whether the specified User was deleted. If true,
 *  name, photo and permission_id will be omitted.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isDeleted;

/**
 *  Whether the user is the authenticated user.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isMe;

/** The displayable name of the user. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The permission ID associated with this user. Equivalent to the Drive API's
 *  permission ID for this user, returned as part of the Drive Permissions
 *  resource.
 */
@property(nonatomic, copy, nullable) NSString *permissionId;

/**
 *  The profile photo of the user. Not present if the user has no profile photo.
 */
@property(nonatomic, strong, nullable) GTLRAppsactivity_Photo *photo;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
