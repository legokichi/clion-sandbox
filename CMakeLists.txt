cmake_minimum_required(VERSION 3.4)
project(clion_sandbox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_definitions("-Wall -std=c++14 -v")

add_subdirectory(src/Hoge)

add_executable(clion_sandbox src/main.cpp src/main.hpp Hoge)

find_package(Boost REQUIRED)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(clion_sandbox ${OpenCV_LIBS})
endif(Boost_FOUND)
