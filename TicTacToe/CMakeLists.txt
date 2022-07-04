cmake_minimum_required(VERSION 3.22)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 20)

add_executable(TicTacToe main.cpp src/Game.cpp src/Game.h src/Board.cpp src/Board.h src/Player.cpp src/Player.h)
