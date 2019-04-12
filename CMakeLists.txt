cmake_minimum_required(VERSION 3.10)
project(impact_simulation)

set(CMAKE_CXX_STANDARD 14)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(Dependencies/glfw-3.2.1)

link_libraries(${CMAKE_CURRENT_SOURCE_DIR}/Dependencies/glew-2.1.0/lib/Release/Win32/glew32s.lib)

include_directories(Dependencies/includes)


add_executable(impact_simulation main.cpp physics/Shapes/Shape.cpp physics/Shapes/Shape.h graphics/Drawer.h)

add_definitions(-DGLEW_STATIC)
include_directories(Dependencies/glew-2.1.0/include)
find_package(OpenGL REQUIRED)
target_link_libraries(impact_simulation ${OPENGL_gl_LIBRARY})
target_link_libraries(impact_simulation glfw)