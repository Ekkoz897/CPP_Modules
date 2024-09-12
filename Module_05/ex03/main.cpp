#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    try
	{
        Bureaucrat bob("Bob", 1);
        Intern intern;

        // Intern creates forms
        AForm* shrubbery = intern.makeForm("shrubbery creation", "Home");
        AForm* pardon = intern.makeForm("presidential pardon", "Alice");
        AForm* robotomy = intern.makeForm("robotomy request", "Eve");

		std::cout << "---------------\n";

        bob.signForm(*shrubbery);
        bob.executeForm(*shrubbery);

		std::cout << "---------------\n";

        bob.signForm(*pardon);
        bob.executeForm(*pardon);

		std::cout << "---------------\n";

        bob.signForm(*robotomy);
        bob.executeForm(*robotomy);
		// de novo para ver que funciona 50% das vezes
        bob.executeForm(*robotomy);

        delete shrubbery;
        delete pardon;
        delete robotomy;

    }
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}
