//
// Created by Sourabh Jaiswal on 4/7/22.
//

#ifndef TICTACTOE_BOARD_H
#define TICTACTOE_BOARD_H
#pragma once
#include <iostream>
#include <vector>

class Board {
public:
    char const DEFAULT_TOKEN = '.';

    void init(int size);
    void updateBoard(char token, std::pair<int,int> pos);
    void displayBoard() {
        for(int i = 0;i < size;i++) {
            for(int j = 0;j<size;j++) {
                std::cout << state[i][j] << " ";
            }
            std::cout<< std::endl;
        }
    }

    bool isWithInBounds(std::pair<int,int> pos);
    bool isOccupied(std::pair<int,int> pos);
    bool isAllowed(std::pair<int,int>pos) {
        return isWithInBounds(pos) && !isOccupied(pos);
    }

    int getSize() {
        return size;
    }

    std::vector<std::vector<char> > getState() {
        return state;
    }

private:
    int size;
    std::vector<std::vector<char> > state;
};


#endif //TICTACTOE_BOARD_H
