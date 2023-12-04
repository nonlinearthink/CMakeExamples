cmake_minimum_required(VERSION 3.0.0)

project(example2 VERSION 0.1.0 LANGUAGES C CXX)

add_library(func func.cpp)
target_include_directories(func PUBLIC .)

add_executable(example2 main.cpp)
target_link_libraries(example2 PRIVATE func)
