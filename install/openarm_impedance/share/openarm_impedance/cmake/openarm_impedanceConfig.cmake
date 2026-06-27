# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_openarm_impedance_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED openarm_impedance_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(openarm_impedance_FOUND FALSE)
  elseif(NOT openarm_impedance_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(openarm_impedance_FOUND FALSE)
  endif()
  return()
endif()
set(_openarm_impedance_CONFIG_INCLUDED TRUE)

# output package information
if(NOT openarm_impedance_FIND_QUIETLY)
  message(STATUS "Found openarm_impedance: 0.0.0 (${openarm_impedance_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'openarm_impedance' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT openarm_impedance_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(openarm_impedance_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${openarm_impedance_DIR}/${_extra}")
endforeach()
