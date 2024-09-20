#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <ostream>
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstdlib>

template <typename T>
class Array
{
    private:
        unsigned int    len;
        T               *arr;
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array &operator=(const Array& other);

        T &operator [](unsigned int index) const;

        unsigned int size() const;

        class NotValid : public std::exception
        {
			public:
				virtual const char* what() const throw() {return "Invalid index number.";}
        };
};
// virtual exception in case we want to derive classes and overload it

#include "Array.tpp"

#endif
