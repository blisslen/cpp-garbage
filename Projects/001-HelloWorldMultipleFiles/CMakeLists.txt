cmake_minimum_required (VERSION 2.6)
set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required
project (helloWorldMultipleFiles)
add_executable(helloWorldMultipleFiles main.cpp helloModule.cpp helloModule.h)