#include <iostream>
#include <string_view>

#include "board.h"

std::vector<std::vector<std::string>> board::positions(3, std::vector<std::string>(3, " "));

void board::print() {
    std::cout << "  0   1   2" << std::endl;;
    std::cout << "0 " << positions[0][0] << " | " << positions[0][1] << " | " << positions[0][2] << std::endl;
    std::cout << " -----------" << std::endl;
    std::cout << "1 " << positions[1][0] << " | " << positions[1][1] << " | " << positions[1][2] << std::endl;
    std::cout << " -----------" << std::endl;
    std::cout << "2 " << positions[2][0] << " | " << positions[2][1] << " | " << positions[2][2] << std::endl;
}

bool board::isWinner(const std::string& player) {
    for (unsigned int i =0; i < 3; i++) {
        if (positions[i][0] == player.data()) {
            if (positions[i][1] == player.data()) {
                if (positions[i][2] == player.data()) {
                    return true;
                }
            }
        }
        if (positions[0][i] == player.data()) {
            if (positions[1][i] == player.data()) {
                if (positions[2][i] == player.data()) {
                    return true;
                }
            }
        }
    }
    
    if (positions[0][0] == player.data()) {
        if (positions[1][1] == player.data()) {
            if (positions[2][2] == player.data()) {
                return true;
            }
        }
    }
    if (positions[0][2] == player.data()) {
        if (positions[1][1] == player.data()) {
            if (positions[2][0] == player.data()) {
                return true;
            }
        }
    }
    
    return false;
}

bool board::isTie() {
    for (unsigned int i = 0; i < 3; i++) {
        for (unsigned int j = 0; j < 3; j++) {
            if (positions[i][j] == " ") {
                return false;
            }
        }
    }
    
    return true;
}