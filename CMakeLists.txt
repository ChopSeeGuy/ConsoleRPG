cmake_minimum_required(VERSION 3.10.2)

configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)

execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )

if(result)
  message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()

execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )

if(result)
  message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
                 ${CMAKE_BINARY_DIR}/googletest-build
                 EXCLUDE_FROM_ALL)

if (CMAKE_VERSION VERSION_LESS 2.8.11)
  include_directories("${gtest_SOURCE_DIR}/include")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(ConsoleRPG)

set(SRC_LIST
    src/main.cpp
    src/Game.cpp 
)

include_directories(header)
add_library(${PROJECT_NAME}-lib ${SRC_LIST})
add_executable(${PROJECT_NAME} src/main.cpp)
target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Werror -Wpedantic -Wextra)

if (UNIX)
    target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib pthread)
else (UNIX)
    target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
endif (UNIX)

set(GTEST_SRC_LIST
    tests_gtest/main_test.cpp
    tests_gtest/GameTests.cpp
)

link_libraries(gtest)
link_libraries(gmock)
add_executable(${PROJECT_NAME}-gtest ${GTEST_SRC_LIST})
target_compile_options(${PROJECT_NAME}-gtest PUBLIC -Wall -Werror -Wpedantic -Wextra)
target_link_libraries(${PROJECT_NAME}-gtest ${PROJECT_NAME}-lib)

set(CATCH_SRC_LIST
    tests_catch/GameTests.cpp
)

add_executable(${PROJECT_NAME}-catch ${CATCH_SRC_LIST})
target_compile_options(${PROJECT_NAME}-catch PUBLIC -Wall -Werror -Wpedantic -Wextra)
target_link_libraries(${PROJECT_NAME}-catch ${PROJECT_NAME}-lib)
