// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/vision/v1/product_search_service.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class GCVNBoundingPoly;
@class GCVNImportProductSetsGcsSource;
@class GCVNImportProductSetsInputConfig;
@class GCVNProduct;
@class GCVNProductSet;
@class GCVNProduct_KeyValue;
@class GCVNReferenceImage;
@class GPBFieldMask;
@class GPBTimestamp;
@class Status;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum GCVNBatchOperationMetadata_State

/** Enumerates the possible states that the batch request can be in. */
typedef GPB_ENUM(GCVNBatchOperationMetadata_State) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  GCVNBatchOperationMetadata_State_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /** Invalid. */
  GCVNBatchOperationMetadata_State_StateUnspecified = 0,

  /** Request is actively being processed. */
  GCVNBatchOperationMetadata_State_Processing = 1,

  /**
   * The request is done and at least one item has been successfully
   * processed.
   **/
  GCVNBatchOperationMetadata_State_Successful = 2,

  /** The request is done and no item has been successfully processed. */
  GCVNBatchOperationMetadata_State_Failed = 3,

  /**
   * The request is done after the longrunning.Operations.CancelOperation has
   * been called by the user.  Any records that were processed before the
   * cancel command are output as specified in the request.
   **/
  GCVNBatchOperationMetadata_State_Cancelled = 4,
};

GPBEnumDescriptor *GCVNBatchOperationMetadata_State_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL GCVNBatchOperationMetadata_State_IsValidValue(int32_t value);

#pragma mark - GCVNProductSearchServiceRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface GCVNProductSearchServiceRoot : GPBRootObject
@end

#pragma mark - GCVNProduct

typedef GPB_ENUM(GCVNProduct_FieldNumber) {
  GCVNProduct_FieldNumber_Name = 1,
  GCVNProduct_FieldNumber_DisplayName = 2,
  GCVNProduct_FieldNumber_Description_p = 3,
  GCVNProduct_FieldNumber_ProductCategory = 4,
  GCVNProduct_FieldNumber_ProductLabelsArray = 5,
};

/**
 * A Product contains ReferenceImages.
 **/
@interface GCVNProduct : GPBMessage

/**
 * The resource name of the product.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/products/PRODUCT_ID`.
 *
 * This field is ignored when creating a product.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/**
 * The user-provided name for this Product. Must not be empty. Must be at most
 * 4096 characters long.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *displayName;

/**
 * User-provided metadata to be stored with this product. Must be at most 4096
 * characters long.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *description_p;

/**
 * The category for the product identified by the reference image. This should
 * be either "homegoods", "apparel", or "toys".
 *
 * This field is immutable.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *productCategory;

/**
 * Key-value pairs that can be attached to a product. At query time,
 * constraints can be specified based on the product_labels.
 *
 * Note that integer values can be provided as strings, e.g. "1199". Only
 * strings with integer values can match a range-based restriction which is
 * to be supported soon.
 *
 * Multiple values can be assigned to the same key. One product may have up to
 * 100 product_labels.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNProduct_KeyValue*> *productLabelsArray;
/** The number of items in @c productLabelsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger productLabelsArray_Count;

@end

#pragma mark - GCVNProduct_KeyValue

typedef GPB_ENUM(GCVNProduct_KeyValue_FieldNumber) {
  GCVNProduct_KeyValue_FieldNumber_Key = 1,
  GCVNProduct_KeyValue_FieldNumber_Value = 2,
};

/**
 * A product label represented as a key-value pair.
 **/
@interface GCVNProduct_KeyValue : GPBMessage

/**
 * The key of the label attached to the product. Cannot be empty and cannot
 * exceed 128 bytes.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *key;

/**
 * The value of the label attached to the product. Cannot be empty and
 * cannot exceed 128 bytes.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *value;

@end

#pragma mark - GCVNProductSet

typedef GPB_ENUM(GCVNProductSet_FieldNumber) {
  GCVNProductSet_FieldNumber_Name = 1,
  GCVNProductSet_FieldNumber_DisplayName = 2,
  GCVNProductSet_FieldNumber_IndexTime = 3,
  GCVNProductSet_FieldNumber_IndexError = 4,
};

/**
 * A ProductSet contains Products. A ProductSet can contain a maximum of 1
 * million reference images. If the limit is exceeded, periodic indexing will
 * fail.
 **/
@interface GCVNProductSet : GPBMessage

/**
 * The resource name of the ProductSet.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/productSets/PRODUCT_SET_ID`.
 *
 * This field is ignored when creating a ProductSet.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/**
 * The user-provided name for this ProductSet. Must not be empty. Must be at
 * most 4096 characters long.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *displayName;

/**
 * Output only. The time at which this ProductSet was last indexed. Query
 * results will reflect all updates before this time. If this ProductSet has
 * never been indexed, this field is 0.
 *
 * This field is ignored when creating a ProductSet.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *indexTime;
/** Test to see if @c indexTime has been set. */
@property(nonatomic, readwrite) BOOL hasIndexTime;

/**
 * Output only. If there was an error with indexing the product set, the field
 * is populated.
 *
 * This field is ignored when creating a ProductSet.
 **/
@property(nonatomic, readwrite, strong, null_resettable) Status *indexError;
/** Test to see if @c indexError has been set. */
@property(nonatomic, readwrite) BOOL hasIndexError;

@end

#pragma mark - GCVNReferenceImage

typedef GPB_ENUM(GCVNReferenceImage_FieldNumber) {
  GCVNReferenceImage_FieldNumber_Name = 1,
  GCVNReferenceImage_FieldNumber_Uri = 2,
  GCVNReferenceImage_FieldNumber_BoundingPolysArray = 3,
};

/**
 * A `ReferenceImage` represents a product image and its associated metadata,
 * such as bounding boxes.
 **/
@interface GCVNReferenceImage : GPBMessage

/**
 * The resource name of the reference image.
 *
 * Format is:
 *
 * `projects/PROJECT_ID/locations/LOC_ID/products/PRODUCT_ID/referenceImages/IMAGE_ID`.
 *
 * This field is ignored when creating a reference image.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/**
 * The Google Cloud Storage URI of the reference image.
 *
 * The URI must start with `gs://`.
 *
 * Required.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *uri;

/**
 * Bounding polygons around the areas of interest in the reference image.
 * Optional. If this field is empty, the system will try to detect regions of
 * interest. At most 10 bounding polygons will be used.
 *
 * The provided shape is converted into a non-rotated rectangle. Once
 * converted, the small edge of the rectangle must be greater than or equal
 * to 300 pixels. The aspect ratio must be 1:4 or less (i.e. 1:3 is ok; 1:5
 * is not).
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNBoundingPoly*> *boundingPolysArray;
/** The number of items in @c boundingPolysArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger boundingPolysArray_Count;

@end

#pragma mark - GCVNCreateProductRequest

typedef GPB_ENUM(GCVNCreateProductRequest_FieldNumber) {
  GCVNCreateProductRequest_FieldNumber_Parent = 1,
  GCVNCreateProductRequest_FieldNumber_Product = 2,
  GCVNCreateProductRequest_FieldNumber_ProductId = 3,
};

/**
 * Request message for the `CreateProduct` method.
 **/
@interface GCVNCreateProductRequest : GPBMessage

/**
 * The project in which the Product should be created.
 *
 * Format is
 * `projects/PROJECT_ID/locations/LOC_ID`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *parent;

/** The product to create. */
@property(nonatomic, readwrite, strong, null_resettable) GCVNProduct *product;
/** Test to see if @c product has been set. */
@property(nonatomic, readwrite) BOOL hasProduct;

/**
 * A user-supplied resource id for this Product. If set, the server will
 * attempt to use this value as the resource id. If it is already in use, an
 * error is returned with code ALREADY_EXISTS. Must be at most 128 characters
 * long. It cannot contain the character `/`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *productId;

@end

#pragma mark - GCVNListProductsRequest

typedef GPB_ENUM(GCVNListProductsRequest_FieldNumber) {
  GCVNListProductsRequest_FieldNumber_Parent = 1,
  GCVNListProductsRequest_FieldNumber_PageSize = 2,
  GCVNListProductsRequest_FieldNumber_PageToken = 3,
};

/**
 * Request message for the `ListProducts` method.
 **/
@interface GCVNListProductsRequest : GPBMessage

/**
 * The project OR ProductSet from which Products should be listed.
 *
 * Format:
 * `projects/PROJECT_ID/locations/LOC_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *parent;

/** The maximum number of items to return. Default 10, maximum 100. */
@property(nonatomic, readwrite) int32_t pageSize;

/** The next_page_token returned from a previous List request, if any. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *pageToken;

@end

#pragma mark - GCVNListProductsResponse

typedef GPB_ENUM(GCVNListProductsResponse_FieldNumber) {
  GCVNListProductsResponse_FieldNumber_ProductsArray = 1,
  GCVNListProductsResponse_FieldNumber_NextPageToken = 2,
};

/**
 * Response message for the `ListProducts` method.
 **/
@interface GCVNListProductsResponse : GPBMessage

/** List of products. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNProduct*> *productsArray;
/** The number of items in @c productsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger productsArray_Count;

/**
 * Token to retrieve the next page of results, or empty if there are no more
 * results in the list.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *nextPageToken;

@end

#pragma mark - GCVNGetProductRequest

typedef GPB_ENUM(GCVNGetProductRequest_FieldNumber) {
  GCVNGetProductRequest_FieldNumber_Name = 1,
};

/**
 * Request message for the `GetProduct` method.
 **/
@interface GCVNGetProductRequest : GPBMessage

/**
 * Resource name of the Product to get.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/products/PRODUCT_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@end

#pragma mark - GCVNUpdateProductRequest

typedef GPB_ENUM(GCVNUpdateProductRequest_FieldNumber) {
  GCVNUpdateProductRequest_FieldNumber_Product = 1,
  GCVNUpdateProductRequest_FieldNumber_UpdateMask = 2,
};

/**
 * Request message for the `UpdateProduct` method.
 **/
@interface GCVNUpdateProductRequest : GPBMessage

/**
 * The Product resource which replaces the one on the server.
 * product.name is immutable.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GCVNProduct *product;
/** Test to see if @c product has been set. */
@property(nonatomic, readwrite) BOOL hasProduct;

/**
 * The [FieldMask][google.protobuf.FieldMask] that specifies which fields
 * to update.
 * If update_mask isn't specified, all mutable fields are to be updated.
 * Valid mask paths include `product_labels`, `display_name`, and
 * `description`.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GPBFieldMask *updateMask;
/** Test to see if @c updateMask has been set. */
@property(nonatomic, readwrite) BOOL hasUpdateMask;

@end

#pragma mark - GCVNDeleteProductRequest

typedef GPB_ENUM(GCVNDeleteProductRequest_FieldNumber) {
  GCVNDeleteProductRequest_FieldNumber_Name = 1,
};

/**
 * Request message for the `DeleteProduct` method.
 **/
@interface GCVNDeleteProductRequest : GPBMessage

/**
 * Resource name of product to delete.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/products/PRODUCT_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@end

#pragma mark - GCVNCreateProductSetRequest

typedef GPB_ENUM(GCVNCreateProductSetRequest_FieldNumber) {
  GCVNCreateProductSetRequest_FieldNumber_Parent = 1,
  GCVNCreateProductSetRequest_FieldNumber_ProductSet = 2,
  GCVNCreateProductSetRequest_FieldNumber_ProductSetId = 3,
};

/**
 * Request message for the `CreateProductSet` method.
 **/
@interface GCVNCreateProductSetRequest : GPBMessage

/**
 * The project in which the ProductSet should be created.
 *
 * Format is `projects/PROJECT_ID/locations/LOC_ID`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *parent;

/** The ProductSet to create. */
@property(nonatomic, readwrite, strong, null_resettable) GCVNProductSet *productSet;
/** Test to see if @c productSet has been set. */
@property(nonatomic, readwrite) BOOL hasProductSet;

/**
 * A user-supplied resource id for this ProductSet. If set, the server will
 * attempt to use this value as the resource id. If it is already in use, an
 * error is returned with code ALREADY_EXISTS. Must be at most 128 characters
 * long. It cannot contain the character `/`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *productSetId;

@end

#pragma mark - GCVNListProductSetsRequest

typedef GPB_ENUM(GCVNListProductSetsRequest_FieldNumber) {
  GCVNListProductSetsRequest_FieldNumber_Parent = 1,
  GCVNListProductSetsRequest_FieldNumber_PageSize = 2,
  GCVNListProductSetsRequest_FieldNumber_PageToken = 3,
};

/**
 * Request message for the `ListProductSets` method.
 **/
@interface GCVNListProductSetsRequest : GPBMessage

/**
 * The project from which ProductSets should be listed.
 *
 * Format is `projects/PROJECT_ID/locations/LOC_ID`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *parent;

/** The maximum number of items to return. Default 10, maximum 100. */
@property(nonatomic, readwrite) int32_t pageSize;

/** The next_page_token returned from a previous List request, if any. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *pageToken;

@end

#pragma mark - GCVNListProductSetsResponse

typedef GPB_ENUM(GCVNListProductSetsResponse_FieldNumber) {
  GCVNListProductSetsResponse_FieldNumber_ProductSetsArray = 1,
  GCVNListProductSetsResponse_FieldNumber_NextPageToken = 2,
};

/**
 * Response message for the `ListProductSets` method.
 **/
@interface GCVNListProductSetsResponse : GPBMessage

/** List of ProductSets. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNProductSet*> *productSetsArray;
/** The number of items in @c productSetsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger productSetsArray_Count;

/**
 * Token to retrieve the next page of results, or empty if there are no more
 * results in the list.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *nextPageToken;

@end

#pragma mark - GCVNGetProductSetRequest

typedef GPB_ENUM(GCVNGetProductSetRequest_FieldNumber) {
  GCVNGetProductSetRequest_FieldNumber_Name = 1,
};

/**
 * Request message for the `GetProductSet` method.
 **/
@interface GCVNGetProductSetRequest : GPBMessage

/**
 * Resource name of the ProductSet to get.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOG_ID/productSets/PRODUCT_SET_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@end

#pragma mark - GCVNUpdateProductSetRequest

typedef GPB_ENUM(GCVNUpdateProductSetRequest_FieldNumber) {
  GCVNUpdateProductSetRequest_FieldNumber_ProductSet = 1,
  GCVNUpdateProductSetRequest_FieldNumber_UpdateMask = 2,
};

/**
 * Request message for the `UpdateProductSet` method.
 **/
@interface GCVNUpdateProductSetRequest : GPBMessage

/** The ProductSet resource which replaces the one on the server. */
@property(nonatomic, readwrite, strong, null_resettable) GCVNProductSet *productSet;
/** Test to see if @c productSet has been set. */
@property(nonatomic, readwrite) BOOL hasProductSet;

/**
 * The [FieldMask][google.protobuf.FieldMask] that specifies which fields to
 * update.
 * If update_mask isn't specified, all mutable fields are to be updated.
 * Valid mask path is `display_name`.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GPBFieldMask *updateMask;
/** Test to see if @c updateMask has been set. */
@property(nonatomic, readwrite) BOOL hasUpdateMask;

@end

#pragma mark - GCVNDeleteProductSetRequest

typedef GPB_ENUM(GCVNDeleteProductSetRequest_FieldNumber) {
  GCVNDeleteProductSetRequest_FieldNumber_Name = 1,
};

/**
 * Request message for the `DeleteProductSet` method.
 **/
@interface GCVNDeleteProductSetRequest : GPBMessage

/**
 * Resource name of the ProductSet to delete.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/productSets/PRODUCT_SET_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@end

#pragma mark - GCVNCreateReferenceImageRequest

typedef GPB_ENUM(GCVNCreateReferenceImageRequest_FieldNumber) {
  GCVNCreateReferenceImageRequest_FieldNumber_Parent = 1,
  GCVNCreateReferenceImageRequest_FieldNumber_ReferenceImage = 2,
  GCVNCreateReferenceImageRequest_FieldNumber_ReferenceImageId = 3,
};

/**
 * Request message for the `CreateReferenceImage` method.
 **/
@interface GCVNCreateReferenceImageRequest : GPBMessage

/**
 * Resource name of the product in which to create the reference image.
 *
 * Format is
 * `projects/PROJECT_ID/locations/LOC_ID/products/PRODUCT_ID`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *parent;

/**
 * The reference image to create.
 * If an image ID is specified, it is ignored.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GCVNReferenceImage *referenceImage;
/** Test to see if @c referenceImage has been set. */
@property(nonatomic, readwrite) BOOL hasReferenceImage;

/**
 * A user-supplied resource id for the ReferenceImage to be added. If set,
 * the server will attempt to use this value as the resource id. If it is
 * already in use, an error is returned with code ALREADY_EXISTS. Must be at
 * most 128 characters long. It cannot contain the character `/`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *referenceImageId;

@end

#pragma mark - GCVNListReferenceImagesRequest

typedef GPB_ENUM(GCVNListReferenceImagesRequest_FieldNumber) {
  GCVNListReferenceImagesRequest_FieldNumber_Parent = 1,
  GCVNListReferenceImagesRequest_FieldNumber_PageSize = 2,
  GCVNListReferenceImagesRequest_FieldNumber_PageToken = 3,
};

/**
 * Request message for the `ListReferenceImages` method.
 **/
@interface GCVNListReferenceImagesRequest : GPBMessage

/**
 * Resource name of the product containing the reference images.
 *
 * Format is
 * `projects/PROJECT_ID/locations/LOC_ID/products/PRODUCT_ID`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *parent;

/** The maximum number of items to return. Default 10, maximum 100. */
@property(nonatomic, readwrite) int32_t pageSize;

/**
 * A token identifying a page of results to be returned. This is the value
 * of `nextPageToken` returned in a previous reference image list request.
 *
 * Defaults to the first page if not specified.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *pageToken;

@end

#pragma mark - GCVNListReferenceImagesResponse

typedef GPB_ENUM(GCVNListReferenceImagesResponse_FieldNumber) {
  GCVNListReferenceImagesResponse_FieldNumber_ReferenceImagesArray = 1,
  GCVNListReferenceImagesResponse_FieldNumber_PageSize = 2,
  GCVNListReferenceImagesResponse_FieldNumber_NextPageToken = 3,
};

/**
 * Response message for the `ListReferenceImages` method.
 **/
@interface GCVNListReferenceImagesResponse : GPBMessage

/** The list of reference images. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNReferenceImage*> *referenceImagesArray;
/** The number of items in @c referenceImagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger referenceImagesArray_Count;

/** The maximum number of items to return. Default 10, maximum 100. */
@property(nonatomic, readwrite) int32_t pageSize;

/** The next_page_token returned from a previous List request, if any. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *nextPageToken;

@end

#pragma mark - GCVNGetReferenceImageRequest

typedef GPB_ENUM(GCVNGetReferenceImageRequest_FieldNumber) {
  GCVNGetReferenceImageRequest_FieldNumber_Name = 1,
};

/**
 * Request message for the `GetReferenceImage` method.
 **/
@interface GCVNGetReferenceImageRequest : GPBMessage

/**
 * The resource name of the ReferenceImage to get.
 *
 * Format is:
 *
 * `projects/PROJECT_ID/locations/LOC_ID/products/PRODUCT_ID/referenceImages/IMAGE_ID`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@end

#pragma mark - GCVNDeleteReferenceImageRequest

typedef GPB_ENUM(GCVNDeleteReferenceImageRequest_FieldNumber) {
  GCVNDeleteReferenceImageRequest_FieldNumber_Name = 1,
};

/**
 * Request message for the `DeleteReferenceImage` method.
 **/
@interface GCVNDeleteReferenceImageRequest : GPBMessage

/**
 * The resource name of the reference image to delete.
 *
 * Format is:
 *
 * `projects/PROJECT_ID/locations/LOC_ID/products/PRODUCT_ID/referenceImages/IMAGE_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@end

#pragma mark - GCVNAddProductToProductSetRequest

typedef GPB_ENUM(GCVNAddProductToProductSetRequest_FieldNumber) {
  GCVNAddProductToProductSetRequest_FieldNumber_Name = 1,
  GCVNAddProductToProductSetRequest_FieldNumber_Product = 2,
};

/**
 * Request message for the `AddProductToProductSet` method.
 **/
@interface GCVNAddProductToProductSetRequest : GPBMessage

/**
 * The resource name for the ProductSet to modify.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/productSets/PRODUCT_SET_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/**
 * The resource name for the Product to be added to this ProductSet.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/products/PRODUCT_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *product;

@end

#pragma mark - GCVNRemoveProductFromProductSetRequest

typedef GPB_ENUM(GCVNRemoveProductFromProductSetRequest_FieldNumber) {
  GCVNRemoveProductFromProductSetRequest_FieldNumber_Name = 1,
  GCVNRemoveProductFromProductSetRequest_FieldNumber_Product = 2,
};

/**
 * Request message for the `RemoveProductFromProductSet` method.
 **/
@interface GCVNRemoveProductFromProductSetRequest : GPBMessage

/**
 * The resource name for the ProductSet to modify.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/productSets/PRODUCT_SET_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/**
 * The resource name for the Product to be removed from this ProductSet.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/products/PRODUCT_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *product;

@end

#pragma mark - GCVNListProductsInProductSetRequest

typedef GPB_ENUM(GCVNListProductsInProductSetRequest_FieldNumber) {
  GCVNListProductsInProductSetRequest_FieldNumber_Name = 1,
  GCVNListProductsInProductSetRequest_FieldNumber_PageSize = 2,
  GCVNListProductsInProductSetRequest_FieldNumber_PageToken = 3,
};

/**
 * Request message for the `ListProductsInProductSet` method.
 **/
@interface GCVNListProductsInProductSetRequest : GPBMessage

/**
 * The ProductSet resource for which to retrieve Products.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/productSets/PRODUCT_SET_ID`
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/** The maximum number of items to return. Default 10, maximum 100. */
@property(nonatomic, readwrite) int32_t pageSize;

/** The next_page_token returned from a previous List request, if any. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *pageToken;

@end

#pragma mark - GCVNListProductsInProductSetResponse

typedef GPB_ENUM(GCVNListProductsInProductSetResponse_FieldNumber) {
  GCVNListProductsInProductSetResponse_FieldNumber_ProductsArray = 1,
  GCVNListProductsInProductSetResponse_FieldNumber_NextPageToken = 2,
};

/**
 * Response message for the `ListProductsInProductSet` method.
 **/
@interface GCVNListProductsInProductSetResponse : GPBMessage

/** The list of Products. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNProduct*> *productsArray;
/** The number of items in @c productsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger productsArray_Count;

/**
 * Token to retrieve the next page of results, or empty if there are no more
 * results in the list.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *nextPageToken;

@end

#pragma mark - GCVNImportProductSetsGcsSource

typedef GPB_ENUM(GCVNImportProductSetsGcsSource_FieldNumber) {
  GCVNImportProductSetsGcsSource_FieldNumber_CsvFileUri = 1,
};

/**
 * The Google Cloud Storage location for a csv file which preserves a list of
 * ImportProductSetRequests in each line.
 **/
@interface GCVNImportProductSetsGcsSource : GPBMessage

/**
 * The Google Cloud Storage URI of the input csv file.
 *
 * The URI must start with `gs://`.
 *
 * The format of the input csv file should be one image per line.
 * In each line, there are 8 columns.
 *
 * 1.  image-uri
 * 2.  image-id
 * 3.  product-set-id
 * 4.  product-id
 * 5.  product-category
 * 6.  product-display-name
 * 7.  labels
 * 8.  bounding-poly
 *
 * The `image-uri`, `product-set-id`, `product-id`, and `product-category`
 * columns are required. All other columns are optional.
 *
 * If the `ProductSet` or `Product` specified by the `product-set-id` and
 * `product-id` values does not exist, then the system will create a new
 * `ProductSet` or `Product` for the image. In this case, the
 * `product-display-name` column refers to
 * [display_name][google.cloud.vision.v1.Product.display_name], the
 * `product-category` column refers to
 * [product_category][google.cloud.vision.v1.Product.product_category], and the
 * `labels` column refers to [product_labels][google.cloud.vision.v1.Product.product_labels].
 *
 * The `image-id` column is optional but must be unique if provided. If it is
 * empty, the system will automatically assign a unique id to the image.
 *
 * The `product-display-name` column is optional. If it is empty, the system
 * sets the [display_name][google.cloud.vision.v1.Product.display_name] field for the product to a
 * space (" "). You can update the `display_name` later by using the API.
 *
 * If a `Product` with the specified `product-id` already exists, then the
 * system ignores the `product-display-name`, `product-category`, and `labels`
 * columns.
 *
 * The `labels` column (optional) is a line containing a list of
 * comma-separated key-value pairs, in the following format:
 *
 *     "key_1=value_1,key_2=value_2,...,key_n=value_n"
 *
 * The `bounding-poly` column (optional) identifies one region of
 * interest from the image in the same manner as `CreateReferenceImage`. If
 * you do not specify the `bounding-poly` column, then the system will try to
 * detect regions of interest automatically.
 *
 * At most one `bounding-poly` column is allowed per line. If the image
 * contains multiple regions of interest, add a line to the CSV file that
 * includes the same product information, and the `bounding-poly` values for
 * each region of interest.
 *
 * The `bounding-poly` column must contain an even number of comma-separated
 * numbers, in the format "p1_x,p1_y,p2_x,p2_y,...,pn_x,pn_y". Use
 * non-negative integers for absolute bounding polygons, and float values
 * in [0, 1] for normalized bounding polygons.
 *
 * The system will resize the image if the image resolution is too
 * large to process (larger than 20MP).
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *csvFileUri;

@end

#pragma mark - GCVNImportProductSetsInputConfig

typedef GPB_ENUM(GCVNImportProductSetsInputConfig_FieldNumber) {
  GCVNImportProductSetsInputConfig_FieldNumber_GcsSource = 1,
};

typedef GPB_ENUM(GCVNImportProductSetsInputConfig_Source_OneOfCase) {
  GCVNImportProductSetsInputConfig_Source_OneOfCase_GPBUnsetOneOfCase = 0,
  GCVNImportProductSetsInputConfig_Source_OneOfCase_GcsSource = 1,
};

/**
 * The input content for the `ImportProductSets` method.
 **/
@interface GCVNImportProductSetsInputConfig : GPBMessage

/** The source of the input. */
@property(nonatomic, readonly) GCVNImportProductSetsInputConfig_Source_OneOfCase sourceOneOfCase;

/**
 * The Google Cloud Storage location for a csv file which preserves a list
 * of ImportProductSetRequests in each line.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GCVNImportProductSetsGcsSource *gcsSource;

@end

/**
 * Clears whatever value was set for the oneof 'source'.
 **/
void GCVNImportProductSetsInputConfig_ClearSourceOneOfCase(GCVNImportProductSetsInputConfig *message);

#pragma mark - GCVNImportProductSetsRequest

typedef GPB_ENUM(GCVNImportProductSetsRequest_FieldNumber) {
  GCVNImportProductSetsRequest_FieldNumber_Parent = 1,
  GCVNImportProductSetsRequest_FieldNumber_InputConfig = 2,
};

/**
 * Request message for the `ImportProductSets` method.
 **/
@interface GCVNImportProductSetsRequest : GPBMessage

/**
 * The project in which the ProductSets should be imported.
 *
 * Format is `projects/PROJECT_ID/locations/LOC_ID`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *parent;

/** The input content for the list of requests. */
@property(nonatomic, readwrite, strong, null_resettable) GCVNImportProductSetsInputConfig *inputConfig;
/** Test to see if @c inputConfig has been set. */
@property(nonatomic, readwrite) BOOL hasInputConfig;

@end

#pragma mark - GCVNImportProductSetsResponse

typedef GPB_ENUM(GCVNImportProductSetsResponse_FieldNumber) {
  GCVNImportProductSetsResponse_FieldNumber_ReferenceImagesArray = 1,
  GCVNImportProductSetsResponse_FieldNumber_StatusesArray = 2,
};

/**
 * Response message for the `ImportProductSets` method.
 *
 * This message is returned by the
 * [google.longrunning.Operations.GetOperation][google.longrunning.Operations.GetOperation] method in the returned
 * [google.longrunning.Operation.response][google.longrunning.Operation.response] field.
 **/
@interface GCVNImportProductSetsResponse : GPBMessage

/** The list of reference_images that are imported successfully. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNReferenceImage*> *referenceImagesArray;
/** The number of items in @c referenceImagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger referenceImagesArray_Count;

/**
 * The rpc status for each ImportProductSet request, including both successes
 * and errors.
 *
 * The number of statuses here matches the number of lines in the csv file,
 * and statuses[i] stores the success or failure status of processing the i-th
 * line of the csv, starting from line 0.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Status*> *statusesArray;
/** The number of items in @c statusesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger statusesArray_Count;

@end

#pragma mark - GCVNBatchOperationMetadata

typedef GPB_ENUM(GCVNBatchOperationMetadata_FieldNumber) {
  GCVNBatchOperationMetadata_FieldNumber_State = 1,
  GCVNBatchOperationMetadata_FieldNumber_SubmitTime = 2,
  GCVNBatchOperationMetadata_FieldNumber_EndTime = 3,
};

/**
 * Metadata for the batch operations such as the current state.
 *
 * This is included in the `metadata` field of the `Operation` returned by the
 * `GetOperation` call of the `google::longrunning::Operations` service.
 **/
@interface GCVNBatchOperationMetadata : GPBMessage

/** The current state of the batch operation. */
@property(nonatomic, readwrite) GCVNBatchOperationMetadata_State state;

/** The time when the batch request was submitted to the server. */
@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *submitTime;
/** Test to see if @c submitTime has been set. */
@property(nonatomic, readwrite) BOOL hasSubmitTime;

/**
 * The time when the batch request is finished and
 * [google.longrunning.Operation.done][google.longrunning.Operation.done] is set to true.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *endTime;
/** Test to see if @c endTime has been set. */
@property(nonatomic, readwrite) BOOL hasEndTime;

@end

/**
 * Fetches the raw value of a @c GCVNBatchOperationMetadata's @c state property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GCVNBatchOperationMetadata_State_RawValue(GCVNBatchOperationMetadata *message);
/**
 * Sets the raw value of an @c GCVNBatchOperationMetadata's @c state property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGCVNBatchOperationMetadata_State_RawValue(GCVNBatchOperationMetadata *message, int32_t value);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
