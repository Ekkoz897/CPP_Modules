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

template <typename T>
void print(const  T &value)
{
  std::cout << value << std::endl;
}

// // CODE PROVIDED IN EX01.CPP CORRECTION SHEET
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