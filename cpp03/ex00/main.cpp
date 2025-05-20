#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Melisa");
	std::cout << "Name: "<< a.getName() << " ";
	std::cout << "Hit Points: " << a.getHitPoints() << " ";
	std::cout << "Energy Points: " << a.getEnergyPoints() << " ";
	std::cout << "Attack Damage: " << a.getAttackDamage() << std::endl;

	ClapTrap b("Sinan");
	std::cout << "Name: "<< b.getName() << " ";
	std::cout << "Hit Points: " << b.getHitPoints() << " ";
	std::cout << "Energy Points: " << b.getEnergyPoints() << " ";
	std::cout << "Attack Damage: " << b.getAttackDamage() << std::endl;

	a.attack("Sinan");
	b.takeDamage(3);
	b.attack("Melisa");
	a.takeDamage(6);
	a.beRepaired(2);
	b.beRepaired(1);
	a.attack("Sinan");
	b.takeDamage(8);
	b.takeDamage(5);
}