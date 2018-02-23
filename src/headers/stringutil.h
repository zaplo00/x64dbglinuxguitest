#ifndef STRINGUTIL_H
#define STRINGUTIL_H

#include <sstream>
#include <iomanip>
#include <QString>
#include <QDateTime>
#include <QLocale>

#include "types.h"

inline QString ToPtrString(duint Address)
{
    //
    // This function exists because of how QT handles
    // variables in strings.
    //
    // QString::arg():
    // ((int32)0xFFFF0000) == 0xFFFFFFFFFFFF0000 with sign extension
    //

    char temp[32];
#ifdef _WIN64
    sprintf_s(temp, "%016llX", Address);
#else
    sprintf_s(temp, "%08X", Address);
#endif // _WIN64
    return QString(temp);
}

inline QString ToLongLongHexString(unsigned long long Value)
{
    char temp[32];
    sprintf_s(temp, "%llX", Value);
    return QString(temp);
}

inline QString ToHexString(duint Value)
{
    char temp[32];
#ifdef _WIN64
    sprintf_s(temp, "%llX", Value);
#else
    sprintf_s(temp, "%X", Value);
#endif // _WIN64
    return QString(temp);
}

inline QString ToDecString(dsint Value)
{
    char temp[32];
#ifdef _WIN64
    sprintf_s(temp, "%lld", Value);
#else
    sprintf_s(temp, "%d", Value);
#endif // _WIN64
    return QString(temp);
}

inline QString ToByteString(unsigned char Value)
{
    char temp[4];
    sprintf_s(temp, "%02X", Value);
    return QString(temp);
}

inline QString ToWordString(unsigned short Value)
{
    char temp[8];
    sprintf_s(temp, "%04X", Value);
    return QString(temp);
}

template<typename T>
inline QString ToFloatingString(void* buffer)
{
    auto value = *(T*)buffer;
    std::stringstream wFloatingStr;
    wFloatingStr << std::setprecision(std::numeric_limits<T>::digits10) << value;
    return QString::fromStdString(wFloatingStr.str());
}

template<typename T>
inline QString ToIntegralString(void* buffer)
{
    auto value = *(T*)buffer;
    return ToLongLongHexString(value);
}

inline QString ToFloatString(void* buffer)
{
    return ToFloatingString<float>(buffer);
}

inline QString ToDoubleString(void* buffer)
{
    return ToFloatingString<double>(buffer);
}

QString ToLongDoubleString(void* buffer);

QString ToDateString(const QDate & date);

QString GetDataTypeString(void* buffer, duint size, int type); //TODO: ENCODETYPE from bridgemain.h

inline QDate GetCompileDate()
{
    return QLocale("en_US").toDate(QString(__DATE__).simplified(), "MMM d yyyy");
}

#ifdef _WIN64
#define ArchValue(x32value, x64value) x64value
#else
#define ArchValue(x32value, x64value) x32value
#endif //_WIN64

bool GetCommentFormat(duint addr, QString & comment, bool* autoComment = nullptr);

QString EscapeCh(QChar ch);

#endif // STRINGUTIL_H
