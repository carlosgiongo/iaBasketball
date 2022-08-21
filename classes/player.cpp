#include "../headers/player.h"

std::string Player::getName() {
    return _name;
}

Player::Player(std::string name, int number) {
    _number = number;
    _name = name;
}

