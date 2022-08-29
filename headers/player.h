//
// Created by Usuario on 21/08/2022.
//

#ifndef TESTE_PLAYER_H
#define TESTE_PLAYER_H
#include <string>

class Player {
    public:
        Player(std::string name, int number, double height, std::string position);
        int _number;
        double _height;
        std::string _name;
        std::string  _position;

        double defineShootGame();
        double defineHandle();
        double defineDefensiveGame();
        double defineJumpGame() const;

        static int getDefaultAtribute(const std::string& position, const std::string& type);
        static int getRandomizerDefault(const std::string& position, const std::string& type);
    private:
        double _spread = 0;
        void defineSpread();
};

#endif //TESTE_PLAYER_H
