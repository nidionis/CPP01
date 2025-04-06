//
// Created by nidionis on 01/04/25.
//

#ifndef CPP01_WEAPON_H
# define CPP01_WEAPON_H
# include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon(std::string type);
    ~Weapon();
    std::string const &getType() const;
    void setType(std::string type);
};

#endif //CPP01_WEAPON_H
