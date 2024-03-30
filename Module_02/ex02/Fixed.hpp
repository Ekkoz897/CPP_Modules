/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:01:01 by apereira          #+#    #+#             */
/*   Updated: 2024/03/30 12:46:32 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cmath>

class Fixed {
	private:
			int					FixedPoint;
			static const int	Bits = 8;

	public:
			Fixed();
			Fixed(const int nb);
			Fixed(const float nb);
			~Fixed();
			Fixed(const Fixed& other);

			Fixed&	operator=(const Fixed& other);
			
			int		getRawBits(void) const;
			void	setRawBits(int const raw);

			float   toFloat(void) const;
			int     toInt(void) const;

			Fixed	operator+(Fixed const &a);
			Fixed	operator-(Fixed const &a);
			Fixed	operator*(Fixed const &a);
			Fixed	operator/(Fixed const &a);

			Fixed	operator++(void);
			Fixed	operator++(int nb);
			Fixed	operator--(void);
			Fixed	operator--(int nb);

			bool	operator>(const Fixed &rhs) const;
			bool	operator<(const Fixed &rhs) const;
			bool    operator>=(const Fixed &rhs) const;
			bool	operator<=(const Fixed &rhs) const;
			bool    operator==(const Fixed &rhs) const;
			bool	operator!=(const Fixed &rhs) const;

		// A static member function can be called even if no objects of the class exist.
		// A statis var's value is common to all instances of the class
			static Fixed&		min(Fixed &a, Fixed &b);
			static const Fixed&	min(const Fixed &a, const Fixed &b);
			static Fixed&		max(Fixed &a, Fixed &b);
			static const Fixed&	max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif