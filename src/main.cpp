#include <iostream>

#include "board.h"

struct pos {
    int row;
    int colum;
};

pos getTurn() {
    std::cout << "which row: ";
    int row;
    std::cin >> row;
    std::cout << "which colum: ";
    int colum;
    std::cin >> colum;
    
    return {row, colum};
}

int main() {
    std::cout << "Welcome to Yue's Terminal based TicTacToe Game!\n";
    char shouldQuit;
    board::print();
    while (shouldQuit != 'y') {
        std::cout << "Player 1, your turn" << std::endl;
        pos player1 = getTurn();
        board::positions[player1.row][player1.colum] = "X";
        board::print();
        
        std::cout << "Player 2, your turn" << std::endl;
        pos player2 = getTurn();
        board::positions[player2.row][player2.colum] = "O";
        board::print();
        
        std::cout << "Quit?(y/n) ";
        std::cin >> shouldQuit;
    }
    return 0;
}