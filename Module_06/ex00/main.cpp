#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong number of arguments.\n";
        return 0;
    }
    try
    {
        ScalarConverter::converter(argv[1]);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    return (0);
}
