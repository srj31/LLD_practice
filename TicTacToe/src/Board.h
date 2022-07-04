//
// Created by Sourabh Jaiswal on 4/7/22.
//

#ifndef TICTACTOE_BOARD_H
#define TICTACTOE_BOARD_H
#pragma once
#include <vector>

class Board {
public:
    Board createBoard(){}
private:
    int size;
    std::vector<std::vector<int> > state;
};


#endif //TICTACTOE_BOARD_H
