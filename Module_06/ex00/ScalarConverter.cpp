#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	(void)src;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&)
{
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}

bool isInt(const std::string& str)
{
    size_t i = 0;
    if ((str[i] == '-' || str[i] == '+') && str.length() > 1)
        i++;
    while (i < str.length())
    {
        if (!std::isdigit(str[i]))
            return (false);
		i++;
    }
    return (true);
}

bool isChar(const std::string& str)
{
    if (str.length() == 1 && !std::isdigit(str[0]))
        return (true);
    return (false);
}

bool isFloat(const std::string& str)
{
	size_t i = 0;
	size_t decimalCount = 0;

	if (str.empty())
		return (false);
	if ((str[i] == '-' || str[i] == '+') && str.length() > 1)
		i++;
	if (i >= str.length())
		return (false);

	while (i < str.length() - 1)
	{
		if (str[i] == '.')
		{
			if (decimalCount > 0)
				return (false);
			decimalCount++;
			if (i + 1 >= str.length() - 1)
				return (false);
		}
		else if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	if (str[str.length() - 1] != 'f')
		return (false);
	if (decimalCount != 1)
		return (false);
	return (true);
}

bool isDouble(const std::string& str)
{
	size_t i = 0;
	size_t decimalCount = 0;

	if (str.empty())
		return (false);
	if ((str[i] == '-' || str[i] == '+') && str.length() > 1)
		i++;
	if (i >= str.length())
		return (false);
	
	while (i < str.length())
	{
		if (str[i] == '.')
		{
			if (decimalCount > 0)
				return (false);
			decimalCount++;
			if (i + 1 >= str.length())
				return (false);
		}
		else if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	if (decimalCount != 1)
		return (false);
	return (true);
}

bool    isSpecial(std::string str)
{
    if (str == "-inf" || str == "+inf" || str == "nan"
        || str == "nanf" || str == "-inff" || str == "+inff")
    {
        printSpecial(str);
        return (true);
    }
    return (false);
}

//Print functions
void    printChar(char c, int i)
{
    if (!c || (i < 32 || i > 126))
        std::cout << "Char: Non displayable" << std::endl;
    else
        std::cout << "Char: '" << c << "'" << std::endl;
}

void printInt(std::string str, int i, float f, double d)
{
    if (isDouble(str) && (d < -std::numeric_limits<int>::max() || d > std::numeric_limits<int>::max()))
        std::cout << "Int: inf" << std::endl;
    else if (isFloat(str) && (f < -std::numeric_limits<int>::max() || f > std::numeric_limits<int>::max()))
        std::cout << "Int: inf" << std::endl;
    else
        std::cout << "Int: " << i << std::endl;
}

void printFloat(std::string str, float f, double d)
{
    if (std::isinf(d))
        std::cout << "Float: inf" << std::endl;
    else if (std::isnan(d))
        std::cout << "Float: nan" << std::endl;
    else if (f - static_cast<int>(f) == 0)
        std::cout << "Float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    else
        std::cout << "Float: " << f << "f" << std::endl;
}

void printDouble(double d)
{
    if (std::isinf(d))
        std::cout << "Double: inf" << std::endl;
    else if (std::isnan(d))
        std::cout << "Double: nan" << std::endl;
    else if (d - static_cast<int>(d) == 0)
        std::cout << "Double: " << std::fixed << std::setprecision(1) << d << std::endl;
    else
        std::cout << "Double: " << d << std::endl;
}

void    printAllTypes(std::string str, int i, float f, double d, char c)
{
    printChar(c, i);
    printInt(str, i, f, d);
    printFloat(str, f, d);
    printDouble(d);
}

void    printSpecial(std::string str)
{
    std::cout << "Char: impossible" << std::endl;
    std::cout << "Int: impossible" << std::endl;
	
    if (str == "nanf" || str == "nan")
        std::cout << "Float: nanf" << std::endl;
    else if (str == "-inf" || str == "-inff")
        std::cout << "Float: -inff" << std::endl; 
    else if (str == "+inf" || str == "+inff")
        std::cout << "Float: +inff" << std::endl; 
    if (str == "nanf" || str == "nan")
        std::cout << "Double: nan" << std::endl;
    else if (str == "-inf" || str == "-inff")
        std::cout << "Double: -inf" << std::endl; 
    else if (str == "+inf" || str == "+inff")
        std::cout << "Double: +inf" << std::endl;
}

// cases for each type of var
void caseInt(std::string str)
{
    int i;
    float f;
    double d;
    char c;
    
    try
    {
        i = std::stoi(str);
    }
    catch (const std::out_of_range &error)
    {
        try
        {
            // Attempt to handle as a double instead
            d = std::stod(str);
            f = static_cast<float>(d);
            c = static_cast<char>(-1);
            printChar(c, i);
			std::cout << "int: impossible" << std::endl;
			printFloat(str, f, d);
			printDouble(d);
        }
        catch (const std::exception &e)
        {
            std::cout << "Conversion makes no sense." << std::endl;
        }
        return ;
    }
    catch (const std::exception &error)
    {
        std::cout << "Conversion makes no sense." << std::endl;
        return ;
    }
    f = static_cast<float>(i);
    d = static_cast<double>(i);
    c = static_cast<char>(i);
    printAllTypes(str, i, f, d, c);
}


void    caseChar(std::string str)
{
    int i;
    float f;
    double d;
    char c;

    c = str[0];

    i = static_cast <int> (c);
    f = static_cast <float> (c);
    d = static_cast <double> (c);
    printAllTypes(str, i, f, d, c);
}

void    caseFloat(std::string str)
{
    int i;
    float f;
    double d;
    char c;

    try
    {
        f = std::stof(str);
    }
    catch (std::exception &error)
    {
        std::cout << "Conversion makes no sense." << std::endl;
        return ;
    }
    
    c = static_cast <char> (f);
    i = static_cast <int> (f);
    d = static_cast <double> (f);
    printAllTypes(str, i, f, d, c);
}

void    caseDouble(std::string str)
{
    int i;
    float f;
    double d;
    char c;

    try
    {
        d = std::stod(str);
    }
    catch (std::exception &error)
    {
        std::cout << "Conversion makes no sense." << std::endl;
        return ;
    }

    c = static_cast <char> (d);
    i = static_cast <int> (d);
    f = static_cast <float> (d);
    printAllTypes(str, i, f, d, c);
}

void    ScalarConverter::converter(std::string str)
{
    if (isInt(str) == true)
        caseInt(str);
    else if (isChar(str) == true)
        caseChar(str);
    else if (isFloat(str) == true)
        caseFloat(str);
    else if (isDouble(str) == true)
        caseDouble(str);
    else if (isSpecial(str) == false)
        std::cout << "Conversion makes no sense." << std::endl;
}
