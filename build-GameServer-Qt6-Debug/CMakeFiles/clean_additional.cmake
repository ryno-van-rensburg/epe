# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/GameServer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/GameServer_autogen.dir/ParseCache.txt"
  "GameServer_autogen"
  )
endif()
