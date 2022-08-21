cmake_minimum_required(VERSION 3.23)
project(teste)

set(CMAKE_CXX_STANDARD 23)

add_executable(teste main.cpp classes/player.cpp headers/player.h classes/court.cpp headers/court.h)
