cmake_minimum_required(VERSION 3.28)
project(HashTableLogin)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)  # Fix for Windows Console Application

add_executable(HashTableLogin md5_wrapper.cpp
        md5_wrapper.h
        hash_table.cpp
        hash_table.h
        md5.h
        md5.cpp
        user.h
        main.cpp
)
