#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) \
	: AForm("Presidential Pardon", 25, 5), target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) \
	: AForm(other), target(other.target)
{
	
}

// Chamar o assignment operator da classe base para copiar tudo de uma vez
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);

}

void PresidentialPardonForm::action(const Bureaucrat& executor) const
{
    (void)executor;
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}