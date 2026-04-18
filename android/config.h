/* Hand-maintained resiprocate config.h for Android/bionic (Soong build).
 * Derived from config.h.cmake in resiprocate 1.13.2.
 * License: VSL-1.0 (upstream).
 */

#ifndef RESIP_CONFIG_H_ANDROID
#define RESIP_CONFIG_H_ANDROID

#define GPERF_SIZE_TYPE size_t

/* bionic has epoll + monotonic clock_gettime */
#define HAVE_EPOLL 1
#define HAVE_CLOCK_GETTIME_MONOTONIC 1

/* Defaults matching upstream autoconf */
#define DEFAULT_BRIDGE_MAX_IN_OUTPUTS 20
#define RESIP_SIP_MSG_MAX_BYTES 10485760

/* No optional backends */
/* #undef USE_MYSQL */
/* #undef USE_POSTGRESQL */
/* #undef USE_MAXMIND_GEOIP */
/* #undef USE_SIGCOMP */
/* #undef SIPX_NO_RECORD */
/* #undef ENABLE_LOG_REPOSITORY_DETAILS */

/* Endianness — Android runtime is little-endian on both arm/arm64/x86. */
/* #undef RESIP_BIG_ENDIAN */

/* Version info */
#define RESIPROCATE_GIT_ID "1.13.2"
#define RESIPROCATE_BRANCH_NAME "lineage-23.2"

/* C++17 std::string_view is available in the AOSP libc++. */
#define RESIP_HAVE_STRING_VIEW 1

#endif /* RESIP_CONFIG_H_ANDROID */
