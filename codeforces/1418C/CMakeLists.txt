cmake_minimum_required(VERSION 3.15)

include(${CMAKE_ROOT}/Modules/ExternalProject.cmake)

project(1418C)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# Add gtest
ExternalProject_Add(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest
        GIT_TAG release-1.10.0
        TIMEOUT 10
        # Force separate output paths for debug and release builds to allow easy
        # identification of correct lib in subsequent TARGET_LINK_LIBRARIES commands
        CMAKE_ARGS -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG:PATH=DebugLibs
        -DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE:PATH=ReleaseLibs
        -Dgtest_force_shared_crt=ON
        # Disable install step
        INSTALL_COMMAND ""
        # Wrap download, configure and build steps in a script to log output
        LOG_DOWNLOAD ON
        LOG_CONFIGURE ON
        LOG_BUILD ON)

# Specify include dir
ExternalProject_Get_Property(googletest source_dir)

include_directories(${source_dir}/googletest/include)
include_directories(${source_dir}/googlemock/include)

add_executable(main main.cpp)

add_executable(test main.cpp tests/TestClass.h test.h test.cpp tests/TestClass.cpp)

add_dependencies(test googletest)

target_compile_definitions(test PRIVATE TESTING=1)

target_link_libraries(test
        debug ${source_dir}/../googletest-build/googletest/DebugLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gtestd.a
        debug ${source_dir}/../googletest-build/googletest/DebugLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gtest_maind.a
        debug ${source_dir}/../googletest-build/googlemock/DebugLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gmockd.a
        debug ${source_dir}/../googletest-build/googlemock/DebugLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gmock_maind.a)