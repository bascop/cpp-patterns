#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cpp-patterns::cpp-patterns" for configuration "Debug"
set_property(TARGET cpp-patterns::cpp-patterns APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(cpp-patterns::cpp-patterns PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libcpp-patterns.so"
  IMPORTED_SONAME_DEBUG "libcpp-patterns.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cpp-patterns::cpp-patterns )
list(APPEND _IMPORT_CHECK_FILES_FOR_cpp-patterns::cpp-patterns "${_IMPORT_PREFIX}/lib/libcpp-patterns.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)