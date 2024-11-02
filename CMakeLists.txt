cmake_minimum_required(VERSION 3.20)

project(cafea)

set(CMAKE_CXX_STANDARD 14)	 
# we request C++14

set(CMAKE_CXX_STANDARD_REQUIRED ON)	
# we request that CMake verifies the compiler

set(CMAKE_CXX_EXTENSIONS OFF)	 
# we request -std=c++14 in the compiler  flags instead of –std=gnu++14

add_executable(${PROJECT_NAME} tema.cpp CafeaComandata.cpp CafeaComandata.hpp)	
#we can add headers into the executable definition

