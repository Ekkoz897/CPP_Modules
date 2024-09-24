#ifndef EASYFIND
#define EASYFIND

#include <vector>
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <bits/stdc++.h> 

class Span
{
	private:
			unsigned int 	 N;
			std::vector<int> vec;
	public:
			Span();
			~Span();
			Span(unsigned int n);
			Span(const Span &other);
			Span &operator=(const Span &other);

			void	addNumber(int nbr);
			void    addNumbers(unsigned int nbr);

			long shortestSpan();
			long longestSpan();

			class tooMany : public std::exception
        	{
				public:
					virtual const char* what() const throw() {return "The array is already full";}
        	};
};

#endif