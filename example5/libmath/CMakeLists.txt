set(LIBMATH_HEADERS include/math/vec.hpp include/math/common.h)
set(LIBMATH_SOURCES src/math/common.cpp)

add_library(libmath_static STATIC ${LIBMATH_SOURCES} ${LIBMATH_HEADERS})
target_include_directories(libmath_static PUBLIC include)

add_library(libmath SHARED ${LIBMATH_SOURCES} ${LIBMATH_HEADERS})
target_include_directories(libmath PUBLIC include)
set_target_properties(libmath PROPERTIES POSITION_INDEPENDENT_CODE TRUE)
set_target_properties(libmath PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

include(CTest)
enable_testing()

macro(AddTest target_name)
    add_executable(${target_name} tests/${target_name}.cpp)
    target_link_libraries(${target_name} PRIVATE libmath)
    add_test(NAME ${target_name} COMMAND $<TARGET_FILE:${target_name}>)
    add_custom_command(
        TARGET ${target_name} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:${target_name}> $<TARGET_FILE_DIR:${target_name}>
        COMMAND_EXPAND_LISTS
    )
endmacro(AddTest target_name)

AddTest(vec_tests)
