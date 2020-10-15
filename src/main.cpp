#include <iostream>

#include "board.h"

int main() {
    std::cout << "Welcome to Yue's Terminal based TicTacToe Game!\n";
    char shouldQuit;
    while (shouldQuit != 'y') {
        std::cout << "Player 1, your turn" << std::endl;
        std::cout << "which row: ";
        int row;
        std::cin >> row;
        std::cout << "which colum: ";
        int colum;
        std::cin >> colum;
        
        board::positions[row][colum] = "X";
        board::print();
        
        std::cout << "Quit?(y/n) ";
        std::cin >> shouldQuit;
    }
    return 0;
}