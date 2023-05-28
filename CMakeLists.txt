cmake_minimum_required(VERSION 3.25)
cmake_policy(SET CMP0091 NEW)

project(IntelliSenseFail VERSION 1.0.0.0)

add_subdirectory(./mylib mylib)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE mylib)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})
