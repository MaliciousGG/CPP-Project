cmake_minimum_required(VERSION 3.10)
project(CPP-Project)

set(CMAKE_CXX_STANDARD 17)

# Organize sources
set(SOURCES
    main.cpp
    src/Utils/Logger.cpp
)

# Organize headers
set(HEADERS
    include/Utils/Logger.h
)

# Add include directories
include_directories(include)

# Create executable
add_executable(main ${SOURCES} ${HEADERS})