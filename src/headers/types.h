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

typedef enum
{
    enc_unknown,  //must be 0
    enc_byte,     //1 byte
    enc_word,     //2 bytes
    enc_dword,    //4 bytes
    enc_fword,    //6 bytes
    enc_qword,    //8 bytes
    enc_tbyte,    //10 bytes
    enc_oword,    //16 bytes
    enc_mmword,   //8 bytes
    enc_xmmword,  //16 bytes
    enc_ymmword,  //32 bytes
    enc_zmmword,  //64 bytes avx512 not supported
    enc_real4,    //4 byte float
    enc_real8,    //8 byte double
    enc_real10,   //10 byte decimal
    enc_ascii,    //ascii sequence
    enc_unicode,  //unicode sequence
    enc_code,     //start of code
    enc_junk,     //junk code
    enc_middle    //middle of data
} ENCODETYPE;

//Debugger defines
#define MAX_LABEL_SIZE 256
#define MAX_COMMENT_SIZE 512
#define MAX_MODULE_SIZE 256
#define MAX_IMPORT_SIZE 65536
#define MAX_BREAKPOINT_SIZE 256
#define MAX_CONDITIONAL_EXPR_SIZE 256
#define MAX_CONDITIONAL_TEXT_SIZE 256
#define MAX_SCRIPT_LINE_SIZE 2048
#define MAX_THREAD_NAME_SIZE 256
#define MAX_WATCH_NAME_SIZE 256
#define MAX_STRING_SIZE 512
#define MAX_ERROR_SIZE 512
#define RIGHTS_STRING_SIZE (sizeof("ERWCG") + 1)
#define MAX_SECTION_SIZE 10
#define MAX_COMMAND_LINE_SIZE 256
#define MAX_MNEMONIC_SIZE 64
#define PAGE_SIZE 0x1000

//Bridge defines
#define MAX_SETTING_SIZE 65536
#define DBG_VERSION 25

#endif // TYPES_H
