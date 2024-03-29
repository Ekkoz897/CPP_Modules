/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:01:04 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 14:18:18 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int nb)
{
	//std::cout << "Int constructor called" << std::endl;
	this->setRawBits(nb << this->Bits);
}

Fixed::Fixed(const float nb)
{
	//std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(nb * ((float)(1 << this->Bits))));
}

Fixed::Fixed(const Fixed& src)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(src.getRawBits());
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->FixedPoint = src.FixedPoint;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->FixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->FixedPoint = raw;
}

float   Fixed::toFloat(void) const
{
    return (float)(this->getRawBits()) / (1 << Bits);
}

int     Fixed::toInt( void ) const {
    return this->FixedPoint >> Bits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
    o << i.toFloat();
    return o;
}
