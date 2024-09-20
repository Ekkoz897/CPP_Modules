#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include <iomanip>

// tipo de input
bool isInt(const std::string& str);
bool isChar(const std::string& str);
bool isFloat(const std::string& str);
bool isDouble(const std::string& str);
bool isSpecial(std::string str);

// tratar cada caso
void caseInt(std::string str);
void caseChar(std::string str);
void caseFloat(std::string str);
void caseDouble(std::string str);

// printar cada caso
void printChar(char c, int i);
void printInt(std::string str, int i, float f, double d);
void printFloat(std::string str, float f, double d);
void printDouble(double d);
void printSpecial(std::string str);

void printAllTypes(std::string str, int i, float f, double d, char c);


class ScalarConverter
{
	private:
			ScalarConverter();  // estando privado, impede de instanciar a classe
			ScalarConverter(const ScalarConverter&);
			ScalarConverter& operator=(const ScalarConverter&);
			
	public:
			~ScalarConverter();
			static void	converter(std::string str);
};

#endif