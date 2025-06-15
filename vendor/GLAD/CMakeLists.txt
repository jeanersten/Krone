cmake_minimum_required(VERSION 3.10)

project (GLAD LANGUAGES C)

add_library (glad STATIC
  "src/gl.c"

  "include/KHR/khrplatform.h"
  "include/glad/gl.h"
)

target_include_directories (glad PUBLIC include)
