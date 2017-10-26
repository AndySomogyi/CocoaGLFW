# build glfw here, set up variables so magnum does not try to find it
add_subdirectory(glfw)

set(GLFW_Found YES)

# glfw does not set it's target include directories, but it turns out we
# can set them after the glfw subproject is processed.
# This approach enables us to simply target_link_libraries(MyProgram glfw), and
# all the glfw include directories automatically get added to the MyProgram.
target_include_directories(glfw PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/glfw/include/GLFW>
  )

target_include_directories(glfw PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/glfw/deps>
  )

# magnum likes these names:
#  GLFW::GLFW               - GLFW imported target
#  GLFW_LIBRARY             - GLFW library
#  GLFW_INCLUDE_DIR         - Root include dir
#
add_library(GLFW::GLFW ALIAS glfw)


set(BUILD_STATIC ON CACHE BOOL "build as static libraries for now..." FORCE)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "build as static libraries for now..." FORCE)
