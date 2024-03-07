/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:11:46 by apereira          #+#    #+#             */
/*   Updated: 2024/03/07 13:30:55 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->nbr = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(other.getRawBits());
}

// Pushing the bits to the left by the number of fractional bits, to get the fixed point binary representation
Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(nb << this->fractBitsNbr);
}

// Same principle as above, but we need to round the float to the nearest integer
Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(nb * (1 << this->fractBitsNbr)));
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nbr);
}

void	Fixed::setRawBits(int const raw)
{
	this->nbr = raw;
}

// WIll return the float representation of the fixed point number with slight precision loss
// due to the fact that we are using a fixed number of fractional bits
float	Fixed::toFloat(void) const
{
	return ((float)this->nbr / (1 << this->fractBitsNbr));
}

int	Fixed::toInt(void) const
{
	return (this->nbr >> this->fractBitsNbr);
}

// Overloading the << operator to print the float representation of the fixed point number,
// takes the variable, turns into a float and returns it into the ostream
std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}
