#ifndef CORE_FOUNDATION_SAFE_TYPES_H
#define CORE_FOUNDATION_SAFE_TYPES_H

#include <stdint.h>
#include <CoreFoundation/CoreFoundation.h>

typedef uintptr_t CFTypeRefSafe;
typedef uintptr_t CFStringRefSafe;
typedef uintptr_t CFNumberRefSafe;
typedef uintptr_t CFBooleanRefSafe;

typedef uintptr_t CFDataRefSafe;
typedef uintptr_t CFArrayRefSafe;
typedef uintptr_t CFDictionaryRefSafe;

#endif
