//
// Created by Sourabh Jaiswal on 4/7/22.
//

#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H

#include <string>

using namespace std;

class Player {
public:
    Player(string name, char token);
    string getName(){return name;}
    char getToken(){return token;}
private:
    string name;
    char token;
};


#endif //TICTACTOE_PLAYER_H
