// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Billing API (cloudbilling/v1)
// Description:
//   Allows developers to manage billing for their Google Cloud Platform
//   projects
//   programmatically.
// Documentation:
//   https://cloud.google.com/billing/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudbilling_ProjectBillingInfo;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloudbilling query classes.
 */
@interface GTLRCloudbillingQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets information about a billing account. The current authenticated user
 *  must be an [owner of the billing
 *  account](https://support.google.com/cloud/answer/4430947).
 *
 *  Method: cloudbilling.billingAccounts.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudbillingCloudPlatform
 */
@interface GTLRCloudbillingQuery_BillingAccountsGet : GTLRCloudbillingQuery
// Previous library name was
//   +[GTLQueryCloudbilling queryForBillingAccountsGetWithname:]

/**
 *  The resource name of the billing account to retrieve. For example,
 *  `billingAccounts/012345-567890-ABCDEF`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudbilling_BillingAccount.
 *
 *  Gets information about a billing account. The current authenticated user
 *  must be an [owner of the billing
 *  account](https://support.google.com/cloud/answer/4430947).
 *
 *  @param name The resource name of the billing account to retrieve. For
 *    example,
 *    `billingAccounts/012345-567890-ABCDEF`.
 *
 *  @returns GTLRCloudbillingQuery_BillingAccountsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists the billing accounts that the current authenticated user
 *  [owns](https://support.google.com/cloud/answer/4430947).
 *
 *  Method: cloudbilling.billingAccounts.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudbillingCloudPlatform
 */
@interface GTLRCloudbillingQuery_BillingAccountsList : GTLRCloudbillingQuery
// Previous library name was
//   +[GTLQueryCloudbilling queryForBillingAccountsList]

/**
 *  Requested page size. The maximum page size is 100; this is also the
 *  default.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying a page of results to return. This should be a
 *  `next_page_token` value returned from a previous `ListBillingAccounts`
 *  call. If unspecified, the first page of results is returned.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudbilling_ListBillingAccountsResponse.
 *
 *  Lists the billing accounts that the current authenticated user
 *  [owns](https://support.google.com/cloud/answer/4430947).
 *
 *  @returns GTLRCloudbillingQuery_BillingAccountsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Lists the projects associated with a billing account. The current
 *  authenticated user must have the "billing.resourceAssociations.list" IAM
 *  permission, which is often given to billing account
 *  [viewers](https://support.google.com/cloud/answer/4430947).
 *
 *  Method: cloudbilling.billingAccounts.projects.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudbillingCloudPlatform
 */
@interface GTLRCloudbillingQuery_BillingAccountsProjectsList : GTLRCloudbillingQuery
// Previous library name was
//   +[GTLQueryCloudbilling queryForBillingAccountsProjectsListWithname:]

/**
 *  The resource name of the billing account associated with the projects that
 *  you want to list. For example, `billingAccounts/012345-567890-ABCDEF`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Requested page size. The maximum page size is 100; this is also the
 *  default.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying a page of results to be returned. This should be a
 *  `next_page_token` value returned from a previous `ListProjectBillingInfo`
 *  call. If unspecified, the first page of results is returned.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudbilling_ListProjectBillingInfoResponse.
 *
 *  Lists the projects associated with a billing account. The current
 *  authenticated user must have the "billing.resourceAssociations.list" IAM
 *  permission, which is often given to billing account
 *  [viewers](https://support.google.com/cloud/answer/4430947).
 *
 *  @param name The resource name of the billing account associated with the
 *    projects that
 *    you want to list. For example, `billingAccounts/012345-567890-ABCDEF`.
 *
 *  @returns GTLRCloudbillingQuery_BillingAccountsProjectsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the billing information for a project. The current authenticated user
 *  must have [permission to view the
 *  project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
 *  ).
 *
 *  Method: cloudbilling.projects.getBillingInfo
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudbillingCloudPlatform
 */
@interface GTLRCloudbillingQuery_ProjectsGetBillingInfo : GTLRCloudbillingQuery
// Previous library name was
//   +[GTLQueryCloudbilling queryForProjectsGetBillingInfoWithname:]

/**
 *  The resource name of the project for which billing information is
 *  retrieved. For example, `projects/tokyo-rain-123`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudbilling_ProjectBillingInfo.
 *
 *  Gets the billing information for a project. The current authenticated user
 *  must have [permission to view the
 *  project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
 *  ).
 *
 *  @param name The resource name of the project for which billing information
 *    is
 *    retrieved. For example, `projects/tokyo-rain-123`.
 *
 *  @returns GTLRCloudbillingQuery_ProjectsGetBillingInfo
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Sets or updates the billing account associated with a project. You specify
 *  the new billing account by setting the `billing_account_name` in the
 *  `ProjectBillingInfo` resource to the resource name of a billing account.
 *  Associating a project with an open billing account enables billing on the
 *  project and allows charges for resource usage. If the project already had a
 *  billing account, this method changes the billing account used for resource
 *  usage charges.
 *  *Note:* Incurred charges that have not yet been reported in the transaction
 *  history of the Google Cloud Console may be billed to the new billing
 *  account, even if the charge occurred before the new billing account was
 *  assigned to the project.
 *  The current authenticated user must have ownership privileges for both the
 *  [project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
 *  ) and the [billing
 *  account](https://support.google.com/cloud/answer/4430947).
 *  You can disable billing on the project by setting the
 *  `billing_account_name` field to empty. This action disassociates the
 *  current billing account from the project. Any billable activity of your
 *  in-use services will stop, and your application could stop functioning as
 *  expected. Any unbilled charges to date will be billed to the previously
 *  associated account. The current authenticated user must be either an owner
 *  of the project or an owner of the billing account for the project.
 *  Note that associating a project with a *closed* billing account will have
 *  much the same effect as disabling billing on the project: any paid
 *  resources used by the project will be shut down. Thus, unless you wish to
 *  disable billing, you should always call this method with the name of an
 *  *open* billing account.
 *
 *  Method: cloudbilling.projects.updateBillingInfo
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudbillingCloudPlatform
 */
@interface GTLRCloudbillingQuery_ProjectsUpdateBillingInfo : GTLRCloudbillingQuery
// Previous library name was
//   +[GTLQueryCloudbilling queryForProjectsUpdateBillingInfoWithObject:name:]

/**
 *  The resource name of the project associated with the billing information
 *  that you want to update. For example, `projects/tokyo-rain-123`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudbilling_ProjectBillingInfo.
 *
 *  Sets or updates the billing account associated with a project. You specify
 *  the new billing account by setting the `billing_account_name` in the
 *  `ProjectBillingInfo` resource to the resource name of a billing account.
 *  Associating a project with an open billing account enables billing on the
 *  project and allows charges for resource usage. If the project already had a
 *  billing account, this method changes the billing account used for resource
 *  usage charges.
 *  *Note:* Incurred charges that have not yet been reported in the transaction
 *  history of the Google Cloud Console may be billed to the new billing
 *  account, even if the charge occurred before the new billing account was
 *  assigned to the project.
 *  The current authenticated user must have ownership privileges for both the
 *  [project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
 *  ) and the [billing
 *  account](https://support.google.com/cloud/answer/4430947).
 *  You can disable billing on the project by setting the
 *  `billing_account_name` field to empty. This action disassociates the
 *  current billing account from the project. Any billable activity of your
 *  in-use services will stop, and your application could stop functioning as
 *  expected. Any unbilled charges to date will be billed to the previously
 *  associated account. The current authenticated user must be either an owner
 *  of the project or an owner of the billing account for the project.
 *  Note that associating a project with a *closed* billing account will have
 *  much the same effect as disabling billing on the project: any paid
 *  resources used by the project will be shut down. Thus, unless you wish to
 *  disable billing, you should always call this method with the name of an
 *  *open* billing account.
 *
 *  @param object The @c GTLRCloudbilling_ProjectBillingInfo to include in the
 *    query.
 *  @param name The resource name of the project associated with the billing
 *    information
 *    that you want to update. For example, `projects/tokyo-rain-123`.
 *
 *  @returns GTLRCloudbillingQuery_ProjectsUpdateBillingInfo
 */
+ (instancetype)queryWithObject:(GTLRCloudbilling_ProjectBillingInfo *)object
                           name:(NSString *)name;

@end

/**
 *  Lists all public cloud services.
 *
 *  Method: cloudbilling.services.list
 */
@interface GTLRCloudbillingQuery_ServicesList : GTLRCloudbillingQuery
// Previous library name was
//   +[GTLQueryCloudbilling queryForServicesList]

/** Requested page size. Defaults to 5000. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying a page of results to return. This should be a
 *  `next_page_token` value returned from a previous `ListServices`
 *  call. If unspecified, the first page of results is returned.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudbilling_ListServicesResponse.
 *
 *  Lists all public cloud services.
 *
 *  @returns GTLRCloudbillingQuery_ServicesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Lists all publicly available SKUs for a given cloud service.
 *
 *  Method: cloudbilling.services.skus.list
 */
@interface GTLRCloudbillingQuery_ServicesSkusList : GTLRCloudbillingQuery
// Previous library name was
//   +[GTLQueryCloudbilling queryForServicesSkusListWithparent:]

/**
 *  The ISO 4217 currency code for the pricing info in the response proto.
 *  Will use the conversion rate as of start_time.
 *  Optional. If not specified USD will be used.
 */
@property(nonatomic, copy, nullable) NSString *currencyCode;

/**
 *  Optional exclusive end time of the time range for which the pricing
 *  versions will be returned. Timestamps in the future are not allowed.
 *  The time range has to be within a single calendar month in
 *  America/Los_Angeles timezone. Time range as a whole is optional. If not
 *  specified, the latest pricing will be returned (up to 12 hours old at
 *  most).
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/** Requested page size. Defaults to 5000. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying a page of results to return. This should be a
 *  `next_page_token` value returned from a previous `ListSkus`
 *  call. If unspecified, the first page of results is returned.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The name of the service.
 *  Example: "services/DA34-426B-A397"
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Optional inclusive start time of the time range for which the pricing
 *  versions will be returned. Timestamps in the future are not allowed.
 *  The time range has to be within a single calendar month in
 *  America/Los_Angeles timezone. Time range as a whole is optional. If not
 *  specified, the latest pricing will be returned (up to 12 hours old at
 *  most).
 */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

/**
 *  Fetches a @c GTLRCloudbilling_ListSkusResponse.
 *
 *  Lists all publicly available SKUs for a given cloud service.
 *
 *  @param parent The name of the service.
 *    Example: "services/DA34-426B-A397"
 *
 *  @returns GTLRCloudbillingQuery_ServicesSkusList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
