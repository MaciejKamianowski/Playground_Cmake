﻿# CMakeList.txt : CMake project for Playground_CMake, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Playground_CMake "Application.cpp" "Application.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Playground_CMake PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
