#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    
    public:
        void    guardGate();
        ScavTrap();
        ScavTrap(const std::string& name);
        ~ScavTrap();
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap& copy);

        void attack(const std::string& target);
};