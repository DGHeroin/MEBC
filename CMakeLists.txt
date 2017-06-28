# 最低要求版本
cmake_minimum_required (VERSION 2.8)

project(MEBC)

# 自动添加 include 目录
function(include_sub_directories_recursively root_inc_dir)
    if (IS_DIRECTORY ${root_inc_dir})
        #message("include dir: " ${root_inc_dir})
        include_directories(${root_inc_dir})
    endif()

    file(GLOB ALL_SUB RELATIVE ${root_inc_dir} ${root_inc_dir}/*)
    foreach(sub ${ALL_SUB})
        if (IS_DIRECTORY ${root_inc_dir}/${sub})
            include_sub_directories_recursively(${root_inc_dir}/${sub})
        endif()
    endforeach()
endfunction()

# 自动添加 文件 (递归)
function(source_sub_directories_recursively root_src_dir)
    file(GLOB_RECURSE ALL_CUR_SRC_FILES ${root_src_dir})
    set (ALL_SRC_FILES "${ALL_CUR_SRC_FILES}" PARENT_SCOPE)
endfunction()

# Include files
include_sub_directories_recursively ("${PROJECT_SOURCE_DIR}/Core/include")

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

subdirs(Core)
subdirs(Demo_HelloWorld)
subdirs(Demo_ScriptEngine)