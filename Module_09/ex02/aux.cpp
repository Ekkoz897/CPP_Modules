#include "PmergeMe.hpp"

// using the formula Jn = (2^n - (-1)^n) / 3, we calculate the Jacobsthal number
size_t  jacobsthal_equation(int order)
{
	// base case
    if (order == 1)
        return 1;
    else
        return ((std::pow(2, order) - std::pow(-1, order)) / 3);
}

//  decrements i until it meets a jc number or 0, then moves it to the next jc number
size_t  PmergeMe::get_jacobsthal(size_t i, size_t *jacob_order)
{
    if (i - 1 != 0 && i - 1 != jacobsthal_equation(*jacob_order - 1))
        i--;
    else
    {
        (*jacob_order)++;
        i = jacobsthal_equation(*jacob_order);
    }
    return (i);
}

// Trims spaces before and after str
std::string ft_trim(std::string str)
{
    std::string final;
    size_t start = str.find_first_not_of(" \t\v\f\r");
    size_t end = str.find_last_not_of(" \t\v\f\r");

    if (start == std::string::npos)
       throw(std::invalid_argument("Error: empty str"));

    final = str.substr(start, end - start + 1);
    return (final);
}