#include <utility>
#include <cmath>
#include <random>
#include <iostream>
#include "../headers/player.h"

//Default atributes
#define DEFAULT_PG_SHOOT 4
#define DEFAULT_PG_HANDLE 5
#define DEFAULT_PG_DEFENSE 4
#define DEFAULT_PG_JUMP 1
#define DEFAULT_SG_SHOOT 5
#define DEFAULT_SG_HANDLE 4
#define DEFAULT_SG_DEFENSE 5
#define DEFAULT_SG_JUMP 2
#define DEFAULT_SF_SHOOT 3
#define DEFAULT_SF_HANDLE 3
#define DEFAULT_SF_DEFENSE 3
#define DEFAULT_SF_JUMP 3
#define DEFAULT_PF_SHOOT 2
#define DEFAULT_PF_HANDLE 3
#define DEFAULT_PF_DEFENSE 3
#define DEFAULT_PF_JUMP 5
#define DEFAULT_C_SHOOT 1
#define DEFAULT_C_HANDLE 1
#define DEFAULT_C_DEFENSE 4
#define DEFAULT_C_JUMP 4

//Default bonus atributes
#define PG_BONUS_SHOOT 5
#define PG_BONUS_HANDLE 5
#define PG_BONUS_DEFENSE 5
#define PG_BONUS_JUMP -2
#define SG_BONUS_SHOOT 5
#define SG_BONUS_HANDLE 4
#define SG_BONUS_DEFENSE 3
#define SG_BONUS_JUMP 0
#define SF_BONUS_SHOOT 4
#define SF_BONUS_HANDLE 3
#define SF_BONUS_DEFENSE 2
#define SF_BONUS_JUMP 2
#define PF_BONUS_SHOOT 2
#define PF_BONUS_HANDLE 2
#define PF_BONUS_DEFENSE 3
#define PF_BONUS_JUMP 3
#define C_BONUS_SHOOT -3
#define C_BONUS_HANDLE -5
#define C_BONUS_DEFENSE 5
#define C_BONUS_JUMP 5

Player::Player(std::string name, int number, double height, std::string position) {
    _height = height;
    _number = number;
    _name = std::move(name);
    _position = std::move(position);
    defineSpread();
    defineJumpGame();
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

double Player::defineShootGame() {

}

double Player::defineHandle() {

}

double Player::defineDefensiveGame() {

}

double Player::defineJumpGame() const{
    int centimeter = (int)(_height * 100);
    double defaultJump = Player::getDefaultAtribute(_position, "jump");
    double randomPercentBonus = Player::getRandomizerDefault(_position, "jump");
    double percentPreCalc = centimeter * (randomPercentBonus / 100);
    defaultJump = defaultJump + (defaultJump*(percentPreCalc / 100));
    return defaultJump;
}


// Atributes and Randomizer
int Player::getDefaultAtribute(const std::string& position, const std::string& type) {
    if(position == "PG"){
        if(type == "shoot"){
            return DEFAULT_PG_SHOOT;
        } else if(type == "handle"){
            return DEFAULT_PG_HANDLE;
        } else if(type == "defensive"){
            return DEFAULT_PG_DEFENSE;
        } else if(type == "jump"){
            return DEFAULT_PG_JUMP;
        }
    }

    if(position == "SG"){
        if(type == "shoot"){
            return DEFAULT_SG_SHOOT;
        } else if(type == "handle"){
            return DEFAULT_SG_HANDLE;
        } else if(type == "defensive"){
            return DEFAULT_SG_DEFENSE;
        } else if(type == "jump"){
            return DEFAULT_SG_JUMP;
        }
    }

    if(position == "SF"){
        if(type == "shoot"){
            return DEFAULT_SF_SHOOT;
        } else if(type == "handle"){
            return DEFAULT_SF_HANDLE;
        } else if(type == "defensive"){
            return DEFAULT_SF_DEFENSE;
        } else if(type == "jump"){
            return DEFAULT_SF_JUMP;
        }
    }

    if(position == "PF"){
        if(type == "shoot"){
            return DEFAULT_PF_SHOOT;
        } else if(type == "handle"){
            return DEFAULT_PF_HANDLE;
        } else if(type == "defensive"){
            return DEFAULT_PF_DEFENSE;
        } else if(type == "jump"){
            return DEFAULT_PF_JUMP;
        }
    }

    if(position == "C"){
        if(type == "shoot"){
            return DEFAULT_C_SHOOT;
        } else if(type == "handle"){
            return DEFAULT_C_HANDLE;
        } else if(type == "defensive"){
            return DEFAULT_C_DEFENSE;
        } else if(type == "jump"){
            return DEFAULT_C_JUMP;
        }
    }

    return 0;
}

int Player::getRandomizerDefault(const std::string &position, const std::string &type) {
    std::random_device rseed;
    std::mt19937 rng(rseed());

    if(position == "PG"){
        if(type == "shoot"){
            std::uniform_int_distribution<int> dist(-1,10);
            return dist(rng);
        } else if(type == "handle"){
            std::uniform_int_distribution<int> dist(0,15);
            return dist(rng);
        } else if(type == "defensive"){
            std::uniform_int_distribution<int> dist(-5,15);
            return dist(rng);
        } else if(type == "jump"){
            std::uniform_int_distribution<int> dist(-10,5);
            return dist(rng);
        }
    }

    if(position == "SG"){
        if(type == "shoot"){
            std::uniform_int_distribution<int> dist(0,20);
            return dist(rng);
        } else if(type == "handle"){
            std::uniform_int_distribution<int> dist(-2,10);
            return dist(rng);
        } else if(type == "defensive"){
            std::uniform_int_distribution<int> dist(-5,10);
            return dist(rng);
        } else if(type == "jump"){
            std::uniform_int_distribution<int> dist(-5,10);
            return dist(rng);
        }
    }

    if(position == "SF"){
        if(type == "shoot"){
            std::uniform_int_distribution<int> dist(-5,15);
            return dist(rng);
        } else if(type == "handle"){
            std::uniform_int_distribution<int> dist(-5,10);
            return dist(rng);
        } else if(type == "defensive"){
            std::uniform_int_distribution<int> dist(-7,5);
            return dist(rng);
        } else if(type == "jump"){
            std::uniform_int_distribution<int> dist(-3,15);
            return dist(rng);
        }
    }

    if(position == "PF"){
        if(type == "shoot"){
            std::uniform_int_distribution<int> dist(-7,10);
            return dist(rng);
        } else if(type == "handle"){
            std::uniform_int_distribution<int> dist(-7,15);
            return dist(rng);
        } else if(type == "defensive"){
            std::uniform_int_distribution<int> dist(-7,3);
            return dist(rng);
        } else if(type == "jump"){
            std::uniform_int_distribution<int> dist(-3,20);
            return dist(rng);
        }
    }

    if(position == "C"){
        if(type == "shoot"){
            std::uniform_int_distribution<int> dist(-10,5);
            return dist(rng);
        } else if(type == "handle"){
            std::uniform_int_distribution<int> dist(-10,5);
            return dist(rng);
        } else if(type == "defensive"){
            std::uniform_int_distribution<int> dist(-5,1);
            return dist(rng);
        } else if(type == "jump"){
            std::uniform_int_distribution<int> dist(-1,30);
            return dist(rng);
        }
    }

    return 0;
}

