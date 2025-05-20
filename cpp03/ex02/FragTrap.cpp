#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap constructor called. Inherit from ClapTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap constructor called. Inherit from ClapTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap& copy)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    this->setName(copy.getName());
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap deconstructor called. Inherit from ClapTrap" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "This is high fives guys." << std::endl;
}
