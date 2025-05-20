#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap default constructor called. Inherit from ClapTrap." << std::endl;
}


ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap constructor called." << std::endl;

}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called. Inherit from ClapTrap." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& copy)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    this->setName(copy.getName());
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->getHitPoints() > 0 || this->getEnergyPoints() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << this->getName() << " Hit Points: " << this->getHitPoints() << " Energy Points: " << this->getEnergyPoints() << std::endl;
        return;
    }
        std::cout << "There is nothing to do with this points for attack" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}