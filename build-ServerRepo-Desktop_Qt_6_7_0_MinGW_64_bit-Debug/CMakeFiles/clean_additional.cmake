# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ServerRepo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ServerRepo_autogen.dir\\ParseCache.txt"
  "ServerRepo_autogen"
  )
endif()
