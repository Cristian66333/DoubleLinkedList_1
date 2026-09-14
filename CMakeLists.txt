cmake_minimum_required(VERSION 4.3)
project(DoubleLinkedList_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(DoubleLinkedList_1 main.cpp
        Node.h
        DoubleLinkedList.cpp
        DoubleLinkedList.h
        Book.cpp
        Book.h)
