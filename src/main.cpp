#include <iostream>
#include <string_view>

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

void play(pos position, std::string_view marker) {
    if (board::positions[position.row][position.colum] != " ") {
        std::cout << "Hey! That position already has a piece!" << std::endl;
        return;
    }
    board::positions[position.row][position.colum] = marker;
    board::print();
}

int main() {
    char shouldQuit = 'n';
    bool isXWinner;
    bool isOWinner;
    
    std::cout << "Welcome to Yue's Terminal based TicTacToe Game!\n";
    board::print();
    while (shouldQuit != 'y') {
        std::cout << "Player 1, your turn" << std::endl;
        play(getTurn(), "X");
        isXWinner = board::isWinner("X");
        if (isXWinner || isOWinner) {
            break;
        }
        
        std::cout << "Quit?(y/n) ";
        std::cin >> shouldQuit;
        if (shouldQuit == 'y')
            continue;
        
        std::cout << "Player 2, your turn" << std::endl;
        play(getTurn(), "O");
        isOWinner = board::isWinner("O");
        if (isXWinner || isOWinner) {
            break;
        }
        
        std::cout << "Quit?(y/n) ";
        std::cin >> shouldQuit;
    }
    
    if (isXWinner) {
        std::cout << "Player 1 wins!" << std::endl;
        std::cin.ignore();
        std::cin.ignore();
    }
    if (isOWinner) {
        std::cout << "Player 2 wins!" << std::endl;
        std::cin.ignore();
        std::cin.ignore();
    }
    
    return 0;
}