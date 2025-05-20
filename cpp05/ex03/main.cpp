#include <iostream>
#include "Intern.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "AForm.h"
#include "Bureaucrat.h"
#include <exception>

int main() {
    Intern intern;
    AForm *form;
    Bureaucrat bureaucrat("John", 1);
    try {
        form = intern.makeForm("shrubbery creation", "home");
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
        delete form;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try{
        form = intern.makeForm("robotomy request", "Bender");
        delete form;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;  
}
