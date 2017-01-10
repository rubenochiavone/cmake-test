# creates pseudo target common - a header-only library
# see https://cmake.org/cmake/help/v3.0/manual/cmake-buildsystem.7.html#interface-libraries
add_library(common INTERFACE)

# include directories
target_include_directories(common INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
