#include <iostream>

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