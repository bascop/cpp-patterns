#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cpp_patterns" for configuration "Debug"
set_property(TARGET cpp_patterns APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(cpp_patterns PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libcpp_patterns.so"
  IMPORTED_SONAME_DEBUG "libcpp_patterns.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cpp_patterns )
list(APPEND _IMPORT_CHECK_FILES_FOR_cpp_patterns "${_IMPORT_PREFIX}/lib/libcpp_patterns.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
