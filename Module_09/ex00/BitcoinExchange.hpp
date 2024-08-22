#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <map>
#include <string>
#include <iostream>
#include <ostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <string.h>
#include <climits>
#include <limits>

class BitcoinExchange
{
	private:
			std::map<std::string, std::string> 	mp;
			std::string							input;

	public:
			BitcoinExchange();
			BitcoinExchange(std::string str);
			BitcoinExchange(const BitcoinExchange &other);
			BitcoinExchange& operator=(const BitcoinExchange &other);
			~BitcoinExchange();

			int		fillMap(std::string str);
			void 	printValues(void);
			float	findDate(std::string date);
};


#endif