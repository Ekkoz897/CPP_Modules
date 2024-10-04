#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN& src) : st(src.st)
{

}

RPN& RPN::operator=(const RPN& src)
{
    if (this != &src)
        this->st = src.st;
    return *this;
}


RPN::~RPN()
{

}

int RPN::populate_st(std::string str)
{
   int	i = 0;
   std::string ws = " \t";
   std::string ops = " +-/*";
   while (str[i])
   {
		if ((std::isdigit(str[i]) && ws.find(str[i + 1]) != std::string::npos) || ws.find(str[i]) != std::string::npos)
            this->st.push(str[i]);
		else
			return (0);
		i++;
   }
	return (i);

}

float   ft_str_to_float(std::string str)
{
    float i = 0;
    int f = 0;

    while (str[f])
    {
        if (str[f] >= '0' && str[f] <= '9')
            i = i * 10 + (str[f] - '0');
        f++;
    }
    return (i);
}

std::pair<std::string,std::string> split(std::string str)
{
    std::size_t found = str.find_first_of(" \t");
    std::string s1 = str.substr(0, found);
    std::string s2 = str.substr(found + 1);
    
    return std::make_pair(s1, s2);
}

int isNum(std::string str)
{
   if (isdigit(str[0]) && !str[1])
        return (1);
    return (0);
}

int    RPN::calculate(std::string s)
{
	if (st.size() < 2)
        return (0);
	
    float a = this->st.top();
    st.pop();
    float b = this->st.top();
    st.pop();

    if (s[0] == '+')
        st.push(b + a);
    else if (s[0] == '-')
        st.push(b - a);
    else if (s[0] == '*')
        st.push(b * a);
    else if (s[0] == '/')
    {
        if (a == 0)
            throw(std::invalid_argument("Error: Division by zero"));
        st.push(b / a);
    }
    return (1);
}

// STRstream pushes a word into aux every while loop, condition to stop is end of line
void    RPN::run(std::string str)
{
	if (!str[0])
		throw(std::invalid_argument("Error: bad input"));

	std::string aux;
	std::stringstream stream(str);
	while (stream >> aux)
	{
		if (isNum(aux))
		{
			float nb = ft_str_to_float(aux);
			if (nb < 0 || nb > 9)
				throw(std::invalid_argument("Error: bad input"));
			this->st.push(nb);
		}
		else if ((aux[0] == '+' || aux[0] == '-' || aux[0] == '*' || aux[0] == '/') && !aux[1])
		{
			if ( !this->calculate(aux))
				throw(std::invalid_argument("Error: bad input"));
		}
		else
			throw(std::invalid_argument("Error: bad input"));
	}
	if (this->st.size() != 1)	
		throw(std::invalid_argument("Error: bad input"));
	std::cout << this->st.top() << std::endl;
}

