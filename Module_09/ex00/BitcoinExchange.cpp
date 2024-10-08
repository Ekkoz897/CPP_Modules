#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(std::string str) : input(str)
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : mp(other.mp) , input(other.input)
{

}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		this->mp = other.mp;
		this->input = other.input;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{

}

std::pair<std::string,std::string> split(std::string str, char c)
{
    std::size_t found = str.find(c);
    std::string s1 = str.substr(0, found);
    std::string s2 = str.substr(found + 1);
    
    return std::make_pair(s1, s2);
}

// skips the name of the columns and then fills the map
int		BitcoinExchange::fillMap(std::string str)
{
	std::ifstream f;
	f.open(str.c_str(), std::ios::in);
	if (!f)
		return (0);
	
	std::string aux;
	getline(f, aux);
	while (getline(f, aux))
		this->mp.insert(split(aux, ','));
	std::map<std::string, std::string>::iterator it;

	f.close();
	return (1);
}

/////////////////////////////////////////////
// Find date and return the value of btc
////////////////////////////////////////////
float	ft_str_to_float(std::string str)
{
    int f = 0;
    int m = 0;
    float i = 0;
    int d = 1;

	if (str[f] == '-')
        throw(std::invalid_argument("Error: negative number"));
    if (str[f] == '+')
	{
    	f++;
	}
	while(str[f])
	{
		if (str[f] >= '0' && str[f] <= '9')
			i = i * 10 + (str[f] - '0');
		else if (str[f] == '.')
		{
			f++;
			if (!str[f] || !isdigit(str[f]))
				throw(std::invalid_argument("Error: invalid rate => " + str));
			while (str[f] && str[f] >= '0' && str[f] <= '9')
			{
				if (str[f] == '.')
					throw(std::invalid_argument("Error: invalid rate => " + str));
				m = m * 10 + (str[f] - '0');
				d *= 10;
				f++;
			}
			continue ;
		}
		f++;
	}
	float final = (i + static_cast<float>(m)/d);
    return (final);
}


float	BitcoinExchange::findDate(std::string date)
{
	std::map<std::string, std::string>::iterator it;
	it = this->mp.begin();
	while (it != mp.end() && it->first <= date)
		it++;
	it--;
	return (ft_str_to_float(it->second));
}

/////////////////////////////////////////////
// Checks files, prints values after parsing the input
////////////////////////////////////////////


float	check_rate(std::string str)
{
	std::string s;
	int dig = 0;
	int i = 0;

	if (str[i] == '+')
		i++;
	if (str[i] == '-')
		throw(std::invalid_argument("Error: not a positive number."));
	while (str[i])
	{
		if (isspace(str[i]))
			throw(std::invalid_argument("Error: invalid format => " + str));
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
			throw(std::invalid_argument("Error: invalid rate => " + str));
		i++;
		dig++;
	}
	s = str.substr(i - dig, dig);
	float f = ft_str_to_float(s);
	if (f > 1000)
		throw(std::invalid_argument("Error: too large a number => " + str));
	return (f);
}

// Checks if all chars are digits and number of digits 
int	check_number(std::string s, int opt)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	if (i != opt)
		return (0);
	return (1);
}


// Checks if the date exists, taking in consideration every 4 years the year is 1 day shorter
int check_ymd(std::string y, std::string m, std::string d)
{
    if (!y[0] || !m[0] || !d[0])
        return (0);

    if (!check_number(y, 4) || !check_number(m, 2) || !check_number(d, 2))
        return (0);

    int y1 = static_cast<int>(ft_str_to_float(y));
    int m1 = static_cast<int>(ft_str_to_float(m));
    int d1 = static_cast<int>(ft_str_to_float(d));

    int dd[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y1 % 4 == 0)
        dd[1] = 29;

    if (m1 < 1 || m1 > 12 || d1 < 1 || d1 > dd[m1 - 1])
        return (0);
    return (1);
}

// splits date into 3 parts, checks if all are valid and no older than 2009 02 jan
void    check_dates(std::string s1)
{
    size_t pos = s1.find('-');
    if (pos == std::string::npos)
        throw(std::invalid_argument("Error: invalid input => " + s1));

    pos = s1.substr(pos + 1).find('-');
    if (pos == std::string::npos)
        throw(std::invalid_argument("Error: invalid input => " + s1));

    std::string aux = split(s1, '-').second;

    std::string y = split(s1, '-').first;
    std::string m = split(aux, '-').first;
    std::string d = split(aux, '-').second;

    if (!check_ymd(y, m, d))
        throw(std::invalid_argument("Error: invalid input => " + s1));

    if (s1 < "2009-01-02")
        throw(std::invalid_argument("Error: invalid input => " + s1));
}

int is_empty_str(std::string s)
{
    int i = 0;

    while (s[i])
    {
        if (!std::isspace(static_cast<unsigned char>(s[i])))
            return (0);
        i++;
    }
    return (1);
}

std::pair<std::string, float> check_input_line(std::string str)
{
    if (str.empty() || is_empty_str(str))
        throw(std::invalid_argument("Error: empty line"));

    if (str.size() < 14 || !isdigit(str[0]) || str[10] != ' ' || str[11] != '|' || str[12] != ' ' || isspace(str[13]))
        throw(std::invalid_argument("Error: invalid input => " + str));

    size_t pos = str.find('|');
    std::string s1 = str.substr(0, pos - 1);
    std::string s2 = str.substr(pos + 2, str.size());

    check_dates(s1);
    float f = check_rate(s2);
    return (std::pair<std::string, float>(s1, f));
}

void BitcoinExchange::printValues(void)
{
	std::string str = "data.csv";
	if (!this->fillMap(str))
	{
		std::cerr << "Error: Could not open database '" << str << "'" << std::endl;
		return ;
	}

	// Checks for the file's existance and if it has content
	std::ifstream f;
	f.open(this->input.c_str(), std::ios::in);
	if (!f)
	{
		std::cerr << "Error: could not open file '" << this->input.c_str() << "'" << std::endl;
        return ;
	}
	if (f.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "Error: empty file" << std::endl;
        f.close();
        return ;
	}

	// opens the file again, to check the first line
    std::ifstream   f0;
    f0.open(this->input.c_str(), std::ios::in);
    if (!f0)
	{
        std::cerr << "Error: could not open file '" << this->input.c_str() << "'" << std::endl;
        return ;
    }

	// if the first line is date | value it goes to the next, otherwise starts checking each line
	std::string aux;
    std::string tmp;
    std::getline(f0, tmp);
	if (tmp == "date | value")
		std::getline(f, aux);
	while (getline(f, aux))
	{
		try
		{
			{
				std::pair<std::string, float> date_rate = check_input_line(aux);
				std::cout << date_rate.first << "  => " << date_rate.second;
				float closest_value = this->findDate(date_rate.first);
				std::cout << " = " << closest_value * date_rate.second << std::endl;
			}
		}
		catch(const std::invalid_argument& e)
		{
            std::cerr << e.what() << '\n';
        }
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}