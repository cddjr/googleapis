// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/vision/v1/geometry.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

#import <googleapis/Geometry.pbobjc.h>
#import <googleapis/Annotations.pbobjc.h>
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - GCVNGeometryRoot

@implementation GCVNGeometryRoot

+ (GPBExtensionRegistry*)extensionRegistry {
  // This is called by +initialize so there is no need to worry
  // about thread safety and initialization of registry.
  static GPBExtensionRegistry* registry = nil;
  if (!registry) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    registry = [[GPBExtensionRegistry alloc] init];
    // Merge in the imports (direct or indirect) that defined extensions.
    [registry addExtensions:[AnnotationsRoot extensionRegistry]];
  }
  return registry;
}

@end

#pragma mark - GCVNGeometryRoot_FileDescriptor

static GPBFileDescriptor *GCVNGeometryRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"google.cloud.vision.v1"
                                                 objcPrefix:@"GCVN"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - GCVNVertex

@implementation GCVNVertex

@dynamic x;
@dynamic y;

typedef struct GCVNVertex__storage_ {
  uint32_t _has_storage_[1];
  int32_t x;
  int32_t y;
} GCVNVertex__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "x",
        .dataTypeSpecific.className = NULL,
        .number = GCVNVertex_FieldNumber_X,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(GCVNVertex__storage_, x),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "y",
        .dataTypeSpecific.className = NULL,
        .number = GCVNVertex_FieldNumber_Y,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(GCVNVertex__storage_, y),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[GCVNVertex class]
                                     rootClass:[GCVNGeometryRoot class]
                                          file:GCVNGeometryRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(GCVNVertex__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - GCVNNormalizedVertex

@implementation GCVNNormalizedVertex

@dynamic x;
@dynamic y;

typedef struct GCVNNormalizedVertex__storage_ {
  uint32_t _has_storage_[1];
  float x;
  float y;
} GCVNNormalizedVertex__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "x",
        .dataTypeSpecific.className = NULL,
        .number = GCVNNormalizedVertex_FieldNumber_X,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(GCVNNormalizedVertex__storage_, x),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "y",
        .dataTypeSpecific.className = NULL,
        .number = GCVNNormalizedVertex_FieldNumber_Y,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(GCVNNormalizedVertex__storage_, y),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[GCVNNormalizedVertex class]
                                     rootClass:[GCVNGeometryRoot class]
                                          file:GCVNGeometryRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(GCVNNormalizedVertex__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - GCVNBoundingPoly

@implementation GCVNBoundingPoly

@dynamic verticesArray, verticesArray_Count;
@dynamic normalizedVerticesArray, normalizedVerticesArray_Count;

typedef struct GCVNBoundingPoly__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *verticesArray;
  NSMutableArray *normalizedVerticesArray;
} GCVNBoundingPoly__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "verticesArray",
        .dataTypeSpecific.className = GPBStringifySymbol(GCVNVertex),
        .number = GCVNBoundingPoly_FieldNumber_VerticesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(GCVNBoundingPoly__storage_, verticesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "normalizedVerticesArray",
        .dataTypeSpecific.className = GPBStringifySymbol(GCVNNormalizedVertex),
        .number = GCVNBoundingPoly_FieldNumber_NormalizedVerticesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(GCVNBoundingPoly__storage_, normalizedVerticesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[GCVNBoundingPoly class]
                                     rootClass:[GCVNGeometryRoot class]
                                          file:GCVNGeometryRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(GCVNBoundingPoly__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - GCVNPosition

@implementation GCVNPosition

@dynamic x;
@dynamic y;
@dynamic z;

typedef struct GCVNPosition__storage_ {
  uint32_t _has_storage_[1];
  float x;
  float y;
  float z;
} GCVNPosition__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "x",
        .dataTypeSpecific.className = NULL,
        .number = GCVNPosition_FieldNumber_X,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(GCVNPosition__storage_, x),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "y",
        .dataTypeSpecific.className = NULL,
        .number = GCVNPosition_FieldNumber_Y,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(GCVNPosition__storage_, y),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "z",
        .dataTypeSpecific.className = NULL,
        .number = GCVNPosition_FieldNumber_Z,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(GCVNPosition__storage_, z),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[GCVNPosition class]
                                     rootClass:[GCVNGeometryRoot class]
                                          file:GCVNGeometryRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(GCVNPosition__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
