# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appGameServer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appGameServer_autogen.dir\\ParseCache.txt"
  "appGameServer_autogen"
  )
endif()
