/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:12:39 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 13:35:40 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->br = new Brain();
    return ;
}

// Copy constructor
Dog::Dog(const Dog &other) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
    return ;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
		this->type = other.type;
    return (*this);
}

// Destructor
Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
	delete this->br;
    return ;
}

	
std::string Dog::getType() const
{
	return (this->type);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}
