cmake_minimum_required(VERSION 3.25)
project(checkers_games)

set(CMAKE_CXX_STANDARD 17)

add_executable(checkers_games main.c include/init_Board.h include/affichage.h include/verif.h include/game.h)
