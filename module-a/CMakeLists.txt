# creates shared library modulea
add_library(modulea SHARED src/a.cpp)

# add modulea include directories
target_include_directories(modulea PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)

# define library version
set_target_properties(modulea PROPERTIES
        VERSION 1.0)

# link with common header-only library
# see https://cmake.org/cmake/help/v3.0/manual/cmake-buildsystem.7.html#interface-libraries
target_link_libraries(modulea common)

# install
install(TARGETS modulea
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib)
