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

void Game::startGame() {

}
