# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Kurokawa_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Kurokawa_autogen.dir\\ParseCache.txt"
  "Kurokawa_autogen"
  )
endif()
