/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 07:34:05 by apereira          #+#    #+#             */
/*   Updated: 2024/02/26 09:40:47 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
  		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		std::string	getFirst();
		std::string	getLast();
		std::string	getNick();
		std::string	getSecret();
		std::string	getNumber();
		void		setFirst(std::string);
		void		setLast(std::string);
		void		setNick(std::string);
		void		setSecret(std::string);
		void		setNumber(std::string);
};

#endif