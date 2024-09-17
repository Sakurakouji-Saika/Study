# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\P27_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\P27_autogen.dir\\ParseCache.txt"
  "P27_autogen"
  )
endif()
