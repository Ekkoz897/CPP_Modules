#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
    if (this != &src)
        this->grade = src.grade;
    return (*this);
}

const std::string& Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(AForm& AForm)
{
    try
	{
        AForm.beSigned(*this);
        std::cout << name << " signed " << AForm.getName() << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cout << name << " couldn't sign " << AForm.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const AForm& AForm) const
{
    try
	{
        AForm.execute(*this);
        std::cout << name << " executed " << AForm.getName() << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cout << name << " couldn't execute " << AForm.getName() << " because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low!");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return (out);
}
