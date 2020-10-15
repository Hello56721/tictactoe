cmake_minimum_required(VERSION 3.16)

project("TicTacToe Terminal")

include_directories(
    "includes"
)

add_executable(
    "tictactoe"
    "src/main.cpp"
    "src/board.cpp"
)