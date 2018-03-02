// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Content API for Shopping (content/v2)
// Description:
//   Manages product items, inventory, and Merchant Center accounts for Google
//   Shopping.
// Documentation:
//   https://developers.google.com/shopping-content

#import "GTLRShoppingContent.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeShoppingContent = @"https://www.googleapis.com/auth/content";

// ----------------------------------------------------------------------------
//   GTLRShoppingContentService
//

@implementation GTLRShoppingContentService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://www.googleapis.com/";
    self.servicePath = @"content/v2/";
    self.batchPath = @"batch/content/v2";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

+ (NSDictionary<NSString *, Class> *)kindStringToClassMap {
  return @{
    @"content#account" : [GTLRShoppingContent_Account class],
    @"content#accountsAuthInfoResponse" : [GTLRShoppingContent_AccountsAuthInfoResponse class],
    @"content#accountsClaimWebsiteResponse" : [GTLRShoppingContent_AccountsClaimWebsiteResponse class],
    @"content#accountsCustomBatchResponse" : [GTLRShoppingContent_AccountsCustomBatchResponse class],
    @"content#accountsCustomBatchResponseEntry" : [GTLRShoppingContent_AccountsCustomBatchResponseEntry class],
    @"content#accountsListResponse" : [GTLRShoppingContent_AccountsListResponse class],
    @"content#accountStatus" : [GTLRShoppingContent_AccountStatus class],
    @"content#accountstatusesCustomBatchResponse" : [GTLRShoppingContent_AccountstatusesCustomBatchResponse class],
    @"content#accountstatusesListResponse" : [GTLRShoppingContent_AccountstatusesListResponse class],
    @"content#accountTax" : [GTLRShoppingContent_AccountTax class],
    @"content#accounttaxCustomBatchResponse" : [GTLRShoppingContent_AccounttaxCustomBatchResponse class],
    @"content#accounttaxCustomBatchResponseEntry" : [GTLRShoppingContent_AccounttaxCustomBatchResponseEntry class],
    @"content#accounttaxListResponse" : [GTLRShoppingContent_AccounttaxListResponse class],
    @"content#datafeed" : [GTLRShoppingContent_Datafeed class],
    @"content#datafeedsCustomBatchResponse" : [GTLRShoppingContent_DatafeedsCustomBatchResponse class],
    @"content#datafeedsListResponse" : [GTLRShoppingContent_DatafeedsListResponse class],
    @"content#datafeedStatus" : [GTLRShoppingContent_DatafeedStatus class],
    @"content#datafeedstatusesCustomBatchResponse" : [GTLRShoppingContent_DatafeedstatusesCustomBatchResponse class],
    @"content#datafeedstatusesListResponse" : [GTLRShoppingContent_DatafeedstatusesListResponse class],
    @"content#inventory" : [GTLRShoppingContent_Inventory class],
    @"content#inventoryCustomBatchResponse" : [GTLRShoppingContent_InventoryCustomBatchResponse class],
    @"content#inventoryCustomBatchResponseEntry" : [GTLRShoppingContent_InventoryCustomBatchResponseEntry class],
    @"content#inventorySetResponse" : [GTLRShoppingContent_InventorySetResponse class],
    @"content#order" : [GTLRShoppingContent_Order class],
    @"content#ordersAcknowledgeResponse" : [GTLRShoppingContent_OrdersAcknowledgeResponse class],
    @"content#ordersAdvanceTestOrderResponse" : [GTLRShoppingContent_OrdersAdvanceTestOrderResponse class],
    @"content#ordersCancelLineItemResponse" : [GTLRShoppingContent_OrdersCancelLineItemResponse class],
    @"content#ordersCancelResponse" : [GTLRShoppingContent_OrdersCancelResponse class],
    @"content#ordersCreateTestOrderResponse" : [GTLRShoppingContent_OrdersCreateTestOrderResponse class],
    @"content#ordersCustomBatchResponse" : [GTLRShoppingContent_OrdersCustomBatchResponse class],
    @"content#ordersCustomBatchResponseEntry" : [GTLRShoppingContent_OrdersCustomBatchResponseEntry class],
    @"content#ordersGetByMerchantOrderIdResponse" : [GTLRShoppingContent_OrdersGetByMerchantOrderIdResponse class],
    @"content#ordersGetTestOrderTemplateResponse" : [GTLRShoppingContent_OrdersGetTestOrderTemplateResponse class],
    @"content#ordersInStoreRefundLineItemResponse" : [GTLRShoppingContent_OrdersInStoreRefundLineItemResponse class],
    @"content#ordersListResponse" : [GTLRShoppingContent_OrdersListResponse class],
    @"content#ordersRefundResponse" : [GTLRShoppingContent_OrdersRefundResponse class],
    @"content#ordersRejectReturnLineItemResponse" : [GTLRShoppingContent_OrdersRejectReturnLineItemResponse class],
    @"content#ordersReturnLineItemResponse" : [GTLRShoppingContent_OrdersReturnLineItemResponse class],
    @"content#ordersReturnRefundLineItemResponse" : [GTLRShoppingContent_OrdersReturnRefundLineItemResponse class],
    @"content#ordersSetLineItemMetadataResponse" : [GTLRShoppingContent_OrdersSetLineItemMetadataResponse class],
    @"content#ordersShipLineItemsResponse" : [GTLRShoppingContent_OrdersShipLineItemsResponse class],
    @"content#ordersUpdateLineItemShippingDetailsResponse" : [GTLRShoppingContent_OrdersUpdateLineItemShippingDetailsResponse class],
    @"content#ordersUpdateMerchantOrderIdResponse" : [GTLRShoppingContent_OrdersUpdateMerchantOrderIdResponse class],
    @"content#ordersUpdateShipmentResponse" : [GTLRShoppingContent_OrdersUpdateShipmentResponse class],
    @"content#posCustomBatchResponse" : [GTLRShoppingContent_PosCustomBatchResponse class],
    @"content#posCustomBatchResponseEntry" : [GTLRShoppingContent_PosCustomBatchResponseEntry class],
    @"content#posInventory" : [GTLRShoppingContent_PosInventory class],
    @"content#posInventoryResponse" : [GTLRShoppingContent_PosInventoryResponse class],
    @"content#posListResponse" : [GTLRShoppingContent_PosListResponse class],
    @"content#posSale" : [GTLRShoppingContent_PosSale class],
    @"content#posSaleResponse" : [GTLRShoppingContent_PosSaleResponse class],
    @"content#posStore" : [GTLRShoppingContent_PosStore class],
    @"content#product" : [GTLRShoppingContent_Product class],
    @"content#productsCustomBatchResponse" : [GTLRShoppingContent_ProductsCustomBatchResponse class],
    @"content#productsCustomBatchResponseEntry" : [GTLRShoppingContent_ProductsCustomBatchResponseEntry class],
    @"content#productsListResponse" : [GTLRShoppingContent_ProductsListResponse class],
    @"content#productStatus" : [GTLRShoppingContent_ProductStatus class],
    @"content#productstatusesCustomBatchResponse" : [GTLRShoppingContent_ProductstatusesCustomBatchResponse class],
    @"content#productstatusesCustomBatchResponseEntry" : [GTLRShoppingContent_ProductstatusesCustomBatchResponseEntry class],
    @"content#productstatusesListResponse" : [GTLRShoppingContent_ProductstatusesListResponse class],
    @"content#shippingsettingsCustomBatchResponse" : [GTLRShoppingContent_ShippingsettingsCustomBatchResponse class],
    @"content#shippingsettingsCustomBatchResponseEntry" : [GTLRShoppingContent_ShippingsettingsCustomBatchResponseEntry class],
    @"content#shippingsettingsGetSupportedCarriersResponse" : [GTLRShoppingContent_ShippingsettingsGetSupportedCarriersResponse class],
    @"content#shippingsettingsGetSupportedHolidaysResponse" : [GTLRShoppingContent_ShippingsettingsGetSupportedHolidaysResponse class],
    @"content#shippingsettingsListResponse" : [GTLRShoppingContent_ShippingsettingsListResponse class],
    @"content#testOrder" : [GTLRShoppingContent_TestOrder class],
  };
}

@end
