# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\P30_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\P30_autogen.dir\\ParseCache.txt"
  "P30_autogen"
  )
endif()
