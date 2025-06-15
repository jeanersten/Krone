cmake_minimum_required (VERSION 3.10)

project (Krone LANGUAGES CXX)

set (GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_INSTALL OFF CACHE BOOL "" FORCE)

add_subdirectory (vendor/GLAD)
add_subdirectory (vendor/GLFW)

add_executable (Krone
  "source/Main.cpp"
)

target_link_libraries (Krone PRIVATE glad glfw)

if (WIN32)
  target_link_libraries (Krone PRIVATE opengl32)
endif ()

add_definitions (-D GLFW_INCLUDE_NONE)
