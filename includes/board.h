#ifndef INCLUDED_board_h
#define INCLUDED_board_h

#include <vector>
#include "position.h"

namespace board {
    extern std::vector<std::vector<position>> positions;
    
    // Displays the board on screen
    void print();
}

#endif