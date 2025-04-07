//
// Created by nidionis on 07/04/25.
//

#include "Harl.h"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() { std::cout << "That joke really took me out on a log-ical journey!"; }
void Harl::info() { std::cout << "if you think these log puns are good, you’re knot alone"; }
void Harl::warning() { std::cout << "Knock Knock Fun Knock knock. Whos there? Log. Log who? Log-time no see."; }
void Harl::error() { std::cout << "Secret Keepers Logs are bad at secrets; when they speak they timber their words."; }

void Harl::complain(std::string level) {
    void (Harl::*f[NB_FT])(void) = {
            &Harl::debug,
            &Harl::info,
            &Harl::error,
            &Harl::warning
    };
    std::string levels[NB_FT] = {
        "debug",
        "info",
        "warning",
        "error"
    };
    for (int i = 0; i < NB_FT; i++) {
        if (level == levels[i])
            (this->*f[i])();
    }
}