# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/networking_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/networking_autogen.dir/ParseCache.txt"
  "CMakeFiles/testclient_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/testclient_autogen.dir/ParseCache.txt"
  "networking_autogen"
  "testclient_autogen"
  )
endif()
