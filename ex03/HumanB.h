//
// Created by nidionis on 06/04/25.
//

#ifndef CPP01_HUMANB_H
#define CPP01_HUMANB_H

#include "Weapon.h"

class HumanB {
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);
};


#endif //CPP01_HUMANB_H
