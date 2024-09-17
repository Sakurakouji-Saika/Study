# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\P31_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\P31_autogen.dir\\ParseCache.txt"
  "P31_autogen"
  )
endif()
