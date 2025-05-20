#include  "ScavTrap.hpp"

int main(){
    
    ScavTrap M("Melisa");
    M.attack("Sinan");  
    M.takeDamage(5);
    M.beRepaired(2);
    M.guardGate();
}