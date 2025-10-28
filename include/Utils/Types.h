#ifndef TYPES_H
#define TYPES_H

#include <string>
#include <vector>
#include <memory>
#include <cstdint>


using FString = std::string;
using FName = std::string;

using int8 = std::int8_t;
using uint8 = std::uint8_t;
using int16 = std::int16_t;
using uint16 = std::uint16_t;
using int32 = std::int32_t;
using uint32 = std::uint32_t;
using int64 = std::int64_t;
using uint64 = std::uint64_t;

using float32 = float;
using float64 = double;


template<typename T>
using TArray = std::vector<T>;

template<typename Key, typename Value>
using TMap = std::map<Key, Value>;

// Smart pointer types
template<typename T>
using TSharedPtr = std::shared_ptr<T>;

template<typename T>
using TUniquePtr = std::unique_ptr<T>;

#endif