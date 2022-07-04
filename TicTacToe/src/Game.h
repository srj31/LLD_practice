//
// Created by Sourabh Jaiswal on 4/7/22.
//

#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H
#include <queue>
#include "Board.h"
#include "Player.h"


class Game {

public:
    Game(){}
    Game createGame();
    void startGame();
    void addPlayer();

private:
    int num_players;
    Board board;
    std::queue<Player> players_turn_queue;
};


#endif //TICTACTOE_GAME_H
