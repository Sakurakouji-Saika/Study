# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\P28_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\P28_autogen.dir\\ParseCache.txt"
  "P28_autogen"
  )
endif()
