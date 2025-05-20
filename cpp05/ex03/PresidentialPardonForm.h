#pragma once

#include "AForm.h"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm(const std::string target);
        ~PresidentialPardonForm();
        
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm& copy);

        virtual void execute(const Bureaucrat& bureaucrat) const;


};
