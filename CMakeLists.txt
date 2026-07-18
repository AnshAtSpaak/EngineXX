cmake_minimum_required(VERSION 3.10.3)
project(EngineXX LANGUAGES CXX C)

set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(enginexx
  source/private/main.cpp
  source/private/shader.cpp
)

target_include_directories(enginexx
  PRIVATE
  include
  source/public
)

target_compile_definitions(enginexx
  PRIVATE
  SHADER_DIR="${CMAKE_SOURCE_DIR}/shaders/"
  IMAGE_DIR="${CMAKE_SOURCE_DIR}/images/"
)

target_compile_options(enginexx
  PRIVATE
  -Wall
  -Wextra
)

target_link_directories(enginexx
  PRIVATE
  libs
)

target_link_libraries(enginexx
  PRIVATE
  glad
  glfw3
  stb_image
)