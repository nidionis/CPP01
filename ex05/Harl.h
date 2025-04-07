//
// Created by nidionis on 07/04/25.
//

#ifndef CPP01_HARL_H
# define CPP01_HARL_H
# include <iostream>
# define NB_FT 4


class Harl {
public:
    Harl(void);
    ~Harl(void);

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    void complain(std::string level);
};


#endif //CPP01_HARL_H
