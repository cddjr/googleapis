// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/vision/v1/geometry.proto

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

@class GCVNNormalizedVertex;
@class GCVNVertex;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - GCVNGeometryRoot

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
@interface GCVNGeometryRoot : GPBRootObject
@end

#pragma mark - GCVNVertex

typedef GPB_ENUM(GCVNVertex_FieldNumber) {
  GCVNVertex_FieldNumber_X = 1,
  GCVNVertex_FieldNumber_Y = 2,
};

/**
 * A vertex represents a 2D point in the image.
 * NOTE: the vertex coordinates are in the same scale as the original image.
 **/
@interface GCVNVertex : GPBMessage

/** X coordinate. */
@property(nonatomic, readwrite) int32_t x;

/** Y coordinate. */
@property(nonatomic, readwrite) int32_t y;

@end

#pragma mark - GCVNNormalizedVertex

typedef GPB_ENUM(GCVNNormalizedVertex_FieldNumber) {
  GCVNNormalizedVertex_FieldNumber_X = 1,
  GCVNNormalizedVertex_FieldNumber_Y = 2,
};

/**
 * A vertex represents a 2D point in the image.
 * NOTE: the normalized vertex coordinates are relative to the original image
 * and range from 0 to 1.
 **/
@interface GCVNNormalizedVertex : GPBMessage

/** X coordinate. */
@property(nonatomic, readwrite) float x;

/** Y coordinate. */
@property(nonatomic, readwrite) float y;

@end

#pragma mark - GCVNBoundingPoly

typedef GPB_ENUM(GCVNBoundingPoly_FieldNumber) {
  GCVNBoundingPoly_FieldNumber_VerticesArray = 1,
  GCVNBoundingPoly_FieldNumber_NormalizedVerticesArray = 2,
};

/**
 * A bounding polygon for the detected image annotation.
 **/
@interface GCVNBoundingPoly : GPBMessage

/** The bounding polygon vertices. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNVertex*> *verticesArray;
/** The number of items in @c verticesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger verticesArray_Count;

/** The bounding polygon normalized vertices. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNNormalizedVertex*> *normalizedVerticesArray;
/** The number of items in @c normalizedVerticesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger normalizedVerticesArray_Count;

@end

#pragma mark - GCVNPosition

typedef GPB_ENUM(GCVNPosition_FieldNumber) {
  GCVNPosition_FieldNumber_X = 1,
  GCVNPosition_FieldNumber_Y = 2,
  GCVNPosition_FieldNumber_Z = 3,
};

/**
 * A 3D position in the image, used primarily for Face detection landmarks.
 * A valid Position must have both x and y coordinates.
 * The position coordinates are in the same scale as the original image.
 **/
@interface GCVNPosition : GPBMessage

/** X coordinate. */
@property(nonatomic, readwrite) float x;

/** Y coordinate. */
@property(nonatomic, readwrite) float y;

/** Z coordinate (or depth). */
@property(nonatomic, readwrite) float z;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
