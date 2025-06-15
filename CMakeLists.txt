cmake_minimum_required (VERSION 3.10)

project (Krone LANGUAGES CXX)

set( GLFW_BUILD_EXAMPLES OFF CACHE BOOL  "Build GLFW library only" )
set( GLFW_BUILD_TESTS OFF CACHE BOOL  "Build GLFW library only" )
set( GLFW_BUILD_DOCS OFF CACHE BOOL  "Build GLFW library only" )
set( GLFW_BUILD_INSTALL OFF CACHE BOOL  "Build GLFW library only" )

add_subdirectory (vendor/GLFW)

add_executable (Krone
  "source/Main.cpp"
)

target_link_libraries (Krone PRIVATE glfw)

if (WIN32)
  target_link_libraries (Krone PRIVATE opengl32)
endif()
