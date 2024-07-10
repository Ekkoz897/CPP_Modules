#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

// construction with no parameter
template <typename T>
Array<T>::Array() : len(0), arr(0)
{
	
}

// construction with int n as parameter
template <typename T>
Array<T>::Array(unsigned int n) : len(n)
{
    if (static_cast<int>(n) < 0)
        throw(NotValid());
    else if (static_cast<int>(n) == 0)
    {
        this->len = 0;
        this->arr = 0;
    }
    else
    {
        this->arr = new T[n];
        for (unsigned int i = 0; i < n; ++i)
            this->arr[i] = T(); // Default initialization for type T
    }
}

// copy constructor
template <typename T>
Array<T>::Array(const Array &other) : len(other.len)
{
	this->arr = new T[other.len];
	for (unsigned int i = 0; i < this->len; i++)
		this->arr[i] = other.arr[i];
}

// assignment op
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		if (this->arr)
			delete [] this->arr;
		this->arr = new T[other.len];
		this->len = other.len;
		for (unsigned int i = 0; i < len; i++)
			this->arr[i] = other.arr[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
    if (this->arr)
        delete [] this->arr;
}

template <typename T>
unsigned int Array<T>::size()
{
    return (this->len);
}

// [] Op
template <typename T>
T &Array<T>::operator [](unsigned int n) const
{
    if (n < this->len)
        return arr[n];
    else
        throw(NotValid());
}

#endif
