cmake_minimum_required(VERSION 3.0)

project(algoritmiestrutturedati)

add_executable(algoritmiestrutturedati main.cpp lista.h lista.cpp pila.h pila.cpp)

install(TARGETS algoritmiestrutturedati RUNTIME DESTINATION bin)
