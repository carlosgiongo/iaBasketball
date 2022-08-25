#include <iostream>
#include "headers/player.h"
#include "headers/court.h"

 int main() {
    //Simulation
    Court court;

    std::list<Player> players_1 = {
            Player("Player 1", 1, 1.85),
            Player("Player 2", 2, 1.90),
            Player("Player 3", 3, 2.00),
            Player("Player 4", 4, 2.03),
            Player("Player 5", 5, 2.10),
            Player("Player 6", 6, 1.85),
            Player("Player 7", 7, 1.90),
            Player("Player 8", 8, 2.00),
            Player("Player 9", 9, 2.03),
            Player("Player 10", 10, 2.05),
    }; Team team1("OESC", players_1);

     std::list<Player> players_2 = {
             Player("Player 1", 1, 1.85),
             Player("Player 2", 2, 1.90),
             Player("Player 3", 3, 2.00),
             Player("Player 4", 4, 2.03),
             Player("Player 5", 5, 2.10),
             Player("Player 6", 6, 1.85),
             Player("Player 7", 7, 1.90),
             Player("Player 8", 8, 2.00),
             Player("Player 9", 9, 2.03),
             Player("Player 10", 10, 2.05),
     }; Team team2("Oponnent", players_2);

    // UDP server will receive:
    court.addTeam(team1);
    court.addTeam(team2);
}
