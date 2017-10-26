cmake_minimum_required(VERSION 2.8.8)
project(CocoaTest)

add_subdirectory(extern)

set(GLAD
  "${GLFW_SOURCE_DIR}/deps/glad/glad.h"
  "${GLFW_SOURCE_DIR}/deps/glad.c"
  )

add_executable(
  CocoaTest
  MACOSX_BUNDLE
  AppDelegate.h
  AppDelegate.mm
  GLFWTest.h
  GLFWTest.cpp
  main.mm
  MainMenu.xib
  ${GLAD}
  )


target_include_directories(CocoaTest
  PRIVATE
  ${glfw_INCLUDE_DIRS}
  "${GLFW_SOURCE_DIR}/deps"
  )


target_link_libraries(CocoaTest glfw)  




set_source_files_properties(
    MainMenu.xib
    PROPERTIES
    MACOSX_PACKAGE_LOCATION
    Resources
)

set_target_properties(
    CocoaTest
    PROPERTIES
    MACOSX_BUNDLE_INFO_PLIST
    ${CMAKE_CURRENT_LIST_DIR}/plist.in
)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -framework AppKit")
