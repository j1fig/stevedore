cmake_minimum_required (VERSION 2.8.7)
project (Stevedore)
# The version number.
set (Stevedore_VERSION_MAJOR 0)
set (Stevedore_VERSION_MINOR 1)
set (Stevedore_VERSION_PATCH 0)
 
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/StevedoreConfig.h.in"
  "${PROJECT_BINARY_DIR}/StevedoreConfig.h"
  )
 
# add the binary tree to the search path for include files
# so that we will find StevedoreConfig.h
find_package(Boost 1.46.1 REQUIRED system thread)

include_directories(${Boost_INCLUDE_DIRS} "${PROJECT_BINARY_DIR}")
link_directories(${Boost_LIBRARY_DIRS})

file(GLOB_RECURSE CORE_SOURCES src/core/*.cpp)
add_executable(stevedore ${CORE_SOURCES})
target_link_libraries(stevedore ${Boost_LIBRARIES})
