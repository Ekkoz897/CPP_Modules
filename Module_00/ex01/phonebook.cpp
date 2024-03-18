/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 07:34:44 by apereira          #+#    #+#             */
/*   Updated: 2024/03/11 15:11:15 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	Phonebook::getCurrent()
{
	return (this->current);
}

void	Phonebook::setCurrent(int a)
{
	this->current = a;
}

int	Phonebook::addContact(int current)
{
	
	std::string	str;

	ct[current].setFirst("");
	std::cout << "Fist name: ";
	getline(std::cin, str);
	if (trimSpaces(str).empty())
	{
		std::cout << "Please enter a non empty parameter." << std::endl;
		return (1);
	}
	else
		ct[current].setFirst(trimSpaces(str));

	ct[current].setLast("");
	std::cout << "Last name: ";
	getline(std::cin, str);
	if (trimSpaces(str).empty())
	{
		std::cout << "Please enter a non empty parameter." << std::endl;
		return (1);
	}
	else
		ct[current].setLast(trimSpaces(str));
	
	ct[current].setNick("");
	std::cout << "Nickname: ";
	getline(std::cin, str);
	if (trimSpaces(str).empty())
	{
		std::cout << "Please enter a non empty parameter." << std::endl;
		return (1);
	}
	else
		ct[current].setNick(trimSpaces(str));
	
	ct[current].setSecret("");
	std::cout << "Daskest secret: ";
	getline(std::cin, str);
	if (trimSpaces(str).empty())
	{
		std::cout << "Please enter a non empty parameter." << std::endl;
		return (1);
	}
	else
		ct[current].setSecret(trimSpaces(str));
		
	ct[current].setNumber("");
	std::cout << "Phone number: ";
	getline(std::cin, str);
	if (trimSpaces(str).empty())
	{
		cleanContact(ct, current);
		std::cout << "Please enter a non empty parameter." << std::endl;
		return (1);
	}
	else if (checkNumber(trimSpaces(str)) == 0)
	{
		cleanContact(ct, current);
		std::cout << "Please enter a valid number" << std::endl;
		return (1);
	}
	else
		ct[current].setNumber(trimSpaces(str));
	
	std::cout << "Contact Added Successfuly!" << std::endl;
	return (0);
}

void	Phonebook::searchContact()
{
	int	f = 1;

	std::cout << std::right;
	if (ct[f - 1].getFirst().empty())
		return ;
	while (f <= 8 && !ct[f - 1].getFirst().empty())
	{
		std::cout <<
			std::setw(10) << f << std::setw(1) << "|" << std::setw(1) << std::setw(10) <<
			cutWord(ct[f - 1].getFirst()) << std::setw(1) << "|" << std::setw(10) <<
			cutWord(ct[f - 1].getLast()) << std::setw(1) << "|"  << std::setw(10) <<
			cutWord(ct[f - 1].getNick()) << std::endl << std::endl;
		f++;
	}
	std::string nb;
	std::cout << "Index of the contact: ";
	getline(std::cin, nb);
	if (checkNumber(trimSpaces(nb)) == 0)
	{
		std::cout << "Please insert a valid number." << std::endl;
		return ;
	}
	// converts nb to a standard str and then to an int
	const char *z = nb.c_str();
	int	id = std::atoi(z);
	if (id < 1 || id > 8)
        std::cout << "Index out of bounds." << std::endl;
	else if (!ct[id - 1].getFirst().empty())
	{
		std::cout << "\nIndex: " << id << std::endl;
		std::cout << "First Name: " << ct[id - 1].getFirst() << std::endl;
		std::cout << "Last Name: " << ct[id - 1].getLast() << std::endl;
		std::cout << "Nickname: " << ct[id - 1].getNick() << std::endl;
		std::cout << "Darkest Secret: " << ct[id - 1].getSecret() << std::endl;
		std::cout << "Phone Number: " << ct[id - 1].getNumber() << std::endl << std::endl;
	}
	else
		std::cout << "This contact doesn't exist.\n" << std::endl;
}