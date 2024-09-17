# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\P25_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\P25_autogen.dir\\ParseCache.txt"
  "P25_autogen"
  )
endif()
