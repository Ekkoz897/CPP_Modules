#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>


template <typename T>
class MutantStack : public std::stack<T>
{
	public:
			MutantStack();
			MutantStack(const MutantStack<T>& other);
			MutantStack<T>& operator=(const MutantStack<T>& other);
			~MutantStack();

			// defines an iterator type for MutantStack based on the underlying container's iterator type.
			typedef typename std::stack<T>::container_type::iterator iterator;

			// container "c" refers to the actual data struct
			// that holds the elements of the stack
			iterator begin()
			{
				return iterator(this->c.begin());
			}

			iterator end()
			{
				return iterator(this->c.end());
			}
	private:

};

#include "MutantStack.tpp"

#endif