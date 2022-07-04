//
// Created by Sourabh Jaiswal on 4/7/22.
//
#pragma once
#include "iostream"
#include "string"
#include "Game.h"

Game Game::createGame() {
    int numberOfPlayers;
    std::cout << "Enter number of Players" << std::endl;
    cin >> numberOfPlayers;

    for(int i =0;i<numberOfPlayers;i++) {
        addPlayer();
    }
    int size;
    std::cout<< "Enter the size of board" << std::endl;
    cin >> size;
    board.init(size);

    Game::startGame();
}

void Game::addPlayer() {
    string name;
    char token;
    std::cout<< "Enter Player Name:" << std::endl;
    cin >> name;

    std::cout<< "Enter token to use:" << std::endl;
    cin >> token;

    std::cout<< std::endl;

    Player player(name, token);
    Game::players_turn_queue.push(player);
}

status Game::turnPlayed(Player player, pair<int, int> pos) {
    if (board.isAllowed(pos)) {

        board.updateBoard(player.getToken(), pos);

        players_turn_queue.pop();
        players_turn_queue.push(player);
        board.displayBoard();

        return checkBoardStatus();
    } else {
        cout << "Not Allowed Try again" << endl;
    }
    return status::ONGOING;
}

void Game::startGame() {
    board.displayBoard();
    while (cur_status == status::ONGOING) {
        pair<int,int> pos;
        Player cur_player = players_turn_queue.front();

        cout << "Player: " << cur_player.getName() << "plays" << endl;
        cout <<"Choose Row" << endl;
        cin >> pos.first;
        cout << "Choose Col" << endl;
        cin >> pos.second;
        cur_status = turnPlayed(cur_player, pos);
    }

    cout << "GAME ENDED" << endl;

}

status Game::checkBoardStatus() {

    bool isThereAWinner = false;
    // check row
    for(int i =0;i<board.getSize();i++) {
        bool isCurRowWinning = true;
        char possibleWinner = board.getState()[i][0];
        if(possibleWinner == board.DEFAULT_TOKEN) {
            isCurRowWinning == false;
            break;
        }

        for(int j = 1;j < board.getSize();j++) {
            if(board.getState()[i][j]!=possibleWinner) {
                isCurRowWinning = false;
                break;
            }
        }

        if(isCurRowWinning) {
            cerr << "Player WON on Row" << endl;
            return status::PLAYER_WON;
        }
    }

    // check col
    for(int i =0;i<board.getSize();i++) {
        bool isCurColWinning = true;
        char possibleWinner = board.getState()[0][i];
        if(possibleWinner == board.DEFAULT_TOKEN) {
            isCurColWinning == false;
            break;
        }

        for(int j = 1;j < board.getSize();j++) {
            if(board.getState()[j][i]!=possibleWinner) {
                isCurColWinning = false;
                break;
            }
        }

        if(isCurColWinning) {
            cerr << "Player won on Cul" << endl;
            return status::PLAYER_WON;
        }
    }

    return status::ONGOING;
}
