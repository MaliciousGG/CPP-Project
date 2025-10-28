#include "Types.h"

enum class ELogLevel : uint8
{
    Info,
    Warning,
    Error
};

class Log {

public:

    static void Print(ELogLevel Level, const FString& message);
    static void Printf(ELogLevel Level, const FString& format, ...);
};