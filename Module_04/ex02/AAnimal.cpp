/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:12:34 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 14:16:13 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Default constructor
AAnimal::AAnimal(void)
{
    std::cout << "Default AAnimal constructor called" << std::endl;
	this->type = "AAnimal";
    return ;
}

// Copy constructor
AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = other;
    return ;
}

// Assignment operator overload
AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "AAnimal assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Destructor
AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destructor called" << std::endl;
    return ;
}

std::string AAnimal::getType() const
{
	return (this->type);
}
