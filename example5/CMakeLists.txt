cmake_minimum_required(VERSION 3.2.0)

project(example4 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_subdirectory(libmath)

add_executable(example4 src/main.cpp)
target_link_libraries(example4 PRIVATE libmath)
add_custom_command(
    TARGET example4 POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:example4> $<TARGET_FILE_DIR:example4>
    COMMAND_EXPAND_LISTS
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
