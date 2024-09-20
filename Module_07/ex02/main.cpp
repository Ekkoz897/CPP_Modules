#include "Array.hpp"

int main(int, char**)
{
    {
        std::cout << "\n-----MAIN FROM SUBJECT-----\n" << std::endl;

        Array<int> numbers(100);
        int* mirror = new int[100];
        std::srand(time(NULL));

        for (int i = 0; i < 100; i++)
        {
            const int value = std::rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < 100; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return (1);
            }
        }
        std::cout << "Success!" << std::endl;
		std::cout << "---------------------" << std::endl;
		std::cout << "*mirror = " << *mirror << std::endl;
		std::cout << "---------------------" << std::endl;
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << "Invalid array size" << std::endl;
        }
		std::cout << "---------------------" << std::endl;
        try
        {
            numbers[120] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;;
        }
		std::cout << "---------------------" << std::endl;
        for (int i = 0; i < 100; i++)
        {
            numbers[i] = std::rand();
        }
        delete [] mirror;
    }
    return (0);
}