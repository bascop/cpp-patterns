#----------------------------------------------------------------
# Generated CMake target import file for configuration "RELEASE".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cpp_patterns" for configuration "RELEASE"
set_property(TARGET cpp_patterns APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cpp_patterns PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcpp_patterns.so"
  IMPORTED_SONAME_RELEASE "libcpp_patterns.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cpp_patterns )
list(APPEND _IMPORT_CHECK_FILES_FOR_cpp_patterns "${_IMPORT_PREFIX}/lib/libcpp_patterns.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
