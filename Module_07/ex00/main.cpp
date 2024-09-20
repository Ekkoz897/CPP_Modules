#include "Whatever.hpp"

int main(void)
{
	int JediPower = 42;
	int GnomePower = 9000;
	std::cout << "JediPower: " << JediPower << ", GnomePower: " << GnomePower << std::endl;
	
	swap(JediPower, GnomePower);

	std::cout << "Post swap - JediPower: " << JediPower << ", GnomePower: " << GnomePower << std::endl;
	std::cout << "Max power: " << max(JediPower, GnomePower) << std::endl;
	std::cout << "Min power: " << min(JediPower, GnomePower) << std::endl;
	
	std::cout << std::endl;

	std::string fruit1 = "apple";
	std::string fruit2 = "banana";
	std::cout << "fruit1: " << fruit1 << ", fruit2: " << fruit2 << std::endl;
	
	swap(fruit1, fruit2);

	std::cout << "Post swap - fruit1: " << fruit1 << ", fruit2: " << fruit2 << std::endl;
	std::cout << "The best fruit (max): " << max(fruit1, fruit2) << std::endl;
	std::cout << "The worst fruit (min): " << min(fruit1, fruit2) << std::endl;
    return (0);
}

// EX00.CPP from subject
// class Awesome
// {
//   public:
//     Awesome(void) : _n(0) {}
//     Awesome( int n ) : _n( n ) {}
//     Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
//     bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
//     bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
//     bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
//     bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
//     bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
//     bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
//     int get_n() const { return _n; }
//   private:
//     int _n;
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

// int main(void)
// {
// 	Awesome a(2), b(4);

//         swap(a, b);
//         std::cout << a << " " << b << std::endl;
//         std::cout << max(a, b) << std::endl;
//         std::cout << min(a, b) << std::endl;
//         return (0);
// }

// Subject code to test:
// int main( void ) {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return 0;
// }