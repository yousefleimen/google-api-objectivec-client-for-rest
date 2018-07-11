// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Replica Pool API (replicapool/v1beta1)
// Description:
//   The Replica Pool API allows users to declaratively provision and manage
//   groups of Google Compute Engine instances based on a common template.
// Documentation:
//   https://developers.google.com/compute/docs/replica-pool/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage replica pools
 *
 *  Value "https://www.googleapis.com/auth/replicapool"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeReplicaPool;
/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeReplicaPoolCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud Platform services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeReplicaPoolCloudPlatformReadOnly;
/**
 *  Authorization scope: View and manage your Google Cloud Platform management
 *  resources and deployment status information
 *
 *  Value "https://www.googleapis.com/auth/ndev.cloudman"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeReplicaPoolNdevCloudman;
/**
 *  Authorization scope: View your Google Cloud Platform management resources
 *  and deployment status information
 *
 *  Value "https://www.googleapis.com/auth/ndev.cloudman.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeReplicaPoolNdevCloudmanReadonly;
/**
 *  Authorization scope: View replica pools
 *
 *  Value "https://www.googleapis.com/auth/replicapool.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeReplicaPoolReadonly;

// ----------------------------------------------------------------------------
//   GTLRReplicaPoolService
//

/**
 *  Service for executing Replica Pool API queries.
 *
 *  The Replica Pool API allows users to declaratively provision and manage
 *  groups of Google Compute Engine instances based on a common template.
 */
@interface GTLRReplicaPoolService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRReplicaPoolQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop