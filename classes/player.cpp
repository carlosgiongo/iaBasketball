#include <utility>
#include <cmath>
#include <iostream>
#include "../headers/player.h"

Player::Player(std::string name, int number, double height) {
    _height = height;
    _number = number;
    _name = std::move(name);
    defineSpread();
}

double Player::getSpread() const {
    return _spread;
}

void Player::defineSpread() {
    /* CALC INFOS
     *
     * diff = 30 - (the difference of the max heigth of a player and his current height) * %multiplier for 1cm of difference
     * final_percent = maximum percent of spread gain - diff
     *
     * */
    int centimeter = (int)(_height * 100);
    double diff = (30 - (215 - centimeter)) * 0.2997;
    double final_percent = 13.00 - diff;
    this->_spread = (centimeter + (centimeter * (final_percent / 100))) / 100;
}

