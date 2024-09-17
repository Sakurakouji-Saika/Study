# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\P32_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\P32_autogen.dir\\ParseCache.txt"
  "P32_autogen"
  )
endif()
