# 最低要求版本
cmake_minimum_required (VERSION 2.8)

project(MESC_Core)

# Include files
include_directories ("${PROJECT_SOURCE_DIR}/include")

# Output Path
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "lib/")

# Source Files
file(GLOB SOURCES "src/*.cpp")

add_library(MESC ${SOURCES})