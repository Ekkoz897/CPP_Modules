#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, int grade_to_sign, int grade_to_execute) \
    : name(name), is_signed(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute) {
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw GradeTooHighException();
    if (grade_to_sign > 150 || grade_to_execute > 150)
        throw GradeTooLowException();
}

AForm::~AForm()
{

}

AForm::AForm(const AForm& other) \
    : name(other.name), is_signed(other.is_signed), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{

}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
        this->is_signed = other.is_signed;
    return (*this);
}

const std::string& AForm::getName() const
{
    return (name);
}

bool AForm::isSigned() const
{
    return (is_signed);
}

int AForm::getGradeToSign() const
{
    return (grade_to_sign);
}

int AForm::getGradeToExecute() const
{
    return (grade_to_execute);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > grade_to_sign)
        throw GradeTooLowException();
    is_signed = true;
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (!is_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > grade_to_execute)
		throw GradeTooLowException();
	action(executor);
}


const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low!");
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form not signed!";
}

std::ostream& operator<<(std::ostream& out, const AForm& AForm)
{
    out << "AForm " << AForm.getName() << ", is signed: " << AForm.isSigned()
        << ", grade to sign: " << AForm.getGradeToSign()
        << ", grade to execute: " << AForm.getGradeToExecute();
    return (out);
}
