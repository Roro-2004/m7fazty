# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\m7fazty_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\m7fazty_autogen.dir\\ParseCache.txt"
  "m7fazty_autogen"
  )
endif()
