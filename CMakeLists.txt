cmake_minimum_required(VERSION 3.0)

project(algoritmiestrutturedati)

add_executable(algoritmiestrutturedati main.cpp lista.h lista.cpp collezione.h collezione.cpp vettore.h vettore.cpp)

install(TARGETS algoritmiestrutturedati RUNTIME DESTINATION bin)
