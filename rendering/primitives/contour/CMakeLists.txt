cmake_minimum_required(VERSION 3.10)

project(contour)

find_package(synfig REQUIRED)

add_executable(synfig_polygon_rendering synfig_polygon_rendering.cpp)
target_link_libraries(synfig_polygon_rendering synfig::libsynfig)
