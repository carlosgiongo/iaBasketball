#ifndef TESTE_COURT_H
#define TESTE_COURT_H


#include <list>
#include "player.h"

class Court {
public:
    float length = 28.65;
    float width = 15.24;
    std::list<float> start_position = { 14.325, 7.62 };
    std::list<Player> team_1;
    std::list<Player> team_2;

    void addTeam(const std::list<Player>&);
};


#endif
