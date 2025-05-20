#include "Form.h"

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}
Form::~Form() {}

//Getter
void Form::setIsSigned(bool value){_isSigned = value;}

//Setter
std::string Form::getName() const {return _name;}
bool Form::isSigned() const {return _isSigned;}
int Form::getGradeToSign() const {return _gradeToSign;}
int Form::getGradeToExecute() const {return _gradeToExecute;}
std::string Form::isSignedStatus() const {return isSigned() ? "yes" : "No";}

Form::Form(const Form& copy) : _name(copy.getName()),
                               _gradeToSign(getGradeToSign()),
                               _gradeToExecute(getGradeToExecute()) {
    *this = copy;
}

Form &Form::operator=(const Form& copy) {
    if (this == &copy)
        return *this;
    _isSigned = copy._isSigned;
    return *this;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > getGradeToSign())
        throw GradeTooLowException();
    setIsSigned(true);
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    out << form.getName() << ", form grade to sign " << form.getGradeToSign()
        << ", form grade to execute " << form.getGradeToExecute()
        << ", is signed " << form.isSignedStatus() << std::endl;
    return out;
}