#pragma once

#include <iostream>
#include <exception>
#include "Form.h"

class Form;

class Bureaucrat
{
    private:
       std::string _name;
        int _grade;
        void setName(std::string name);
        void setGrade(int grade);
    public:
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat &operator=(const Bureaucrat& copy);

        std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
        void signForm(Form& form);

        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw()
                {
                    return "Grade is too high";
                }
        };

        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw()
                {
                    return "Grade is too low";
                }
        };


};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);
