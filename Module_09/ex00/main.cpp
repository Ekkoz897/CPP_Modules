#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Expected one input file" << std::endl;
		return (1);
	}
	BitcoinExchange mp(argv[1]);
	mp.printValues();
	return (0);
}