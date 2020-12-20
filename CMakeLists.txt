cmake_minimum_required(VERSION 3.15)
project(Cpp_class)

set(CMAKE_CXX_STANDARD 14)

include_directories(Geometry CardClass ChristmasTreeClass DateTime)
aux_source_directory(. DIR_SRCS)
add_subdirectory(Geometry)
add_subdirectory(CardClass)
add_subdirectory(ChristmasTreeClass)
add_subdirectory(DateTime)
add_executable(Cpp_class main.cpp BasicCourse.h)

target_link_libraries(Cpp_class GeometryClass CardClass ChristmasTreeClass DateTimeClass)