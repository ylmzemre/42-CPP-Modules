

#include "Harl.hpp"

Harl::Harl() {

    std::cout << "Harl is here!" << std::endl;
}

Harl::~Harl() {

    std::cout << "Harl is leaving!" << std::endl;
}

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
    std::endl(std::cout);
}

void Harl::info(void) {
    std::cout << "[ INFO ]"  << std::endl;
    std::cout << "I can't believe adding extra bacon cost more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
    std::endl(std::cout);
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::endl(std::cout);
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::endl(std::cout);
}

void Harl::complain(std::string level) {
    void (Harl::*complaints[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (!levels[i].empty() && level.compare(levels[i]))
		i++;
    switch (i)
    {
        case 0:
            (this->*complaints[0])();
        case 1:
            (this->*complaints[1])();
        case 2:
            (this->*complaints[2])();
        case 3:
            (this->*complaints[3])();
            break;
        default:
            std::cout << "Wrong Arguments" << std::endl;
            break;
    }
}
