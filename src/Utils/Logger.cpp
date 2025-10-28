#include <iostream>

#include "include/Utils/Logger.h"
#include <cstdarg>

void Log::Print(ELogLevel Level, const FString& message)
{
    switch (Level)
    {
    case ELogLevel::Info:
        std::cout << "[INFO]: " << message << std::endl;
        break;
    case ELogLevel::Warning:
        std::cout << "[WARNING]: " << message << std::endl;
        break;
    case ELogLevel::Error:
        std::cerr << "[ERROR]: " << message << std::endl;
        break;
    default:
        std::cout << "[UNKNOWN]: " << message << std::endl;
        break;
    }
}

void Log::Printf(ELogLevel Level, const FString& format, ...)
{
    va_list args;
    va_start(args, format);

    constexpr size_t BUFFER_SIZE = 1024;
    char buffer[BUFFER_SIZE];
    vsnprintf(buffer, BUFFER_SIZE, format.c_str(), args);

    va_end(args);

    Print(Level, FString(buffer));
}