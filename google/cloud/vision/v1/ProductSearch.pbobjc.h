// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/vision/v1/product_search.proto

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
@class GCVNProduct;
@class GCVNProductSearchResults_GroupedResult;
@class GCVNProductSearchResults_Result;
@class GPBTimestamp;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - GCVNProductSearchRoot

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
@interface GCVNProductSearchRoot : GPBRootObject
@end

#pragma mark - GCVNProductSearchParams

typedef GPB_ENUM(GCVNProductSearchParams_FieldNumber) {
  GCVNProductSearchParams_FieldNumber_ProductSet = 6,
  GCVNProductSearchParams_FieldNumber_ProductCategoriesArray = 7,
  GCVNProductSearchParams_FieldNumber_Filter = 8,
  GCVNProductSearchParams_FieldNumber_BoundingPoly = 9,
};

/**
 * Parameters for a product search request.
 **/
@interface GCVNProductSearchParams : GPBMessage

/**
 * The bounding polygon around the area of interest in the image.
 * Optional. If it is not specified, system discretion will be applied.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GCVNBoundingPoly *boundingPoly;
/** Test to see if @c boundingPoly has been set. */
@property(nonatomic, readwrite) BOOL hasBoundingPoly;

/**
 * The resource name of a [ProductSet][google.cloud.vision.v1.ProductSet] to be searched for similar images.
 *
 * Format is:
 * `projects/PROJECT_ID/locations/LOC_ID/productSets/PRODUCT_SET_ID`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *productSet;

/**
 * The list of product categories to search in. Currently, we only consider
 * the first category, and either "homegoods", "apparel", or "toys" should be
 * specified.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *productCategoriesArray;
/** The number of items in @c productCategoriesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger productCategoriesArray_Count;

/**
 * The filtering expression. This can be used to restrict search results based
 * on Product labels. We currently support an AND of OR of key-value
 * expressions, where each expression within an OR must have the same key.
 *
 * For example, "(color = red OR color = blue) AND brand = Google" is
 * acceptable, but not "(color = red OR brand = Google)" or "color: red".
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *filter;

@end

#pragma mark - GCVNProductSearchResults

typedef GPB_ENUM(GCVNProductSearchResults_FieldNumber) {
  GCVNProductSearchResults_FieldNumber_IndexTime = 2,
  GCVNProductSearchResults_FieldNumber_ResultsArray = 5,
  GCVNProductSearchResults_FieldNumber_ProductGroupedResultsArray = 6,
};

/**
 * Results for a product search request.
 **/
@interface GCVNProductSearchResults : GPBMessage

/**
 * Timestamp of the index which provided these results. Changes made after
 * this time are not reflected in the current results.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *indexTime;
/** Test to see if @c indexTime has been set. */
@property(nonatomic, readwrite) BOOL hasIndexTime;

/** List of results, one for each product match. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNProductSearchResults_Result*> *resultsArray;
/** The number of items in @c resultsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger resultsArray_Count;

/**
 * List of results grouped by products detected in the query image. Each entry
 * corresponds to one bounding polygon in the query image, and contains the
 * matching products specific to that region. There may be duplicate product
 * matches in the union of all the per-product results.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNProductSearchResults_GroupedResult*> *productGroupedResultsArray;
/** The number of items in @c productGroupedResultsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger productGroupedResultsArray_Count;

@end

#pragma mark - GCVNProductSearchResults_Result

typedef GPB_ENUM(GCVNProductSearchResults_Result_FieldNumber) {
  GCVNProductSearchResults_Result_FieldNumber_Product = 1,
  GCVNProductSearchResults_Result_FieldNumber_Score = 2,
  GCVNProductSearchResults_Result_FieldNumber_Image = 3,
};

/**
 * Information about a product.
 **/
@interface GCVNProductSearchResults_Result : GPBMessage

/** The Product. */
@property(nonatomic, readwrite, strong, null_resettable) GCVNProduct *product;
/** Test to see if @c product has been set. */
@property(nonatomic, readwrite) BOOL hasProduct;

/**
 * A confidence level on the match, ranging from 0 (no confidence) to
 * 1 (full confidence).
 **/
@property(nonatomic, readwrite) float score;

/**
 * The resource name of the image from the product that is the closest match
 * to the query.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *image;

@end

#pragma mark - GCVNProductSearchResults_GroupedResult

typedef GPB_ENUM(GCVNProductSearchResults_GroupedResult_FieldNumber) {
  GCVNProductSearchResults_GroupedResult_FieldNumber_BoundingPoly = 1,
  GCVNProductSearchResults_GroupedResult_FieldNumber_ResultsArray = 2,
};

/**
 * Information about the products similar to a single product in a query
 * image.
 **/
@interface GCVNProductSearchResults_GroupedResult : GPBMessage

/** The bounding polygon around the product detected in the query image. */
@property(nonatomic, readwrite, strong, null_resettable) GCVNBoundingPoly *boundingPoly;
/** Test to see if @c boundingPoly has been set. */
@property(nonatomic, readwrite) BOOL hasBoundingPoly;

/** List of results, one for each product match. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNProductSearchResults_Result*> *resultsArray;
/** The number of items in @c resultsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger resultsArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)