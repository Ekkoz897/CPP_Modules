#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
	{
        Bureaucrat bob("Bob", 2);
        Form formA("FormA", 1, 1);

        std::cout << formA << std::endl;

        bob.signForm(formA);
        std::cout << formA << std::endl;

        bob.incrementGrade();
        bob.signForm(formA);

    }
	catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }

    try
	{
        Bureaucrat jim("Jim", 150);
        Form formB("FormB", 100, 100);

        std::cout << formB << std::endl;

        jim.signForm(formB);
        std::cout << formB << std::endl;

        jim.decrementGrade();
        jim.signForm(formB);

    }
	catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }

    return (0);
}

