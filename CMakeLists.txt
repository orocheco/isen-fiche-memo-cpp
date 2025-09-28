cmake_minimum_required(VERSION 4.1)
project(fiche_memo)

set(CMAKE_CXX_STANDARD 20)

add_executable(fiche_memo main.cpp
        src/Etudiant.cpp
        src/Etudiant.h)
