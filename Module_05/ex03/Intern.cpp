#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern& other)
{
    *this = other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return (*this);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
    AForm* form = NULL;

    if (formName == "shrubbery creation")
        form = new ShrubberyCreationForm(target);
    else if (formName == "robotomy request")
        form = new RobotomyRequestForm(target);
    else if (formName == "presidential pardon")
        form = new PresidentialPardonForm(target);
    else
        throw UnknownFormException();

    std::cout << "Intern creates " << form->getName() << std::endl;
    return (form);
}
