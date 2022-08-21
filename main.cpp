#include <iostream>
#include "headers/player.h"
#include "headers/court.h"

int main() {
    Court court;
    Player player1 = Player("João", 1);
    Player player2 = Player("Maria", 2);

    std::list<Player> team1 = {player1, player2};
    court.addTeam(team1);

    std::cout << court.team_1.size() << std::endl;
    std::cout << court.team_2.size() << std::endl;
    return 0;
}
