cmake_minimum_required(VERSION 3.26)
project(Employee_Management_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(Employee_Management_System main.cpp
        source/Console.cpp
        include/Console.h
        source/App.cpp
        include/App.h
        source/Database.cpp
        include/Database.h
        source/File.cpp
        include/File.h
        source/Constants.cpp
        include/Constants.h)
