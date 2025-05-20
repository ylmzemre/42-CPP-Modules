#pragma once

#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _gradeToExecute;  

        void setIsSigned(bool value);     
    public:
        Form(const std::string name, int gradeToSign, int gradeToExecute);
        ~Form();
        Form(const Form& copy);
        Form &operator=(const Form& copy);

        std::string getName() const;
        bool isSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        std::string isSignedStatus() const;

        void beSigned(const Bureaucrat& bureaucrat);

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

std::ostream& operator<<(std::ostream& out, const Form& form);
