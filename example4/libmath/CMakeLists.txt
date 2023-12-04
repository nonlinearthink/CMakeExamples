set(LIBMATH_HEADERS include/math/vec.hpp include/math/common.h)
set(LIBMATH_SOURCES src/math/common.cpp)

add_library(libmath_static STATIC ${LIBMATH_SOURCES} ${LIBMATH_HEADERS})
target_include_directories(libmath_static PUBLIC include)

add_library(libmath SHARED ${LIBMATH_SOURCES} ${LIBMATH_HEADERS})
target_include_directories(libmath PUBLIC include)
set_target_properties(libmath PROPERTIES POSITION_INDEPENDENT_CODE TRUE)
set_target_properties(libmath PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
