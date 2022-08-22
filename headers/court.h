#ifndef TESTE_COURT_H
#define TESTE_COURT_H


#include <list>
#include "player.h"
#include "team.h"

class Court {
public:
    // Atributes
    float length = 28.65;
    float width = 15.24;
    Team _team1 = Team("", std::list<Player>());
    Team _team2 = Team("", std::list<Player>());
    std::list<float> start_position = { 14.325, 7.62 };

    // Methods
    bool addTeam(const Team& team);
};


#endif
