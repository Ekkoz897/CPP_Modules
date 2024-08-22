#include "Span.hpp"

Span::Span() : N(0), used(0), vec(0)
{

}


Span::Span(unsigned int n) : N(n), used(0), vec(0)
{
	
}

Span::~Span()
{
	
}

Span::Span(const Span &other)
{
	if (this != &other)
	{
		this->N = other.N;
		this->used = other.used;
		this->vec = other.vec;
	}
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->N = other.N;
		this->used = other.used;
		this->vec = other.vec;
	}
	return (*this);
}

// adds the nbr to the end of the vector
void	Span::addNumber(int nbr)
{
	if (used < N)
	{
		this->vec.push_back(nbr);
		used++;
	}
	else
		throw (tooMany());
}

void	Span::addNumbers(unsigned int a)
{
	if (a < N - used)
	{
		for (unsigned int i = 0; i < a; i++)
		{
			this->vec.push_back(i);
			used++;
		}
	}
	else
		throw (tooMany());
}

long Span::shortestSpan()
{
	if (this->used <= 1)
        throw(std::exception());

    long    diff;
    long    aux;

	std::sort(this->vec.begin(), this->vec.end());
    diff = abs(this->vec[0] - this->vec[1]);

	for (unsigned int i = 1; i < used - 1; i++)
    {
        aux = abs(this->vec[i] - this->vec[i + 1]);
        if (aux < diff)
            diff = aux;
    }
    return (diff);
}

// abs in case max and min are negative, we want the distance not the math
long Span::longestSpan()
{
	if (this->used <= 1)
		throw(std::exception());
	std::sort(this->vec.begin(), this->vec.end());
	long min = this->vec[0];
	long max = this->vec[used - 1];
	return (abs(max - min));
}