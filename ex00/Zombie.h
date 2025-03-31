//
// Created by nidionis on 31/03/25.
//

#ifndef CPP01_ZOMBIE_H
# define CPP01_ZOMBIE_H
# include <iostream>

class Zombie {
    private:
    std::string name;
    public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif //CPP01_ZOMBIE_H
