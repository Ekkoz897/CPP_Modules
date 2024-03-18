/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:12:36 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 14:13:19 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat(void)
{
    std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->br = new Brain();
    return ;
}

// Copy constructor
Cat::Cat(const Cat &other) : AAnimal()
{
    std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
    return ;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Destructor
Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
	delete this->br;
    return ;
}


std::string Cat::getType() const
{
	return (this->type);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}
