//
// Created by nidionis on 31/03/25.
//

#include "Zombie.h"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::Zombie(void) {
    this->name = "default_name";
}

Zombie::~Zombie() {
    std::cout << this->name << ": Ciaoooo !" << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

std::string Zombie::getName(void) {
    return this->name;
}

Zombie* zombieHorde( int N, std::string name ) {
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombies[i].setName(name + std::to_string(i));
        std::cout << zombies[i].getName() << std::endl;
    }
    return zombies;
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}