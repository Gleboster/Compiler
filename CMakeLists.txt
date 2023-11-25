cmake_minimum_required(VERSION 3.26)
project(Compiler)

set(CMAKE_CXX_STANDARD 17)

add_executable(Compiler main.cpp)

include_directories(LexicalAnalysis)
add_subdirectory(lib/LexicalAnalysis)

target_link_libraries(Compiler LexicalAnalysis_lib)

include_directories(../GeneralType)
add_subdirectory(lib/GeneralType)

target_link_libraries(Compiler GeneralType_lib)

add_subdirectory(Google_tests)

