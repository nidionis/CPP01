//
// Created by nidionis on 31/03/25.
//

#include "Zombie.h"

Zombie *newZombie(std::string name) {
    return new Zombie(name);
}
