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
	std::string formNames[] =
	{
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

	AForm* forms[] =
	{
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };

 	AForm* matchingForm = NULL;

	for (size_t i = 0; i < 3; ++i)
	{
        if (formName == formNames[i])
			matchingForm = forms[i];\
		else
        	delete forms[i];
    }
	if (!matchingForm)
   		throw UnknownFormException();
	
	std::cout << "Intern creates " << matchingForm->getName() << std::endl;
    return (matchingForm);
}
