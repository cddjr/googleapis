#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <googleapis/ProductSearchService.pbrpc.h>
#import <googleapis/ProductSearchService.pbobjc.h>
#import <ProtoRPC/ProtoRPC.h>
#import <RxLibrary/GRXWriter+Immediate.h>

#import <googleapis/Annotations.pbobjc.h>
#import <googleapis/Geometry.pbobjc.h>
#import <googleapis/Operations.pbobjc.h>
#if defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS) && GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
#import <Protobuf/Empty.pbobjc.h>
#else
#import "google/protobuf/Empty.pbobjc.h"
#endif
#if defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS) && GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
#import <Protobuf/FieldMask.pbobjc.h>
#else
#import "google/protobuf/FieldMask.pbobjc.h"
#endif
#if defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS) && GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
#import <Protobuf/Timestamp.pbobjc.h>
#else
#import "google/protobuf/Timestamp.pbobjc.h"
#endif
#import <googleapis/Status.pbobjc.h>

@implementation GCVNProductSearch

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

// Designated initializer
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [super initWithHost:host
                 packageName:@"google.cloud.vision.v1"
                 serviceName:@"ProductSearch"
                 callOptions:callOptions];
}

- (instancetype)initWithHost:(NSString *)host {
  return [super initWithHost:host
                 packageName:@"google.cloud.vision.v1"
                 serviceName:@"ProductSearch"];
}

#pragma clang diagnostic pop

// Override superclass initializer to disallow different package and service names.
- (instancetype)initWithHost:(NSString *)host
                 packageName:(NSString *)packageName
                 serviceName:(NSString *)serviceName {
  return [self initWithHost:host];
}

- (instancetype)initWithHost:(NSString *)host
                 packageName:(NSString *)packageName
                 serviceName:(NSString *)serviceName
                 callOptions:(GRPCCallOptions *)callOptions {
  return [self initWithHost:host callOptions:callOptions];
}

#pragma mark - Class Methods

+ (instancetype)serviceWithHost:(NSString *)host {
  return [[self alloc] initWithHost:host];
}

+ (instancetype)serviceWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [[self alloc] initWithHost:host callOptions:callOptions];
}

#pragma mark - Method Implementations

#pragma mark CreateProductSet(CreateProductSetRequest) returns (ProductSet)

// Deprecated methods.
/**
 * Creates and returns a new ProductSet resource.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if display_name is missing, or is longer than
 * 4096 characters.
 */
- (void)createProductSetWithRequest:(GCVNCreateProductSetRequest *)request handler:(void(^)(GCVNProductSet *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToCreateProductSetWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Creates and returns a new ProductSet resource.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if display_name is missing, or is longer than
 * 4096 characters.
 */
- (GRPCProtoCall *)RPCToCreateProductSetWithRequest:(GCVNCreateProductSetRequest *)request handler:(void(^)(GCVNProductSet *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"CreateProductSet"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNProductSet class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Creates and returns a new ProductSet resource.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if display_name is missing, or is longer than
 * 4096 characters.
 */
- (GRPCUnaryProtoCall *)createProductSetWithMessage:(GCVNCreateProductSetRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"CreateProductSet"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNProductSet class]];
}

#pragma mark ListProductSets(ListProductSetsRequest) returns (ListProductSetsResponse)

// Deprecated methods.
/**
 * Lists ProductSets in an unspecified order.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if page_size is greater than 100, or less
 * than 1.
 */
- (void)listProductSetsWithRequest:(GCVNListProductSetsRequest *)request handler:(void(^)(GCVNListProductSetsResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToListProductSetsWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Lists ProductSets in an unspecified order.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if page_size is greater than 100, or less
 * than 1.
 */
- (GRPCProtoCall *)RPCToListProductSetsWithRequest:(GCVNListProductSetsRequest *)request handler:(void(^)(GCVNListProductSetsResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"ListProductSets"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNListProductSetsResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Lists ProductSets in an unspecified order.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if page_size is greater than 100, or less
 * than 1.
 */
- (GRPCUnaryProtoCall *)listProductSetsWithMessage:(GCVNListProductSetsRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"ListProductSets"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNListProductSetsResponse class]];
}

#pragma mark GetProductSet(GetProductSetRequest) returns (ProductSet)

// Deprecated methods.
/**
 * Gets information associated with a ProductSet.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the ProductSet does not exist.
 */
- (void)getProductSetWithRequest:(GCVNGetProductSetRequest *)request handler:(void(^)(GCVNProductSet *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetProductSetWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Gets information associated with a ProductSet.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the ProductSet does not exist.
 */
- (GRPCProtoCall *)RPCToGetProductSetWithRequest:(GCVNGetProductSetRequest *)request handler:(void(^)(GCVNProductSet *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetProductSet"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNProductSet class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Gets information associated with a ProductSet.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the ProductSet does not exist.
 */
- (GRPCUnaryProtoCall *)getProductSetWithMessage:(GCVNGetProductSetRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetProductSet"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNProductSet class]];
}

#pragma mark UpdateProductSet(UpdateProductSetRequest) returns (ProductSet)

// Deprecated methods.
/**
 * Makes changes to a ProductSet resource.
 * Only display_name can be updated currently.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the ProductSet does not exist.
 * * Returns INVALID_ARGUMENT if display_name is present in update_mask but
 * missing from the request or longer than 4096 characters.
 */
- (void)updateProductSetWithRequest:(GCVNUpdateProductSetRequest *)request handler:(void(^)(GCVNProductSet *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToUpdateProductSetWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Makes changes to a ProductSet resource.
 * Only display_name can be updated currently.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the ProductSet does not exist.
 * * Returns INVALID_ARGUMENT if display_name is present in update_mask but
 * missing from the request or longer than 4096 characters.
 */
- (GRPCProtoCall *)RPCToUpdateProductSetWithRequest:(GCVNUpdateProductSetRequest *)request handler:(void(^)(GCVNProductSet *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"UpdateProductSet"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNProductSet class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Makes changes to a ProductSet resource.
 * Only display_name can be updated currently.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the ProductSet does not exist.
 * * Returns INVALID_ARGUMENT if display_name is present in update_mask but
 * missing from the request or longer than 4096 characters.
 */
- (GRPCUnaryProtoCall *)updateProductSetWithMessage:(GCVNUpdateProductSetRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"UpdateProductSet"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNProductSet class]];
}

#pragma mark DeleteProductSet(DeleteProductSetRequest) returns (Empty)

// Deprecated methods.
/**
 * Permanently deletes a ProductSet. Products and ReferenceImages in the
 * ProductSet are not deleted.
 * 
 * The actual image files are not deleted from Google Cloud Storage.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the ProductSet does not exist.
 */
- (void)deleteProductSetWithRequest:(GCVNDeleteProductSetRequest *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToDeleteProductSetWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Permanently deletes a ProductSet. Products and ReferenceImages in the
 * ProductSet are not deleted.
 * 
 * The actual image files are not deleted from Google Cloud Storage.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the ProductSet does not exist.
 */
- (GRPCProtoCall *)RPCToDeleteProductSetWithRequest:(GCVNDeleteProductSetRequest *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"DeleteProductSet"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Permanently deletes a ProductSet. Products and ReferenceImages in the
 * ProductSet are not deleted.
 * 
 * The actual image files are not deleted from Google Cloud Storage.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the ProductSet does not exist.
 */
- (GRPCUnaryProtoCall *)deleteProductSetWithMessage:(GCVNDeleteProductSetRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"DeleteProductSet"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark CreateProduct(CreateProductRequest) returns (Product)

// Deprecated methods.
/**
 * Creates and returns a new product resource.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if display_name is missing or longer than 4096
 * characters.
 * * Returns INVALID_ARGUMENT if description is longer than 4096 characters.
 * * Returns INVALID_ARGUMENT if product_category is missing or invalid.
 */
- (void)createProductWithRequest:(GCVNCreateProductRequest *)request handler:(void(^)(GCVNProduct *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToCreateProductWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Creates and returns a new product resource.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if display_name is missing or longer than 4096
 * characters.
 * * Returns INVALID_ARGUMENT if description is longer than 4096 characters.
 * * Returns INVALID_ARGUMENT if product_category is missing or invalid.
 */
- (GRPCProtoCall *)RPCToCreateProductWithRequest:(GCVNCreateProductRequest *)request handler:(void(^)(GCVNProduct *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"CreateProduct"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNProduct class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Creates and returns a new product resource.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if display_name is missing or longer than 4096
 * characters.
 * * Returns INVALID_ARGUMENT if description is longer than 4096 characters.
 * * Returns INVALID_ARGUMENT if product_category is missing or invalid.
 */
- (GRPCUnaryProtoCall *)createProductWithMessage:(GCVNCreateProductRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"CreateProduct"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNProduct class]];
}

#pragma mark ListProducts(ListProductsRequest) returns (ListProductsResponse)

// Deprecated methods.
/**
 * Lists products in an unspecified order.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if page_size is greater than 100 or less than 1.
 */
- (void)listProductsWithRequest:(GCVNListProductsRequest *)request handler:(void(^)(GCVNListProductsResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToListProductsWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Lists products in an unspecified order.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if page_size is greater than 100 or less than 1.
 */
- (GRPCProtoCall *)RPCToListProductsWithRequest:(GCVNListProductsRequest *)request handler:(void(^)(GCVNListProductsResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"ListProducts"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNListProductsResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Lists products in an unspecified order.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if page_size is greater than 100 or less than 1.
 */
- (GRPCUnaryProtoCall *)listProductsWithMessage:(GCVNListProductsRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"ListProducts"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNListProductsResponse class]];
}

#pragma mark GetProduct(GetProductRequest) returns (Product)

// Deprecated methods.
/**
 * Gets information associated with a Product.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the Product does not exist.
 */
- (void)getProductWithRequest:(GCVNGetProductRequest *)request handler:(void(^)(GCVNProduct *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetProductWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Gets information associated with a Product.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the Product does not exist.
 */
- (GRPCProtoCall *)RPCToGetProductWithRequest:(GCVNGetProductRequest *)request handler:(void(^)(GCVNProduct *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetProduct"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNProduct class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Gets information associated with a Product.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the Product does not exist.
 */
- (GRPCUnaryProtoCall *)getProductWithMessage:(GCVNGetProductRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetProduct"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNProduct class]];
}

#pragma mark UpdateProduct(UpdateProductRequest) returns (Product)

// Deprecated methods.
/**
 * Makes changes to a Product resource.
 * Only the `display_name`, `description`, and `labels` fields can be updated
 * right now.
 * 
 * If labels are updated, the change will not be reflected in queries until
 * the next index time.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the Product does not exist.
 * * Returns INVALID_ARGUMENT if display_name is present in update_mask but is
 * missing from the request or longer than 4096 characters.
 * * Returns INVALID_ARGUMENT if description is present in update_mask but is
 * longer than 4096 characters.
 * * Returns INVALID_ARGUMENT if product_category is present in update_mask.
 */
- (void)updateProductWithRequest:(GCVNUpdateProductRequest *)request handler:(void(^)(GCVNProduct *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToUpdateProductWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Makes changes to a Product resource.
 * Only the `display_name`, `description`, and `labels` fields can be updated
 * right now.
 * 
 * If labels are updated, the change will not be reflected in queries until
 * the next index time.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the Product does not exist.
 * * Returns INVALID_ARGUMENT if display_name is present in update_mask but is
 * missing from the request or longer than 4096 characters.
 * * Returns INVALID_ARGUMENT if description is present in update_mask but is
 * longer than 4096 characters.
 * * Returns INVALID_ARGUMENT if product_category is present in update_mask.
 */
- (GRPCProtoCall *)RPCToUpdateProductWithRequest:(GCVNUpdateProductRequest *)request handler:(void(^)(GCVNProduct *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"UpdateProduct"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNProduct class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Makes changes to a Product resource.
 * Only the `display_name`, `description`, and `labels` fields can be updated
 * right now.
 * 
 * If labels are updated, the change will not be reflected in queries until
 * the next index time.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the Product does not exist.
 * * Returns INVALID_ARGUMENT if display_name is present in update_mask but is
 * missing from the request or longer than 4096 characters.
 * * Returns INVALID_ARGUMENT if description is present in update_mask but is
 * longer than 4096 characters.
 * * Returns INVALID_ARGUMENT if product_category is present in update_mask.
 */
- (GRPCUnaryProtoCall *)updateProductWithMessage:(GCVNUpdateProductRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"UpdateProduct"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNProduct class]];
}

#pragma mark DeleteProduct(DeleteProductRequest) returns (Empty)

// Deprecated methods.
/**
 * Permanently deletes a product and its reference images.
 * 
 * Metadata of the product and all its images will be deleted right away, but
 * search queries against ProductSets containing the product may still work
 * until all related caches are refreshed.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the product does not exist.
 */
- (void)deleteProductWithRequest:(GCVNDeleteProductRequest *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToDeleteProductWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Permanently deletes a product and its reference images.
 * 
 * Metadata of the product and all its images will be deleted right away, but
 * search queries against ProductSets containing the product may still work
 * until all related caches are refreshed.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the product does not exist.
 */
- (GRPCProtoCall *)RPCToDeleteProductWithRequest:(GCVNDeleteProductRequest *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"DeleteProduct"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Permanently deletes a product and its reference images.
 * 
 * Metadata of the product and all its images will be deleted right away, but
 * search queries against ProductSets containing the product may still work
 * until all related caches are refreshed.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the product does not exist.
 */
- (GRPCUnaryProtoCall *)deleteProductWithMessage:(GCVNDeleteProductRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"DeleteProduct"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark CreateReferenceImage(CreateReferenceImageRequest) returns (ReferenceImage)

// Deprecated methods.
/**
 * Creates and returns a new ReferenceImage resource.
 * 
 * The `bounding_poly` field is optional. If `bounding_poly` is not specified,
 * the system will try to detect regions of interest in the image that are
 * compatible with the product_category on the parent product. If it is
 * specified, detection is ALWAYS skipped. The system converts polygons into
 * non-rotated rectangles.
 * 
 * Note that the pipeline will resize the image if the image resolution is too
 * large to process (above 50MP).
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if the image_uri is missing or longer than 4096
 * characters.
 * * Returns INVALID_ARGUMENT if the product does not exist.
 * * Returns INVALID_ARGUMENT if bounding_poly is not provided, and nothing
 * compatible with the parent product's product_category is detected.
 * * Returns INVALID_ARGUMENT if bounding_poly contains more than 10 polygons.
 */
- (void)createReferenceImageWithRequest:(GCVNCreateReferenceImageRequest *)request handler:(void(^)(GCVNReferenceImage *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToCreateReferenceImageWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Creates and returns a new ReferenceImage resource.
 * 
 * The `bounding_poly` field is optional. If `bounding_poly` is not specified,
 * the system will try to detect regions of interest in the image that are
 * compatible with the product_category on the parent product. If it is
 * specified, detection is ALWAYS skipped. The system converts polygons into
 * non-rotated rectangles.
 * 
 * Note that the pipeline will resize the image if the image resolution is too
 * large to process (above 50MP).
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if the image_uri is missing or longer than 4096
 * characters.
 * * Returns INVALID_ARGUMENT if the product does not exist.
 * * Returns INVALID_ARGUMENT if bounding_poly is not provided, and nothing
 * compatible with the parent product's product_category is detected.
 * * Returns INVALID_ARGUMENT if bounding_poly contains more than 10 polygons.
 */
- (GRPCProtoCall *)RPCToCreateReferenceImageWithRequest:(GCVNCreateReferenceImageRequest *)request handler:(void(^)(GCVNReferenceImage *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"CreateReferenceImage"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNReferenceImage class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Creates and returns a new ReferenceImage resource.
 * 
 * The `bounding_poly` field is optional. If `bounding_poly` is not specified,
 * the system will try to detect regions of interest in the image that are
 * compatible with the product_category on the parent product. If it is
 * specified, detection is ALWAYS skipped. The system converts polygons into
 * non-rotated rectangles.
 * 
 * Note that the pipeline will resize the image if the image resolution is too
 * large to process (above 50MP).
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if the image_uri is missing or longer than 4096
 * characters.
 * * Returns INVALID_ARGUMENT if the product does not exist.
 * * Returns INVALID_ARGUMENT if bounding_poly is not provided, and nothing
 * compatible with the parent product's product_category is detected.
 * * Returns INVALID_ARGUMENT if bounding_poly contains more than 10 polygons.
 */
- (GRPCUnaryProtoCall *)createReferenceImageWithMessage:(GCVNCreateReferenceImageRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"CreateReferenceImage"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNReferenceImage class]];
}

#pragma mark DeleteReferenceImage(DeleteReferenceImageRequest) returns (Empty)

// Deprecated methods.
/**
 * Permanently deletes a reference image.
 * 
 * The image metadata will be deleted right away, but search queries
 * against ProductSets containing the image may still work until all related
 * caches are refreshed.
 * 
 * The actual image files are not deleted from Google Cloud Storage.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the reference image does not exist.
 */
- (void)deleteReferenceImageWithRequest:(GCVNDeleteReferenceImageRequest *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToDeleteReferenceImageWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Permanently deletes a reference image.
 * 
 * The image metadata will be deleted right away, but search queries
 * against ProductSets containing the image may still work until all related
 * caches are refreshed.
 * 
 * The actual image files are not deleted from Google Cloud Storage.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the reference image does not exist.
 */
- (GRPCProtoCall *)RPCToDeleteReferenceImageWithRequest:(GCVNDeleteReferenceImageRequest *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"DeleteReferenceImage"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Permanently deletes a reference image.
 * 
 * The image metadata will be deleted right away, but search queries
 * against ProductSets containing the image may still work until all related
 * caches are refreshed.
 * 
 * The actual image files are not deleted from Google Cloud Storage.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the reference image does not exist.
 */
- (GRPCUnaryProtoCall *)deleteReferenceImageWithMessage:(GCVNDeleteReferenceImageRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"DeleteReferenceImage"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark ListReferenceImages(ListReferenceImagesRequest) returns (ListReferenceImagesResponse)

// Deprecated methods.
/**
 * Lists reference images.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the parent product does not exist.
 * * Returns INVALID_ARGUMENT if the page_size is greater than 100, or less
 * than 1.
 */
- (void)listReferenceImagesWithRequest:(GCVNListReferenceImagesRequest *)request handler:(void(^)(GCVNListReferenceImagesResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToListReferenceImagesWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Lists reference images.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the parent product does not exist.
 * * Returns INVALID_ARGUMENT if the page_size is greater than 100, or less
 * than 1.
 */
- (GRPCProtoCall *)RPCToListReferenceImagesWithRequest:(GCVNListReferenceImagesRequest *)request handler:(void(^)(GCVNListReferenceImagesResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"ListReferenceImages"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNListReferenceImagesResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Lists reference images.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the parent product does not exist.
 * * Returns INVALID_ARGUMENT if the page_size is greater than 100, or less
 * than 1.
 */
- (GRPCUnaryProtoCall *)listReferenceImagesWithMessage:(GCVNListReferenceImagesRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"ListReferenceImages"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNListReferenceImagesResponse class]];
}

#pragma mark GetReferenceImage(GetReferenceImageRequest) returns (ReferenceImage)

// Deprecated methods.
/**
 * Gets information associated with a ReferenceImage.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the specified image does not exist.
 */
- (void)getReferenceImageWithRequest:(GCVNGetReferenceImageRequest *)request handler:(void(^)(GCVNReferenceImage *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetReferenceImageWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Gets information associated with a ReferenceImage.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the specified image does not exist.
 */
- (GRPCProtoCall *)RPCToGetReferenceImageWithRequest:(GCVNGetReferenceImageRequest *)request handler:(void(^)(GCVNReferenceImage *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetReferenceImage"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNReferenceImage class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Gets information associated with a ReferenceImage.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the specified image does not exist.
 */
- (GRPCUnaryProtoCall *)getReferenceImageWithMessage:(GCVNGetReferenceImageRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetReferenceImage"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNReferenceImage class]];
}

#pragma mark AddProductToProductSet(AddProductToProductSetRequest) returns (Empty)

// Deprecated methods.
/**
 * Adds a Product to the specified ProductSet. If the Product is already
 * present, no change is made.
 * 
 * One Product can be added to at most 100 ProductSets.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the Product or the ProductSet doesn't exist.
 */
- (void)addProductToProductSetWithRequest:(GCVNAddProductToProductSetRequest *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToAddProductToProductSetWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Adds a Product to the specified ProductSet. If the Product is already
 * present, no change is made.
 * 
 * One Product can be added to at most 100 ProductSets.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the Product or the ProductSet doesn't exist.
 */
- (GRPCProtoCall *)RPCToAddProductToProductSetWithRequest:(GCVNAddProductToProductSetRequest *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"AddProductToProductSet"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Adds a Product to the specified ProductSet. If the Product is already
 * present, no change is made.
 * 
 * One Product can be added to at most 100 ProductSets.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND if the Product or the ProductSet doesn't exist.
 */
- (GRPCUnaryProtoCall *)addProductToProductSetWithMessage:(GCVNAddProductToProductSetRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"AddProductToProductSet"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark RemoveProductFromProductSet(RemoveProductFromProductSetRequest) returns (Empty)

// Deprecated methods.
/**
 * Removes a Product from the specified ProductSet.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND If the Product is not found under the ProductSet.
 */
- (void)removeProductFromProductSetWithRequest:(GCVNRemoveProductFromProductSetRequest *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToRemoveProductFromProductSetWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Removes a Product from the specified ProductSet.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND If the Product is not found under the ProductSet.
 */
- (GRPCProtoCall *)RPCToRemoveProductFromProductSetWithRequest:(GCVNRemoveProductFromProductSetRequest *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"RemoveProductFromProductSet"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Removes a Product from the specified ProductSet.
 * 
 * Possible errors:
 * 
 * * Returns NOT_FOUND If the Product is not found under the ProductSet.
 */
- (GRPCUnaryProtoCall *)removeProductFromProductSetWithMessage:(GCVNRemoveProductFromProductSetRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"RemoveProductFromProductSet"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark ListProductsInProductSet(ListProductsInProductSetRequest) returns (ListProductsInProductSetResponse)

// Deprecated methods.
/**
 * Lists the Products in a ProductSet, in an unspecified order. If the
 * ProductSet does not exist, the products field of the response will be
 * empty.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if page_size is greater than 100 or less than 1.
 */
- (void)listProductsInProductSetWithRequest:(GCVNListProductsInProductSetRequest *)request handler:(void(^)(GCVNListProductsInProductSetResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToListProductsInProductSetWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Lists the Products in a ProductSet, in an unspecified order. If the
 * ProductSet does not exist, the products field of the response will be
 * empty.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if page_size is greater than 100 or less than 1.
 */
- (GRPCProtoCall *)RPCToListProductsInProductSetWithRequest:(GCVNListProductsInProductSetRequest *)request handler:(void(^)(GCVNListProductsInProductSetResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"ListProductsInProductSet"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNListProductsInProductSetResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Lists the Products in a ProductSet, in an unspecified order. If the
 * ProductSet does not exist, the products field of the response will be
 * empty.
 * 
 * Possible errors:
 * 
 * * Returns INVALID_ARGUMENT if page_size is greater than 100 or less than 1.
 */
- (GRPCUnaryProtoCall *)listProductsInProductSetWithMessage:(GCVNListProductsInProductSetRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"ListProductsInProductSet"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNListProductsInProductSetResponse class]];
}

#pragma mark ImportProductSets(ImportProductSetsRequest) returns (Operation)

// Deprecated methods.
/**
 * Asynchronous API that imports a list of reference images to specified
 * product sets based on a list of image information.
 * 
 * The [google.longrunning.Operation][google.longrunning.Operation] API can be used to keep track of the
 * progress and results of the request.
 * `Operation.metadata` contains `BatchOperationMetadata`. (progress)
 * `Operation.response` contains `ImportProductSetsResponse`. (results)
 * 
 * The input source of this method is a csv file on Google Cloud Storage.
 * For the format of the csv file please see
 * [ImportProductSetsGcsSource.csv_file_uri][google.cloud.vision.v1.ImportProductSetsGcsSource.csv_file_uri].
 */
- (void)importProductSetsWithRequest:(GCVNImportProductSetsRequest *)request handler:(void(^)(Operation *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToImportProductSetsWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Asynchronous API that imports a list of reference images to specified
 * product sets based on a list of image information.
 * 
 * The [google.longrunning.Operation][google.longrunning.Operation] API can be used to keep track of the
 * progress and results of the request.
 * `Operation.metadata` contains `BatchOperationMetadata`. (progress)
 * `Operation.response` contains `ImportProductSetsResponse`. (results)
 * 
 * The input source of this method is a csv file on Google Cloud Storage.
 * For the format of the csv file please see
 * [ImportProductSetsGcsSource.csv_file_uri][google.cloud.vision.v1.ImportProductSetsGcsSource.csv_file_uri].
 */
- (GRPCProtoCall *)RPCToImportProductSetsWithRequest:(GCVNImportProductSetsRequest *)request handler:(void(^)(Operation *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"ImportProductSets"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[Operation class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Asynchronous API that imports a list of reference images to specified
 * product sets based on a list of image information.
 * 
 * The [google.longrunning.Operation][google.longrunning.Operation] API can be used to keep track of the
 * progress and results of the request.
 * `Operation.metadata` contains `BatchOperationMetadata`. (progress)
 * `Operation.response` contains `ImportProductSetsResponse`. (results)
 * 
 * The input source of this method is a csv file on Google Cloud Storage.
 * For the format of the csv file please see
 * [ImportProductSetsGcsSource.csv_file_uri][google.cloud.vision.v1.ImportProductSetsGcsSource.csv_file_uri].
 */
- (GRPCUnaryProtoCall *)importProductSetsWithMessage:(GCVNImportProductSetsRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"ImportProductSets"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[Operation class]];
}

@end
#endif
