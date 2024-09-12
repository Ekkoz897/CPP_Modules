#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
	{
        Bureaucrat bob("Bob", 1);
        ShrubberyCreationForm shrubbery("Home");
        PresidentialPardonForm pardon("Alice");
        RobotomyRequestForm robotomy("Eve");

        // Sign and execute Shrubbery Creation Form
        bob.signForm(shrubbery);
        bob.executeForm(shrubbery);

		std::cout << "---------------\n";

        // Sign and execute Presidential Pardon Form
        bob.signForm(pardon);
        bob.executeForm(pardon);

		std::cout << "---------------\n";

        // Sign and execute Robotomy Request Form
        bob.signForm(robotomy);
        bob.executeForm(robotomy);
		std::cout << "---------------\n";
        bob.executeForm(robotomy); // Try again to see 50% success

    }
	catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }

    return (0);
}

