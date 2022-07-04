//
// Created by Sourabh Jaiswal on 4/7/22.
//

#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H
#include <queue>
#include "Board.h"
#include "Player.h"

enum status {PLAYER_WON, DRAW, ONGOING};
class Game {

public:
    Game(){}
    Game createGame();
    void startGame();
    void addPlayer();
    status checkBoardStatus();
    status turnPlayed(Player player, pair<int,int> pos);

private:
    int num_players;
    Board board;
    std::queue<Player> players_turn_queue;
    status cur_status = status::ONGOING;
};


#endif //TICTACTOE_GAME_H
