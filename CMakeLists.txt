cmake_minimum_required(VERSION 3.21)
project(Blockchain)

set(CMAKE_CXX_STANDARD 14)

add_executable(Blockchain main.cpp)
find_library(cryptopp libcryptopp cryptopp)
target_link_libraries(Blockchain LINK_PUBLIC ${cryptopp})
