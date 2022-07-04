//
// Created by Sourabh Jaiswal on 4/7/22.
//

#include "Board.h"
#include <vector>

void Board::init(int size) {
    this->size = size;
    state = std::vector<std::vector<char>>(size);
    for(int i =0;i<size;i++) {
        state[i] = std::vector<char>(size, DEFAULT_TOKEN);
    }
}

bool Board::isWithInBounds(std::pair<int, int> pos) {
    if(pos.first >= size || pos.second >= size)
        return false;
    if(pos.first<0 || pos.second<0)
        return false;
    return true;
}

bool Board::isOccupied(std::pair<int, int> pos) {
    if(state[pos.first][pos.second]==DEFAULT_TOKEN)
        return false;
    return true;
}

void Board::updateBoard(char token, std::pair<int, int> pos) {
    state[pos.first][pos.second] = token;
}


