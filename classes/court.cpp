#include <stdexcept>
#include <iostream>
#include "../headers/court.h"

bool Court::addTeam(const Team& team) {
    if(team._players.size() != 10) {
        std::cout << "[ERROR] Team must have 10 players. Detected:" << team._players.size() << " by " << team._name << std::endl;
        return false;
    }

    if(_team1._name.empty()) {
        std::cout << "[INFO] Team " << team._name << " added as team 1" << std::endl;
        _team1 = team;
        return true;
    }

    if(_team2._name.empty()) {
        std::cout << "[INFO] Team " << team._name << " added as team 2" << std::endl;
        _team2 = team;
        return true;
    }

    else {
        std::cout << "[ERROR] Court already has two teams. Cannot add " << team._name << std::endl;
        return false;
    }
}
