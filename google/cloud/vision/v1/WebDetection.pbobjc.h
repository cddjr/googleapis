// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/vision/v1/web_detection.proto

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

@class GCVNWebDetection_WebEntity;
@class GCVNWebDetection_WebImage;
@class GCVNWebDetection_WebLabel;
@class GCVNWebDetection_WebPage;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - GCVNWebDetectionRoot

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
@interface GCVNWebDetectionRoot : GPBRootObject
@end

#pragma mark - GCVNWebDetection

typedef GPB_ENUM(GCVNWebDetection_FieldNumber) {
  GCVNWebDetection_FieldNumber_WebEntitiesArray = 1,
  GCVNWebDetection_FieldNumber_FullMatchingImagesArray = 2,
  GCVNWebDetection_FieldNumber_PartialMatchingImagesArray = 3,
  GCVNWebDetection_FieldNumber_PagesWithMatchingImagesArray = 4,
  GCVNWebDetection_FieldNumber_VisuallySimilarImagesArray = 6,
  GCVNWebDetection_FieldNumber_BestGuessLabelsArray = 8,
};

/**
 * Relevant information for the image from the Internet.
 **/
@interface GCVNWebDetection : GPBMessage

/** Deduced entities from similar images on the Internet. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNWebDetection_WebEntity*> *webEntitiesArray;
/** The number of items in @c webEntitiesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger webEntitiesArray_Count;

/**
 * Fully matching images from the Internet.
 * Can include resized copies of the query image.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNWebDetection_WebImage*> *fullMatchingImagesArray;
/** The number of items in @c fullMatchingImagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger fullMatchingImagesArray_Count;

/**
 * Partial matching images from the Internet.
 * Those images are similar enough to share some key-point features. For
 * example an original image will likely have partial matching for its crops.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNWebDetection_WebImage*> *partialMatchingImagesArray;
/** The number of items in @c partialMatchingImagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger partialMatchingImagesArray_Count;

/** Web pages containing the matching images from the Internet. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNWebDetection_WebPage*> *pagesWithMatchingImagesArray;
/** The number of items in @c pagesWithMatchingImagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger pagesWithMatchingImagesArray_Count;

/** The visually similar image results. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNWebDetection_WebImage*> *visuallySimilarImagesArray;
/** The number of items in @c visuallySimilarImagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger visuallySimilarImagesArray_Count;

/**
 * The service's best guess as to the topic of the request image.
 * Inferred from similar images on the open web.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNWebDetection_WebLabel*> *bestGuessLabelsArray;
/** The number of items in @c bestGuessLabelsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger bestGuessLabelsArray_Count;

@end

#pragma mark - GCVNWebDetection_WebEntity

typedef GPB_ENUM(GCVNWebDetection_WebEntity_FieldNumber) {
  GCVNWebDetection_WebEntity_FieldNumber_EntityId = 1,
  GCVNWebDetection_WebEntity_FieldNumber_Score = 2,
  GCVNWebDetection_WebEntity_FieldNumber_Description_p = 3,
};

/**
 * Entity deduced from similar images on the Internet.
 **/
@interface GCVNWebDetection_WebEntity : GPBMessage

/** Opaque entity ID. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *entityId;

/**
 * Overall relevancy score for the entity.
 * Not normalized and not comparable across different image queries.
 **/
@property(nonatomic, readwrite) float score;

/** Canonical description of the entity, in English. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *description_p;

@end

#pragma mark - GCVNWebDetection_WebImage

typedef GPB_ENUM(GCVNWebDetection_WebImage_FieldNumber) {
  GCVNWebDetection_WebImage_FieldNumber_URL = 1,
  GCVNWebDetection_WebImage_FieldNumber_Score = 2,
};

/**
 * Metadata for online images.
 **/
@interface GCVNWebDetection_WebImage : GPBMessage

/** The result image URL. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

/** (Deprecated) Overall relevancy score for the image. */
@property(nonatomic, readwrite) float score;

@end

#pragma mark - GCVNWebDetection_WebPage

typedef GPB_ENUM(GCVNWebDetection_WebPage_FieldNumber) {
  GCVNWebDetection_WebPage_FieldNumber_URL = 1,
  GCVNWebDetection_WebPage_FieldNumber_Score = 2,
  GCVNWebDetection_WebPage_FieldNumber_PageTitle = 3,
  GCVNWebDetection_WebPage_FieldNumber_FullMatchingImagesArray = 4,
  GCVNWebDetection_WebPage_FieldNumber_PartialMatchingImagesArray = 5,
};

/**
 * Metadata for web pages.
 **/
@interface GCVNWebDetection_WebPage : GPBMessage

/** The result web page URL. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

/** (Deprecated) Overall relevancy score for the web page. */
@property(nonatomic, readwrite) float score;

/** Title for the web page, may contain HTML markups. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *pageTitle;

/**
 * Fully matching images on the page.
 * Can include resized copies of the query image.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNWebDetection_WebImage*> *fullMatchingImagesArray;
/** The number of items in @c fullMatchingImagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger fullMatchingImagesArray_Count;

/**
 * Partial matching images on the page.
 * Those images are similar enough to share some key-point features. For
 * example an original image will likely have partial matching for its
 * crops.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GCVNWebDetection_WebImage*> *partialMatchingImagesArray;
/** The number of items in @c partialMatchingImagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger partialMatchingImagesArray_Count;

@end

#pragma mark - GCVNWebDetection_WebLabel

typedef GPB_ENUM(GCVNWebDetection_WebLabel_FieldNumber) {
  GCVNWebDetection_WebLabel_FieldNumber_Label = 1,
  GCVNWebDetection_WebLabel_FieldNumber_LanguageCode = 2,
};

/**
 * Label to provide extra metadata for the web detection.
 **/
@interface GCVNWebDetection_WebLabel : GPBMessage

/** Label for extra metadata. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *label;

/**
 * The BCP-47 language code for `label`, such as "en-US" or "sr-Latn".
 * For more information, see
 * http://www.unicode.org/reports/tr35/#Unicode_locale_identifier.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *languageCode;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
