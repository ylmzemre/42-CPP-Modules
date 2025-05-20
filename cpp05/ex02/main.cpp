#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include <iostream>

int main() {
    try {
        Bureaucrat max("Max", 50);
        
        RobotomyRequestForm robotomyForm("Target");
        ShrubberyCreationForm shrubberyForm("Garden");
        PresidentialPardonForm pardonForm("Victim");

        max.signForm(robotomyForm);
        max.executeForm(robotomyForm);
        
        max.signForm(shrubberyForm);
        max.executeForm(shrubberyForm);

        max.signForm(pardonForm);
        max.executeForm(pardonForm);
        
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
