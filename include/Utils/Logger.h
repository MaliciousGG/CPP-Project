#include "Types.h"

enum class ELogLevel : uint8
{
    Info,
    Warning,
    Error
};

class Log {

public:

    void Print(ELogLevel Level, const FString& message);
    void Printf(ELogLevel Level, const FString& format, ...);
};