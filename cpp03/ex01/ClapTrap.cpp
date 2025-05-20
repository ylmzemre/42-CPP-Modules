#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	
	setName("Default");
	setHitPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){

	setName(name);
	setHitPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);
	std::cout << "ClapTrap constructor called" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &c){

    (*this) = c;
    std::cout << "ClapTrap copy constructor called" << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap &c){

    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->name = c.getName();
    this->HitPoints = c.getHitPoints();
    this->EnergyPoints = c.getEnergyPoints();
    this->AttackDamage = c.getAttackDamage();
    return (*this);
}

void ClapTrap::setName(const std::string& newName){

	this->name = newName;
}

void ClapTrap::setHitPoints(int amount){

	this->HitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount){

	this->EnergyPoints = amount;
}

void ClapTrap::setAttackDamage(int amount){

	this->AttackDamage = amount;
}

ClapTrap::~ClapTrap(){

    std::cout << "ClapTrap destructor called" << std::endl;

}

std::string ClapTrap::getName()const{
	return this->name;
}

int ClapTrap::getAttackDamage()const{
	return this->AttackDamage;
}

int ClapTrap::getEnergyPoints()const{
	return this->EnergyPoints;
}

int ClapTrap::getHitPoints()const{
	return this->HitPoints;
}

void ClapTrap::attack(const std::string& target){

	if (this->EnergyPoints > 0 && this->HitPoints > 0){
		std::cout << this->name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
		std::cout << this->name << " Energy Points: " << this->getEnergyPoints() << std::endl;
		return;
	}
	std::cout << "There is nothing to do with this points for attack" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount){
   
    if (HitPoints <= 0)
        return;
	if(this->HitPoints <= (int)amount)
	{
		std::cout << this->name << " is died" << std::endl;
		this->HitPoints -= amount;
		return;
	}
	this->HitPoints -= amount;
	std::cout << this->name << " has take damage " << amount << " point of damage " << std::endl;
	std::cout << this->name << " Hit Points: " << this->getHitPoints() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	
	if(HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout << "There is no energy or hit point for repaired." << std::endl;
        return ;
    }

	else{
		HitPoints += amount;
		EnergyPoints--;
		std::cout << this->name << " has repaired " << std::endl;
		std::cout << this->name << " Hit Points: " << this->getHitPoints() << " Energy Points: " << this->getEnergyPoints() << std::endl;
	}
}