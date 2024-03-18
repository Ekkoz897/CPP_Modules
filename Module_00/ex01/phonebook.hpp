/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 07:34:08 by apereira          #+#    #+#             */
/*   Updated: 2024/03/11 15:11:19 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			int		getCurrent();
			void	setCurrent(int a);
			int		addContact(int current);
			void	searchContact();
	
};

std::string	trimSpaces(std::string str);
void		cleanContact(Contact* ct, int current);
int			checkNumber(std::string str);
std::string cutWord(std::string str);

#endif
