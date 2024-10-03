#include "Span.hpp"

Span::Span() : N(0), vec(0)
{

}


Span::Span(unsigned int n) : N(n), vec(0)
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
		this->vec = other.vec;
	}
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->N = other.N;
		this->vec = other.vec;
	}
	return (*this);
}

// adds the nbr to the end of the vector
void	Span::addNumber(int nbr)
{
	if (vec.size() < N)
		vec.push_back(nbr);
	else
		throw std::runtime_error("Can't add any more numbers");
}

void	Span::addNumbers(unsigned int count)
{
	if (count <= N - vec.size())
	{
		for (unsigned int i = 0; i < count; i++)
			this->vec.push_back(std::rand() % 1000);
	}
	else
		throw std::runtime_error("Container is already full");
}

long Span::shortestSpan()
{
	if (this->vec.size() <= 1)
        throw(std::logic_error("Not enough numbers to find a span"));

    long    diff;
    long    aux;

	std::sort(this->vec.begin(), this->vec.end());
    diff = abs(this->vec[0] - this->vec[1]);

	for (unsigned int i = 1; i < vec.size() - 1; i++)
    {
        aux = abs(this->vec[i] - this->vec[i + 1]);
        if (aux < diff)
            diff = aux;
    }
    return (diff);
}

long Span::longestSpan()
{
	if (this->vec.size() <= 1)
		throw(std::logic_error("Not enough numbers to find a span"));

	std::sort(this->vec.begin(), this->vec.end());
	return (vec.back() - vec.front());
}