#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
#import <googleapis/ImageAnnotator.pbobjc.h>
#endif

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <ProtoRPC/ProtoService.h>
#import <ProtoRPC/ProtoRPC.h>
#import <RxLibrary/GRXWriteable.h>
#import <RxLibrary/GRXWriter.h>
#endif

@class GCVNAsyncBatchAnnotateFilesRequest;
@class GCVNBatchAnnotateImagesRequest;
@class GCVNBatchAnnotateImagesResponse;
@class Operation;

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
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
#endif

@class GRPCProtoCall;
@class GRPCUnaryProtoCall;
@class GRPCStreamingProtoCall;
@class GRPCCallOptions;
@protocol GRPCProtoResponseHandler;


NS_ASSUME_NONNULL_BEGIN

@protocol GCVNImageAnnotator2 <NSObject>

#pragma mark BatchAnnotateImages(BatchAnnotateImagesRequest) returns (BatchAnnotateImagesResponse)

/**
 * Run image detection and annotation for a batch of images.
 */
- (GRPCUnaryProtoCall *)batchAnnotateImagesWithMessage:(GCVNBatchAnnotateImagesRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark AsyncBatchAnnotateFiles(AsyncBatchAnnotateFilesRequest) returns (Operation)

/**
 * Run asynchronous image detection and annotation for a list of generic
 * files, such as PDF files, which may contain multiple pages and multiple
 * images per page. Progress and results can be retrieved through the
 * `google.longrunning.Operations` interface.
 * `Operation.metadata` contains `OperationMetadata` (metadata).
 * `Operation.response` contains `AsyncBatchAnnotateFilesResponse` (results).
 */
- (GRPCUnaryProtoCall *)asyncBatchAnnotateFilesWithMessage:(GCVNAsyncBatchAnnotateFilesRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

@end

@protocol GCVNImageAnnotator <NSObject>

#pragma mark BatchAnnotateImages(BatchAnnotateImagesRequest) returns (BatchAnnotateImagesResponse)

/**
 * Run image detection and annotation for a batch of images.
 */
- (void)batchAnnotateImagesWithRequest:(GCVNBatchAnnotateImagesRequest *)request handler:(void(^)(GCVNBatchAnnotateImagesResponse *_Nullable response, NSError *_Nullable error))handler;

/**
 * Run image detection and annotation for a batch of images.
 */
- (GRPCProtoCall *)RPCToBatchAnnotateImagesWithRequest:(GCVNBatchAnnotateImagesRequest *)request handler:(void(^)(GCVNBatchAnnotateImagesResponse *_Nullable response, NSError *_Nullable error))handler;


#pragma mark AsyncBatchAnnotateFiles(AsyncBatchAnnotateFilesRequest) returns (Operation)

/**
 * Run asynchronous image detection and annotation for a list of generic
 * files, such as PDF files, which may contain multiple pages and multiple
 * images per page. Progress and results can be retrieved through the
 * `google.longrunning.Operations` interface.
 * `Operation.metadata` contains `OperationMetadata` (metadata).
 * `Operation.response` contains `AsyncBatchAnnotateFilesResponse` (results).
 */
- (void)asyncBatchAnnotateFilesWithRequest:(GCVNAsyncBatchAnnotateFilesRequest *)request handler:(void(^)(Operation *_Nullable response, NSError *_Nullable error))handler;

/**
 * Run asynchronous image detection and annotation for a list of generic
 * files, such as PDF files, which may contain multiple pages and multiple
 * images per page. Progress and results can be retrieved through the
 * `google.longrunning.Operations` interface.
 * `Operation.metadata` contains `OperationMetadata` (metadata).
 * `Operation.response` contains `AsyncBatchAnnotateFilesResponse` (results).
 */
- (GRPCProtoCall *)RPCToAsyncBatchAnnotateFilesWithRequest:(GCVNAsyncBatchAnnotateFilesRequest *)request handler:(void(^)(Operation *_Nullable response, NSError *_Nullable error))handler;


@end


#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
/**
 * Basic service implementation, over gRPC, that only does
 * marshalling and parsing.
 */
@interface GCVNImageAnnotator : GRPCProtoService<GCVNImageAnnotator, GCVNImageAnnotator2>
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithHost:(NSString *)host;
+ (instancetype)serviceWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions;
+ (instancetype)serviceWithHost:(NSString *)host;
@end
#endif

NS_ASSUME_NONNULL_END

