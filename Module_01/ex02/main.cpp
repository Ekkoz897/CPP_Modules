/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:57:59 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 12:05:47 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	// pointer to str
	std::string	*stringPTR = &str;
	// reference to str
	std::string &stringREF = str;

	// address of str
	std::cout << &str << std::endl;
	// addres of stringPTR
	std::cout << stringPTR << std::endl;
	// addres of stringREF
	std::cout << &stringREF << std::endl;

	// value of string variable.
	std::cout << str << std::endl;
	// value pointed by stringPTR.
	std::cout << *stringPTR << std::endl;
	// value pointed by stringREF.
	std::cout << stringREF << std::endl;
}
