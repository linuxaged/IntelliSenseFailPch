cmake_minimum_required(VERSION 3.16.0)

project(mylib VERSION 1.1.0.0)

add_library( mylib STATIC mylib.cpp mylib.h)

target_precompile_headers(mylib PUBLIC "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/mylib-pch.h>")