#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "GTMAppAuthFetcherAuthorization.h"
#import "GTMAppAuthFetcherAuthorization+Keychain.h"

#if TARGET_OS_TV
#import "GTMTVAuthorizationRequest.h"
#import "GTMTVAuthorizationResponse.h"
#import "GTMTVAuthorizationService.h"
#endif

#if TARGET_OS_TV
#elif TARGET_OS_WATCH
#elif TARGET_OS_IOS
#import "GTMOAuth2KeychainCompatibility.h"
#elif TARGET_OS_MAC
#import "GTMOAuth2KeychainCompatibility.h"
#else
#warn "Platform Undefined"
#endif

FOUNDATION_EXPORT double GTMAppAuthVersionNumber;
FOUNDATION_EXPORT const unsigned char GTMAppAuthVersionString[];

