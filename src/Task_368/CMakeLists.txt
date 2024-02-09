cmake_minimum_required(VERSION 3.26)
project("Task368" CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

if(NOT CMAKE_CXX_EXTENSIONS)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif()

add_executable(${PROJECT_NAME} main.cpp)
target_compile_options(${PROJECT_NAME} PRIVATE
        -Werror

#        -fsanitize=address

        -Wall
        -Wextra
#        -Wpedantic

#        -Wcast-align
#        -Wcast-qual
#        -Wconversion
#        -Wctor-dtor-privacy
#        -Wenum-compare
#        -Wfloat-equal
#        -Wnon-virtual-dtor
#        -Wold-style-cast
#        -Woverloaded-virtual
#        -Wredundant-decls
#        -Wsign-conversion
#        -Wsign-promo
)

add_compile_options()