cmake_minimum_required(VERSION 3.30)

project( textBasedRPG CXX )

file( GLOB_RECURSE ${out_files} src/**.cpp)
include_directories(src)

add_executable( main src/main.cpp )