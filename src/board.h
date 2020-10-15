#ifndef INCLUDED_board_h
#define INCLUDED_board_h

#include <vector>
#include <string>

namespace board {
    extern std::vector<std::vector<std::string>> positions;
    
    // Displays the board on screen
    void print();
}

#endif