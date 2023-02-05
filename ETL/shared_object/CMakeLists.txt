cmake_minimum_required(VERSION 3.10)

project(shared_objects)

add_executable(main main.cpp)

find_package(synfig REQUIRED)
target_link_libraries(main synfig::libsynfig)
