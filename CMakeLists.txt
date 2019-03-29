cmake_minimum_required(VERSION 3.5)

project(CircuitSimulator)

if (MSVC)
  add_compile_options(/W4)
else()
  add_compile_options(-Wall -Wextra)
endif()

set(EXECUTABLE_OUTPUT_PATH ${CircuitSimulator_SOURCE_DIR}/build/bin)
add_subdirectory(src)
