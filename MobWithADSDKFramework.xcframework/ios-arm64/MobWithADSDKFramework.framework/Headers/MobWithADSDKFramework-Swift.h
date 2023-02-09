#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef MOBWITHADSDKFRAMEWORK_SWIFT_H
#define MOBWITHADSDKFRAMEWORK_SWIFT_H
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
@import AdFitSDK;
@import AppLovinSDK;
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MobWithADSDKFramework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
typedef SWIFT_ENUM(NSInteger, MMBannerType, open) {
  MMBannerTypeBANNER_320x50 = 0,
  MMBannerTypeBANNER_300x250 = 1,
};

@protocol MobWithADViewDelegate;
@class NSString;
@class UIView;
@class UIImageView;
@class UILabel;
@class UIButton;

SWIFT_CLASS("_TtC21MobWithADSDKFramework14MMNativeAdView")
@interface MMNativeAdView : NSObject
@property (nonatomic, strong) id <MobWithADViewDelegate> _Nullable adDelegate;
/// Native AD View
/// Tag값의 설정이 필요한 View의 경우 Tag값을 설정하지 않았거나, 0인 경우 SDK 내부에서 임의의 Tag값을 설정한다. (미디에션기능을 지원하는 몇몇 SDK의 설정을 위함)
/// \param bannerUnitId 발급받은 광고 지면 ID
///
/// \param adContainerView 광고 View를 표시할 View.  AppLovin을 미디에이션하기 위해서는 MANativeAdView를 만들어서 내려줘야 한다.
///
/// \param nativeAdRootView 커스텀된 메인 광고 View.  광고 Image, Title 라벨등 하위 뷰를 포함하는 상위 View
///
/// \param adImageView 광고 Image를 표시할 ImageView. Tag값 설정 필요
///
/// \param logoImageView 광고주  로고를 표시할 ImageView. Tag값 설정 필요
///
/// \param titleLabel 광고 Title을 표시할 Label. Tag값 설정 필요
///
/// \param descriptionLabel 광고에 대한 설명이 표시될 Label. Tag값 설정 필요
///
/// \param gotoSiteButton 광고 사이트 이동을 위한 Button. Tag값 설정 필요
///
/// \param infoLogoImageView 광고 Info Logo를 표시할 ImageView. Tag값 설정 필요
///
- (nonnull instancetype)initWithBannerUnitId:(NSString * _Nonnull)bannerUnitId adContainerView:(UIView * _Nonnull)adContainerView nativeAdRootView:(UIView * _Nonnull)nativeAdRootView adImageView:(UIImageView * _Nullable)adImageView logoImageView:(UIImageView * _Nullable)logoImageView titleLabel:(UILabel * _Nullable)titleLabel descriptionLabel:(UILabel * _Nullable)descriptionLabel gotoSiteButton:(UIButton * _Nullable)gotoSiteButton infoLogoImageView:(UIImageView * _Nullable)infoLogoImageView OBJC_DESIGNATED_INITIALIZER;
- (void)loadAd;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface MMNativeAdView (SWIFT_EXTENSION(MobWithADSDKFramework))
/// 제공하는 광고 클릭 영역이 아닌 다른 방법을 통해 광고 터치 동작을 수행하고자 하는 경우 광고 영역에 Touch 이벤트를 전달하기 위한 함수
- (void)performAdClicked;
@end

@class MANativeAdView;
@class MAAd;
@class MAError;

@interface MMNativeAdView (SWIFT_EXTENSION(MobWithADSDKFramework)) <MANativeAdDelegate>
- (void)didLoadNativeAd:(MANativeAdView * _Nullable)maxNativeAdView forAd:(MAAd * _Nonnull)ad;
- (void)didFailToLoadNativeAdForAdUnitIdentifier:(NSString * _Nonnull)adUnitIdentifier withError:(MAError * _Nonnull)error;
- (void)didClickNativeAd:(MAAd * _Nonnull)ad;
- (void)didExpireNativeAd:(MAAd * _Nonnull)ad;
@end


/// MobMixerSDK 기본 관리 클래스
SWIFT_CLASS("_TtC21MobWithADSDKFramework12MobWithADSDK")
@interface MobWithADSDK : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MobWithADSDK * _Nonnull standard;)
+ (MobWithADSDK * _Nonnull)standard SWIFT_WARN_UNUSED_RESULT;
/// SDK 버전 정보를 반환한다
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sdkVersion;)
+ (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP21MobWithADSDKFramework21MobWithADViewDelegate_")
@protocol MobWithADViewDelegate
@optional
- (void)mobWithAdViewClickedAd;
- (void)mobWithAdViewDidReceivedAd;
- (void)mobWithAdViewDidFailToReceiveAd;
@end

@class NSCoder;

SWIFT_CLASS("_TtC21MobWithADSDKFramework13MobWithAdView")
@interface MobWithAdView : UIView
@property (nonatomic, strong) id <MobWithADViewDelegate> _Nullable adDelegate;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)init:(CGRect)frame type:(enum MMBannerType)type bannerUnitId:(NSString * _Nonnull)bannerUnitId OBJC_DESIGNATED_INITIALIZER;
- (void)loadAd;
- (void)removeFromSuperview;
- (void)clearAdLoader;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end



@class AdFitNativeAd;
@class AdFitNativeAdLoader;

@interface MobWithAdView (SWIFT_EXTENSION(MobWithADSDKFramework)) <AdFitNativeAdDelegate, AdFitNativeAdLoaderDelegate>
- (void)nativeAdDidClickAd:(AdFitNativeAd * _Nonnull)nativeAd;
- (void)nativeAdLoaderDidReceiveAd:(AdFitNativeAd * _Nonnull)nativeAd;
- (void)nativeAdLoaderDidReceiveAds:(NSArray<AdFitNativeAd *> * _Nonnull)nativeAds;
- (void)nativeAdLoaderDidFailToReceiveAd:(AdFitNativeAdLoader * _Nonnull)nativeAdLoader error:(NSError * _Nonnull)error;
@end


@interface MobWithAdView (SWIFT_EXTENSION(MobWithADSDKFramework)) <MAAdViewAdDelegate>
- (void)didLoadAd:(MAAd * _Nonnull)ad;
- (void)didClickAd:(MAAd * _Nonnull)ad;
- (void)didFailToLoadAdForAdUnitIdentifier:(NSString * _Nonnull)adUnitIdentifier withError:(MAError * _Nonnull)error;
- (void)didFailToDisplayAd:(MAAd * _Nonnull)ad withError:(MAError * _Nonnull)error;
- (void)didExpandAd:(MAAd * _Nonnull)ad;
- (void)didCollapseAd:(MAAd * _Nonnull)ad;
- (void)didHideAd:(MAAd * _Nonnull)ad;
- (void)didDisplayAd:(MAAd * _Nonnull)ad;
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
