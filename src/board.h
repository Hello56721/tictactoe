#ifndef INCLUDED_board_h
#define INCLUDED_board_h

#include <vector>
#include <string>
#include <string_view>

namespace board {
    extern std::vector<std::vector<std::string>> positions;
    
    // Displays the board on screen
    void print();
    
    // Returns if the marker type is a winner
    bool isWinner(std::string_view player);
}

#endif