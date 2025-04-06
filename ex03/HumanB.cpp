//
// Created by nidionis on 06/04/25.
//

#include "HumanB.h"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr)  {}

HumanB::~HumanB() {}

void    HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType()
              << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}
