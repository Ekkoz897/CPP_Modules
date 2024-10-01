#include "easyfind.hpp"

int main(void)
{
    std::vector<int> numbers;

    for (int i = 1; i <= 50; i++)
        numbers.push_back(i);

    try
	{
        int res = easyfind(numbers, 49);
        std::cout << "Value found: " << res << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cout << "Value not found: " << 49 << std::endl;
    }

    try
	{
        int res = easyfind(numbers, 51);
        std::cout << "Value found: " << res << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cout << "Value not found: " << 51 << std::endl;
    }

    return (0);
}
