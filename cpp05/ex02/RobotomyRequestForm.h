#pragma once

#include "AForm.h"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm(const std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& copy);

        RobotomyRequestForm &operator=(const RobotomyRequestForm& copy);

        virtual void execute(const Bureaucrat& bureaucrat) const;


};