# 最低要求版本
cmake_minimum_required (VERSION 2.8)

project(Demo_HelloWorld)

# Include files
include_sub_directories_recursively ("${PROJECT_SOURCE_DIR}/")

# Source Files
source_sub_directories_recursively("src/*.cpp")

add_executable(Demo_HelloWorld ${ALL_SRC_FILES})
target_link_libraries(Demo_HelloWorld MESC)
