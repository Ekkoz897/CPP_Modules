#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
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

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &src)
		this->grade = src.grade;
    return (*this);
}

void Bureaucrat::incrementGrade()
{
	if (this->grade <= 1)
		throw GradeTooLowException();
    grade--;
}


void Bureaucrat::decrementGrade()
{
	if (grade >= 150)
        throw GradeTooHighException();
    grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

int	Bureaucrat::getGrade()
{
	return (this->grade);
}

const std::string Bureaucrat::getName()
{
	return (this->name);
}

std::ostream& operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return out;
}

