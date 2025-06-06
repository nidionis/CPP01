//
// Created by nidionis on 01/04/25.
//

#include "Weapon.h"

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon() {}

const std::string &Weapon::getType() const { return type; }

void Weapon::setType(const std::string type) { this->type = type; }