//
// Created by nidionis on 06/04/25.
//

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack(void) {
    std::cout << this->name << " attacks with their " << this->weapon.getType()
              << std::endl;
}