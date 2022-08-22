#include "../headers/team.h"

Team::Team(std::string name, std::list<Player> players) {
    this->_name = name;
    this->_players = players;
}
