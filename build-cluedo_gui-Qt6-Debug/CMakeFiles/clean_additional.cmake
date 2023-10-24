# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
<<<<<<<< HEAD:build-cluedo_gui-Qt6-Debug/CMakeFiles/clean_additional.cmake
  "CMakeFiles/cluedo_gui_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/cluedo_gui_autogen.dir/ParseCache.txt"
  "cluedo_gui_autogen"
========
  "CMakeFiles\\UnitTest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\UnitTest_autogen.dir\\ParseCache.txt"
  "UnitTest_autogen"
>>>>>>>> DuncanBranch:build-UnitTests-Desktop_Qt_6_5_2_MinGW_64_bit-Debug/CMakeFiles/clean_additional.cmake
  )
endif()
