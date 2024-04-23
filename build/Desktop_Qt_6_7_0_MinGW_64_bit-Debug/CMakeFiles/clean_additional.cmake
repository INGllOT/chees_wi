# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\chees_wi_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\chees_wi_autogen.dir\\ParseCache.txt"
  "chees_wi_autogen"
  )
endif()
