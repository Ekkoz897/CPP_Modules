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

        // Sign and execute Presidential Pardon Form
        bob.signForm(pardon);
        bob.executeForm(pardon);

        // Sign and execute Robotomy Request Form
        bob.signForm(robotomy);
        bob.executeForm(robotomy);
        bob.executeForm(robotomy); // Try executing again to see alternation in success/failure

    }
	catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }

    return (0);
}

