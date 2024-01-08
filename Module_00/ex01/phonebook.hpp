#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Phonebook
{

	private:
			Contact	ct[8];
			int		current;
	public:
			int		get_current();
			void	set_current(int a);
			int		add_contact(int current);
			void	search_contact();
	
};

std::string	trim_spaces(std::string str);

#endif