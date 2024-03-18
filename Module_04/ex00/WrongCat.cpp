/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:12:45 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 13:07:17 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat(void)
{
    std::cout << "Wrongcat default constructor called" << std::endl;
	this->type = "WrongCat";
    return ;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
    std::cout << "Wrongcat copy constructor called" << std::endl;
    *this = other;
    return ;
}

// Assignment operator overload
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Wrongcat assignment operator called" << std::endl;
    if (this != &other)
		this->type = other.type;
    return (*this);
}

// Destructor
WrongCat::~WrongCat(void)
{
    std::cout << "Wrongcat destructor called" << std::endl;
    return ;
}

std::string WrongCat::getType() const
{
	return (this->type);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat sound" << std::endl;
}