cmake_minimum_required(VERSION 3.10)
project(ex1BUT)

# Ajouter les fichiers source
set(SOURCES
    src/main.cpp
    src/Calculator.cpp
    src/tests.cpp
)

# Ajouter les fichiers include
include_directories(include)

# Générer l'exécutable
add_executable(roresroses_calculator ${SOURCES})
