//
// Created by nidionis on 06/04/25.
//

#ifndef CPP01_HUMANA_H
#define CPP01_HUMANA_H
# include <iostream>
# include "Weapon.h"

class HumanA {
    std::string name;
    Weapon &weapon;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void attack(void);
};

#endif //CPP01_HUMANA_H
