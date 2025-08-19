cmake_minimum_required(VERSION 4.1.0)
project(Cpp_is_not_UB VERSION 0.0.1)

# Список всех исходников
set(SOURCES
    src/main.cpp
    src/utils/math.cpp
    src/utils/cat.cpp
)

# Создаём один бинарник
add_executable(cpp_top ${SOURCES})

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")  # Проверяем компилятор
    # Включаем санитайзеры в Debug-режиме
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=undefined -fsanitize=address -fno-omit-frame-pointer")
    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fsanitize=undefined -fsanitize=address -fno-omit-frame-pointer")
endif()

target_include_directories(cpp_top PRIVATE include/)

target_compile_features(cpp_top PRIVATE cxx_std_23)
