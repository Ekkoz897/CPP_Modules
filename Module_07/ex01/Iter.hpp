#ifndef ITER_HPP
# define ITER_HPP

#include <ostream>
#include <iostream>

template <typename T>
void	iter(T *array, size_t size, void (*func)(const T&))
{
	size_t i = 0;

	while (i < size)
	{
		func(array[i]);
		i++;
	}
}

template <typename T>
void print(const  T &value)
{
  std::cout << value << std::endl;
}

// // EX01.CPP from subject
// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print(T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

#endif