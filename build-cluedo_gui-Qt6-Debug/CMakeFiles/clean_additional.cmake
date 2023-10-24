# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/cluedo_gui_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/cluedo_gui_autogen.dir/ParseCache.txt"
  "cluedo_gui_autogen"
  )
endif()
