cmake_minimum_required(VERSION 3.10)
project(Game)

find_package(GLEW REQUIRED)
find_package(glfw3 3.2 REQUIRED)
find_package(OpenGL REQUIRED)

set(CMAKE_CXX_STANDARD 14)

add_executable(Game test.cpp)

target_link_libraries(Game GLEW::GLEW glfw OpenGL::GL)
