#include "phonebook.hpp"

std::string	trim_spaces(std::string str)
{
	std::string	spaces;
	int	i = str.find_first_not_of(spaces);
	str = str.erase(0, i);
	int	j = str.find_last_not_of(spaces);
	str = str.erase(j);
	return (str);
}
