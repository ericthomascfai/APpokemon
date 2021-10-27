cmake_minimum_required(VERSION 3.20)
project(AP_pokemon)

set(CMAKE_CXX_STANDARD 14)

add_executable(AP_pokemon main.cpp Dresseur.cpp Dresseur.h Pokemon.cpp Pokemon.h Attaque.cpp Attaque.h)
