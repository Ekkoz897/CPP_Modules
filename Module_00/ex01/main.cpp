/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 07:34:03 by apereira          #+#    #+#             */
/*   Updated: 2024/02/26 17:29:30 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <iomanip>

int main()
{
	Phonebook	book;
	std::string	input;

	std::cout << std::endl;
    std::cout << "📞 Welcome to Your Awesome PhoneBook 📖" << std::endl;
    std::cout << std::endl;
    std::cout << "--------------USAGE---------------" << std::endl;
    std::cout << "ADD\t: To add a contact." << std::endl;
    std::cout << "SEARCH\t: To search for a contact." << std::endl;
    std::cout << "EXIT\t: to quit the PhoneBook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
	std::cout << "> ";
	getline(std::cin, input);
	book.setCurrent(0);
	input = trimSpaces(input);
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			if (book.addContact(book.getCurrent()) == 0)
			{
				book.setCurrent(book.getCurrent() + 1);
				if (book.getCurrent() == 8)
					book.setCurrent(0);
			}
		}
		else if (input == "SEARCH")
			book.searchContact();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Not a valid command" << std::endl;
		std::cout << "> ";
		getline(std::cin, input);
		input = trimSpaces(input);
	}
	std::cout << "Exiting..." << std::endl;
	return (0);
}
