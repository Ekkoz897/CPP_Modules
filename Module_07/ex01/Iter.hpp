#ifndef ITER_HPP
# define ITER_HPP

#include <ostream>
#include <iostream>

template <typename T>
void	iter(T *arg1, size_t arg2, void (*func)(const T&))
{
	size_t i = 0;

	while (i < arg2)
	{
		func(arg1[i]);
		i++;
	}
}

template <typename T>
void    print(T value)
{
    std::cout << value << std::endl;
}

#endif