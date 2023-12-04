cmake_minimum_required(VERSION 3.0.0)

project(example3 VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(libmath)

add_executable(example3 src/main.cpp)
target_link_libraries(example3 PRIVATE libmath)
