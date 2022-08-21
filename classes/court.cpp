#include "../headers/court.h"

void Court::addTeam(const std::list<Player>& players) {
    if(team_1.empty()) {
        team_1 = players;
    } else {
        team_2 = players;
    }
}
