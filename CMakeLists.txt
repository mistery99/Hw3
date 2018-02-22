cmake_minimum_required (VERSION 3.0)
project (HW2)

if (CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-std=c++11 -O0 -g3 -Wall -Wextra ${CMAKE_CXX_FLAGS}")
endif()

add_executable(Hw3
	filesystem.hpp
	filesystem.cpp
	process.hpp
	process.cpp
	c++lang.hpp
	c++lang.cpp
    main.cpp
)
