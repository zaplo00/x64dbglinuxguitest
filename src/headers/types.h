#ifndef TYPES_H
#define TYPES_H

#ifdef _WIN64
#define COMPILE_X64 1    // Program is being compiled as 64-bit
#else
#define COMPILE_X32 1    // Program is being compiled as 32-bit
#endif // _WIN64

//
// Define types
//
#ifdef COMPILE_X64
typedef unsigned long long  duint;
typedef signed long long    dsint;
#else
typedef unsigned long duint;
typedef signed long dsint;
#endif // COMPILE_X64

typedef short int16;
typedef unsigned short uint16;

typedef int int32;
typedef unsigned int uint32;

typedef long long int64;
typedef unsigned long long uint64;

typedef unsigned char byte_t;

inline int sprintf_s(char* buffer, size_t sizeOfBuffer, const char* format, ...)
{
    va_list ap;
    va_start(ap, format);
    int result = vsnprintf(buffer, sizeOfBuffer, format, ap);
    va_end(ap);
    return result;
}

template<size_t sizeOfBuffer>
inline int sprintf_s(char (&buffer)[sizeOfBuffer], const char* format, ...)
{
    va_list ap;
    va_start(ap, format);
    int result = vsnprintf(buffer, sizeOfBuffer, format, ap);
    va_end(ap);
    return result;
}

#endif // TYPES_H
