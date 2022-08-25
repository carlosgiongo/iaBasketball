//
// Created by Usuario on 21/08/2022.
//

#ifndef TESTE_PLAYER_H
#define TESTE_PLAYER_H
#include <string>

class Player {
    public:
        Player(std::string name, int number, double height);
        int _number;
        double _height;
        std::string _name;

        [[nodiscard]] double getSpread() const;
    private:
        double _spread = 0;
        void defineSpread();
};

#endif //TESTE_PLAYER_H
