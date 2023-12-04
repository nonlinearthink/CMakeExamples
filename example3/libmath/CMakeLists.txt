set(LIBMATH_HEADERS include/math/vec.hpp include/math/common.h)
set(LIBMATH_SOURCES src/math/common.cpp)

add_library(libmath ${LIBMATH_SOURCES} ${LIBMATH_HEADERS})
target_include_directories(libmath PUBLIC include)
