#include <iostream>
#include "headers/player.h"
#include "headers/court.h"

 int main() {
    //Simulation
    Court court;

    std::list<Player> players = {
            Player("Player 1", 1),
            Player("Player 2", 2),
            Player("Player 3", 3),
            Player("Player 4", 4),
            Player("Player 5", 5),
            Player("Player 6", 6),
            Player("Player 7", 7),
            Player("Player 8", 8),
            Player("Player 9", 9),
            Player("Player 10", 10),
    };

    Team team1("OESC", players);

    // UDP server will receive:
    court.addTeam(team1);
}
