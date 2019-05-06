#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import "google/cloud/vision/v1/ImageAnnotator.pbrpc.h"
#import <googleapis/ImageAnnotator.pbobjc.h>
#import <ProtoRPC/ProtoRPC.h>
#import <RxLibrary/GRXWriter+Immediate.h>

#import <googleapis/Annotations.pbobjc.h>
#import <googleapis/Geometry.pbobjc.h>
#import <googleapis/ProductSearch.pbobjc.h>
#import <googleapis/TextAnnotation.pbobjc.h>
#import <googleapis/WebDetection.pbobjc.h>
#import <googleapis/Operations.pbobjc.h>
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
#import <googleapis/Color.pbobjc.h>
#import <googleapis/Latlng.pbobjc.h>

@implementation GCVNImageAnnotator

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

// Designated initializer
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [super initWithHost:host
                 packageName:@"google.cloud.vision.v1"
                 serviceName:@"ImageAnnotator"
                 callOptions:callOptions];
}

- (instancetype)initWithHost:(NSString *)host {
  return [super initWithHost:host
                 packageName:@"google.cloud.vision.v1"
                 serviceName:@"ImageAnnotator"];
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

#pragma mark BatchAnnotateImages(BatchAnnotateImagesRequest) returns (BatchAnnotateImagesResponse)

// Deprecated methods.
/**
 * Run image detection and annotation for a batch of images.
 */
- (void)batchAnnotateImagesWithRequest:(GCVNBatchAnnotateImagesRequest *)request handler:(void(^)(GCVNBatchAnnotateImagesResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToBatchAnnotateImagesWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Run image detection and annotation for a batch of images.
 */
- (GRPCProtoCall *)RPCToBatchAnnotateImagesWithRequest:(GCVNBatchAnnotateImagesRequest *)request handler:(void(^)(GCVNBatchAnnotateImagesResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"BatchAnnotateImages"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GCVNBatchAnnotateImagesResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Run image detection and annotation for a batch of images.
 */
- (GRPCUnaryProtoCall *)batchAnnotateImagesWithMessage:(GCVNBatchAnnotateImagesRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"BatchAnnotateImages"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GCVNBatchAnnotateImagesResponse class]];
}

#pragma mark AsyncBatchAnnotateFiles(AsyncBatchAnnotateFilesRequest) returns (Operation)

// Deprecated methods.
/**
 * Run asynchronous image detection and annotation for a list of generic
 * files, such as PDF files, which may contain multiple pages and multiple
 * images per page. Progress and results can be retrieved through the
 * `google.longrunning.Operations` interface.
 * `Operation.metadata` contains `OperationMetadata` (metadata).
 * `Operation.response` contains `AsyncBatchAnnotateFilesResponse` (results).
 */
- (void)asyncBatchAnnotateFilesWithRequest:(GCVNAsyncBatchAnnotateFilesRequest *)request handler:(void(^)(Operation *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToAsyncBatchAnnotateFilesWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * Run asynchronous image detection and annotation for a list of generic
 * files, such as PDF files, which may contain multiple pages and multiple
 * images per page. Progress and results can be retrieved through the
 * `google.longrunning.Operations` interface.
 * `Operation.metadata` contains `OperationMetadata` (metadata).
 * `Operation.response` contains `AsyncBatchAnnotateFilesResponse` (results).
 */
- (GRPCProtoCall *)RPCToAsyncBatchAnnotateFilesWithRequest:(GCVNAsyncBatchAnnotateFilesRequest *)request handler:(void(^)(Operation *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"AsyncBatchAnnotateFiles"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[Operation class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * Run asynchronous image detection and annotation for a list of generic
 * files, such as PDF files, which may contain multiple pages and multiple
 * images per page. Progress and results can be retrieved through the
 * `google.longrunning.Operations` interface.
 * `Operation.metadata` contains `OperationMetadata` (metadata).
 * `Operation.response` contains `AsyncBatchAnnotateFilesResponse` (results).
 */
- (GRPCUnaryProtoCall *)asyncBatchAnnotateFilesWithMessage:(GCVNAsyncBatchAnnotateFilesRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"AsyncBatchAnnotateFiles"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[Operation class]];
}

@end
#endif
