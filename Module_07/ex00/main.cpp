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