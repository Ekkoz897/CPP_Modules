
#include "Bureaucrat.hpp"

int main()
{
    try
	{
        Bureaucrat bob("Bob", 2);
        std::cout << bob << std::endl;

        bob.incrementGrade();
        std::cout << bob << std::endl;

        bob.incrementGrade();
    }
	catch (const std::exception &e)
	{
        std::cerr << e.what() << std::endl;
    }

    try
	{
        Bureaucrat jim("Jim", 149);
        std::cout << jim << std::endl;

        jim.decrementGrade();
        std::cout << jim << std::endl;

        jim.decrementGrade();
    }
	catch (const std::exception &e)
	{
        std::cerr << e.what() << std::endl;
    }

    try
	{
        Bureaucrat invalid("Invalid", 151);
    }
	catch (const std::exception &e)
	{
        std::cerr << e.what() << std::endl;
    }

    return (0);
}
