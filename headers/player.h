//
// Created by Usuario on 21/08/2022.
//

#ifndef TESTE_PLAYER_H
#define TESTE_PLAYER_H
#include <string>

class Player {
public:
    // Constructor
    Player(std::string name, int number);

    // Atributes
    int _number;
    std::string _name;

    // Methods
    std::string getName();
};

#endif //TESTE_PLAYER_H
