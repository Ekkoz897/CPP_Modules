#include "phonebook.hpp"
#include "contact.hpp"
#include <iomanip>

int main()
{
	Phonebook	book;
	std::string	input;
	std::cout << "Please insert one of the following commands: ADD, SEARCH or EXIT.\n> ";
	getline(std::cin, input);
	book.set_current(0);
	input = trim_spaces(input);
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			if (book.add_contact(book.get_current()) == 0)
			{
				book.set_current(book.get_current() + 1);
				if (book.get_current() == 8)
					book.set_current(0);
			}
		}
		else if (input == "SEARCH")
			book.search_contact();
		else if ("EXIT")
			break ;
		else
			std::cout << "Not a valid command" << std::endl;
		std::cout << "> " << std::endl;
		getline(std::cin, input);
		input = trim_spaces(input);
	}
	std::cout << "Exiting..." << std::endl;
	return (0);
}
