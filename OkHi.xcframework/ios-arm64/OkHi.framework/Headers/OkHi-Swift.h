#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef OKHI_SWIFT_H
#define OKHI_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="OkHi",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// Environment enum
typedef SWIFT_ENUM(NSInteger, Environment, open) {
/// Mode for Production Environment
  EnvironmentProd = 0,
/// Mode for Sandbox Environment
  EnvironmentSandbox = 1,
};

@class NSCoder;

/// Defines GeoPoint class
SWIFT_CLASS("_TtC4OkHi8GeoPoint")
@interface GeoPoint : NSObject <NSSecureCoding>
/// Supports Secure Coding
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL supportsSecureCoding;)
+ (BOOL)supportsSecureCoding SWIFT_WARN_UNUSED_RESULT;
+ (void)setSupportsSecureCoding:(BOOL)value;
/// Encode
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
/// Initializes GeoPoint class with NSCoder
/// <ul>
///   <li>
///     Parameters coder:
///   </li>
/// </ul>
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Enum containing type of location permission requested
typedef SWIFT_ENUM(NSInteger, LocationPermissionType, open) {
  LocationPermissionTypeWhenInUse = 0,
  LocationPermissionTypeAlways = 1,
};

@class OkHiAuth;

/// Defines OkHiCollect class
SWIFT_CLASS("_TtC4OkHi9OkCollect")
@interface OkCollect : NSObject
/// Initializes OkCollect class
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Static method to initialize OkHiCollect
/// \param okHiAuth Authorization info that includes BranchId, ClientKey and Environment
///
+ (void)initializeWith:(OkHiAuth * _Nonnull)okHiAuth;
@end


/// Defines OkHiCore class
SWIFT_CLASS("_TtC4OkHi6OkCore")
@interface OkCore : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Initializes OkHiCore
/// \param okHiAuth authorization object
///
- (nonnull instancetype)initWithOkHiAuth:(OkHiAuth * _Nonnull)okHiAuth OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;
@class OkHiAppMeta;

/// The OkHiAppContext class defines your current running context i.e what mode will you be using OkHi seervices. It also keeps track of your apps current version and build numbers which will assit in debigging purposes.
SWIFT_CLASS("_TtC4OkHi14OkHiAppContext")
@interface OkHiAppContext : NSObject
/// Current mode
@property (nonatomic, copy) NSString * _Nullable mode;
/// Current metadata information about the current running platform
@property (nonatomic, copy) NSString * _Nonnull platform;
/// Current metadata information about the current developer integrating OkHi services
@property (nonatomic, copy) NSString * _Nonnull developer;
/// Current metadata information about your application. May be nil if none is set via the OkHiContext
@property (nonatomic, strong) OkHiAppMeta * _Nullable appMeta;
/// Initializes OkHiAppContext
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Initializes OkHiAppContext with AppMeta data
- (OkHiAppContext * _Nonnull)withAppMetaWithName:(NSString * _Nonnull)name version:(NSString * _Nonnull)version build:(NSString * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
@end


/// Defines OkHiAppMeta class
SWIFT_CLASS("_TtC4OkHi11OkHiAppMeta")
@interface OkHiAppMeta : NSObject
/// Name
@property (nonatomic, copy) NSString * _Nullable name;
/// Version
@property (nonatomic, copy) NSString * _Nullable version;
/// Build
@property (nonatomic, copy) NSString * _Nullable build;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Defines OkHiAuth class
SWIFT_CLASS("_TtC4OkHi8OkHiAuth")
@interface OkHiAuth : NSObject
/// Access token
@property (nonatomic, readonly, copy) NSString * _Nullable accessToken;
/// App Context
@property (nonatomic, readonly, strong) OkHiAppContext * _Nonnull appContext;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Initializes OkHIAuth
/// \param branchId provided by OkHi
///
/// \param clientKey provided by OkHi
///
/// \param environment sandox for testing. prod for realtime usage
///
/// \param appContext Optional parameter.
///
- (nonnull instancetype)initWithBranchId:(NSString * _Nonnull)branchId clientKey:(NSString * _Nonnull)clientKey environment:(enum Environment)environment appContext:(OkHiAppContext * _Nullable)appContext OBJC_DESIGNATED_INITIALIZER;
@end


/// Defines OkHiConfig class
SWIFT_CLASS("_TtC4OkHi10OkHiConfig")
@interface OkHiConfig : NSObject
/// Initializes OkHiConfig class
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Initializes OkHiConfig enabling street view when selecting location
///
/// returns:
/// instance of OkHiConfig
- (OkHiConfig * _Nonnull)enableStreetView SWIFT_WARN_UNUSED_RESULT;
/// Initializes OkHiConfig enabling App Bar for WebView
///
/// returns:
/// instance of OkHiConfig
- (OkHiConfig * _Nonnull)enableAppBar SWIFT_WARN_UNUSED_RESULT;
/// Enables different address types
///
/// returns:
/// instance of OkHiConfig
- (OkHiConfig * _Nonnull)withAddressTypesWithWork:(BOOL)work home:(BOOL)home SWIFT_WARN_UNUSED_RESULT;
@end

@protocol OkHiLocationServiceDelegate;
@class CLLocationManager;

/// Defines OkHiLocationService class
SWIFT_CLASS("_TtC4OkHi19OkHiLocationService")
@interface OkHiLocationService : NSObject <CLLocationManagerDelegate>
/// Initializes OkHiLocationService
@property (nonatomic, weak) id <OkHiLocationServiceDelegate> _Nullable delegate;
/// Initializes OkHiLocationService
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Checks whether location permission is already granted
- (BOOL)isLocationPermissionGranted SWIFT_WARN_UNUSED_RESULT;
/// Checks whether location services are available
- (BOOL)isLocationServicesAvailable SWIFT_WARN_UNUSED_RESULT;
/// Requests  location permission
/// \param withBackgroundLocationPermission if false only Wen In Use permission will be requested. Otherwise Always permission will be requested. True by default.
///
- (void)requestLocationPermissionWithBackgroundLocationPermission:(BOOL)withBackgroundLocationPermission;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
@end


/// Delegate to handle OkHiLocationService event’s
SWIFT_PROTOCOL("_TtP4OkHi27OkHiLocationServiceDelegate_")
@protocol OkHiLocationServiceDelegate
/// Delegate event raised when location services permission changed
/// \param locationService OkHiLocationService object
///
/// \param locationPermissionType requested permission type enum
///
/// \param result the result of location access permision
///
- (void)okHiLocationServiceWithLocationService:(OkHiLocationService * _Nonnull)locationService didChangeLocationPermissionStatus:(enum LocationPermissionType)locationPermissionType result:(BOOL)result;
@end


/// Defines  OkHiTheme class
SWIFT_CLASS("_TtC4OkHi9OkHiTheme")
@interface OkHiTheme : NSObject
/// Initializes OkHiTheme class
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Initializes OkHiTheme with logo url
/// \param logoUrl path to your image resource
///
///
/// returns:
/// instance of OkHiTheme
- (OkHiTheme * _Nonnull)withLogoUrl:(NSString * _Nonnull)logoUrl SWIFT_WARN_UNUSED_RESULT;
/// Initializes OkHiTheme with App Bar Color
/// \param appBarColor hex string color e.g  “#FFFFFF”
///
///
/// returns:
/// instance of OkHiTheme
- (OkHiTheme * _Nonnull)withAppBarColor:(NSString * _Nonnull)appBarColor SWIFT_WARN_UNUSED_RESULT;
/// Initializes OkHiTheme with App Name
/// \param appName the name of the app to show at webvew form
///
///
/// returns:
/// instance of OkHiTheme
- (OkHiTheme * _Nonnull)withAppName:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC4OkHi13OkPreferences")
@interface OkPreferences : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC4OkHi8OkVerify")
@interface OkVerify : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






@class CLRegion;
@class CLLocation;

@interface OkVerify (SWIFT_EXTENSION(OkHi)) <CLLocationManagerDelegate>
- (void)locationManagerDidChangeAuthorization:(CLLocationManager * _Nonnull)manager;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didStartMonitoringForRegion:(CLRegion * _Nonnull)region;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFailWithError:(NSError * _Nonnull)error;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didEnterRegion:(CLRegion * _Nonnull)region;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didExitRegion:(CLRegion * _Nonnull)region;
- (void)locationManager:(CLLocationManager * _Nonnull)manager monitoringDidFailForRegion:(CLRegion * _Nullable)region withError:(NSError * _Nonnull)error;
@end


@interface OkVerify (SWIFT_EXTENSION(OkHi))
- (void)startMonitoring;
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC4OkHi16OkVerifyGeofence")
@interface OkVerifyGeofence : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface OkVerifyGeofence (SWIFT_EXTENSION(OkHi))
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic, copy) NSString * _Nullable userId;
@end


SWIFT_CLASS("_TtC4OkHi26OkVerifyGeofenceTransition")
@interface OkVerifyGeofenceTransition : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDate;

@interface OkVerifyGeofenceTransition (SWIFT_EXTENSION(OkHi))
@property (nonatomic) double accuracy;
@property (nonatomic, copy) NSString * _Nullable geoPointSource;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSDate * _Nullable locationDate;
@property (nonatomic, copy) NSString * _Nullable locationId;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString * _Nullable transition;
@property (nonatomic, copy) NSDate * _Nullable transitionDate;
@end


SWIFT_CLASS("_TtC4OkHi12OkVerifyUser")
@interface OkVerifyUser : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface OkVerifyUser (SWIFT_EXTENSION(OkHi))
@property (nonatomic, copy) NSString * _Nullable accessToken;
@property (nonatomic, copy) NSString * _Nullable bearerToken;
@property (nonatomic, copy) NSString * _Nullable environment;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable phoneNumber;
@end





#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
