#pragma once

#include "AForm.h"

class Intern
{
    public:
    Intern();
    ~Intern();
    Intern(const Intern& copy);
    Intern &operator=(const Intern& copy);

    AForm* makeForm(std::string formName, std::string target);
    AForm* createPresidentialPardon(std::string target);
    AForm* createRobotomy(std::string target);
    AForm* createShrubbery(std::string target);
    
    class FormNotFoundException : public std::exception {
        const char *what() const throw()
            {
                 return "Intern: Form Not Found";
            }
        };

};