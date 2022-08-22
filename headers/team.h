#ifndef TESTE_TEAM_H
#define TESTE_TEAM_H

#include <list>
#include "player.h"

class Team {
public:
    // Constructor
    Team(std::string, std::list<Player>);

    // Atributes
    std::string _name;
    std::list<Player> _players;
};


#endif //TESTE_TEAM_H
