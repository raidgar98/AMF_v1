#pragma once

#include <QDebug>

#define QPTR(x) QString::number(reinterpret_cast<unsigned long long>(x))
#define QNUM(x) QString::number(x)

/// @enum Simple enum, for simple log function
enum LOG_OPTION
{
    DEBUG = 2,
    ERROR = 3,
    WARNING = 5,
    INFO = 7
};

/// @fn Logs 'print_out' varriable separarated with ingle space, with LOG_OPTION prefix (by default DEBUG).
/// @note It works ONLY if DEBUG build type is active
/// @example log( { "C++", ">", "C#,", QNUM(1000), "times on", QPTR(this), "object" }, LOG_OPTION::INFO);
/// @example Output: "[INFO] C++ > C#, 1000 times on 0xBAADF00D object"
inline void log(const QStringList& print_out, LOG_OPTION log_type = DEBUG)
{
#ifdef QT_DEBUG
    const static auto translate = [](LOG_OPTION val)
    {
        QString ret;
        if(val == DEBUG) ret = "DEBUG";
        else if(val == ERROR) ret = "ERROR";
        else if(val == WARNING) ret = "WARNING";
        else ret = "INFO";
        return ret;
    };
    qDebug() << "[" + translate(log_type) + "]" << print_out.join(" ");
#endif
}
