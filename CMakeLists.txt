cmake_minimum_required(VERSION 4.1.0)
project(Cpp_is_not_UB)

# Список всех исходников
set(SOURCES
    src/main.cpp
    src/utils/math.cpp
    src/utils/cat.cpp
)

# Создаём один бинарник
add_executable(cpp_top ${SOURCES})

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")  # Проверяем компилятор
    # Включаем санитайзеры в Debug-режиме
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=undefined -fsanitize=address -fno-omit-frame-pointer")
    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fsanitize=undefined -fsanitize=address -fno-omit-frame-pointer")
endif()

target_include_directories(cpp_top PRIVATE include/)

# Опционально: стандарт C++ (например, C++17)
target_compile_features(cpp_top PRIVATE cxx_std_23)
