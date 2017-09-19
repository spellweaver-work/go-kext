#ifndef CORE_FOUNDATION_SAFE_H
#define CORE_FOUNDATION_SAFE_H

#include "CoreFoundationSafeTypes.h"

#include <CoreFoundation/CoreFoundation.h>

CFBooleanRefSafe kCFBooleanFalseSafe(void) {
  return (CFBooleanRefSafe)kCFBooleanFalse;
}

CFBooleanRefSafe kCFBooleanTrueSafe(void) {
  return (CFBooleanRefSafe)kCFBooleanTrue;
}

void CFReleaseSafe(CFTypeRefSafe cf) {
  CFRelease((CFTypeRef)cf);
}

CFTypeID CFGetTypeIDSafe(CFTypeRefSafe cf) {
  return CFGetTypeID((CFTypeRef)cf);
}

CFArrayRef CFArrayCreateSafe(CFAllocatorRef allocator, const uintptr_t *values, CFIndex numValues, const CFArrayCallBacks *callBacks) {
  return CFArrayCreate(allocator, (const void **)values, numValues, callBacks);
}

void CFArrayGetValuesSafe(CFArrayRef theArray, CFRange range, const uintptr_t *values) {
  return CFArrayGetValues(theArray, range, (const void **)values);
}

CFDictionaryRef CFDictionaryCreateSafe(CFAllocatorRef allocator, const uintptr_t *keys, const uintptr_t *values, CFIndex numValues, const CFDictionaryKeyCallBacks *keyCallBacks, const CFDictionaryValueCallBacks *valueCallBacks) {
  return CFDictionaryCreate(allocator, (const void **)keys, (const void **)values, numValues, keyCallBacks, valueCallBacks);
}

const char * CFStringGetCStringPtrSafe(CFStringRefSafe theString, CFStringEncoding encoding) {
  return CFStringGetCStringPtr((CFStringRef)theString, encoding);
}

CFIndex CFStringGetLengthSafe(CFStringRefSafe theString) {
  return CFStringGetLength((CFStringRef)theString);
}

CFIndex CFStringGetBytesSafe(CFStringRefSafe theString, CFRange range, CFStringEncoding encoding, UInt8 lossByte, Boolean isExternalRepresentation, UInt8 *buffer, CFIndex maxBufLen, CFIndex *usedBufLen) {
  return CFStringGetBytes((CFStringRef)theString, range, encoding, lossByte, isExternalRepresentation, buffer, maxBufLen, usedBufLen);
}

CFNumberType CFNumberGetTypeSafe(CFNumberRefSafe number) {
  return CFNumberGetType((CFNumberRef)number);
}

Boolean CFNumberGetValueSafe(CFNumberRefSafe number, CFNumberType theType, void *valuePtr) {
  return CFNumberGetValue((CFNumberRef)number, theType, valuePtr);
}

Boolean CFBooleanGetValueSafe(CFBooleanRefSafe boolean) {
  return CFBooleanGetValue((CFBooleanRef)boolean);
}

#endif
