//
// Created by Sourabh Jaiswal on 4/7/22.
//

#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H
#include <vector>
#include "Board.h"
#include "Player.h"


class Game {

private:
    int num_players;
    Board board;
    std::vector<Player> players;
};


#endif //TICTACTOE_GAME_H
