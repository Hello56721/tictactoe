cmake_minimum_required(VERSION 3.16)

project("TicTacToe Terminal")

set(CMAKE_CXX_STANDARD 17)

include_directories(
    "includes"
)

add_compile_options("-Wall" "-g3")
add_link_options("-Wall" "-g3")

add_executable(
    "tictactoe"
    "src/main.cpp"
    "src/board.cpp"
)