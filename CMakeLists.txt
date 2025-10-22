cmake_minimum_required(VERSION 3.22)
project(myproject VERSION 0.1.0 LANGUAGES CXX)

# Basic configuration
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Build type" FORCE)
endif()

option(BUILD_TESTING "Enable tests" ON)
option(BUILD_SHARED_LIBS "Build libraries as shared" OFF)

# Compiler warnings for GCC/Clang
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Example library + executable layout (adjust source paths)
add_library(mylib src/mylib.cpp)
target_include_directories(mylib PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>)
target_compile_features(mylib PUBLIC cxx_std_20)

add_executable(myapp src/main.cpp)
target_link_libraries(myapp PRIVATE mylib)

# Install targets (optional)
install(TARGETS myapp mylib
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib)

# Export config for find_package (optional)
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/myprojectConfigVersion.cmake"
  VERSION ${PROJECT_VERSION} COMPATIBILITY AnyNewerVersion)
install(EXPORT myprojectTargets DESTINATION lib/cmake/myproject FILE myprojectTargets.cmake)
install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt" DESTINATION lib/cmake/myproject)

# Tests
if(BUILD_TESTING)
  enable_testing()
  add_subdirectory(tests)
endif()