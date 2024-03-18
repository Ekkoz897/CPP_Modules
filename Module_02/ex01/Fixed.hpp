/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:11:48 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 14:18:12 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cmath>

class Fixed {
	private:
			int					nbr;
			static const int	fractBitsNbr = 8;
	public:
			Fixed();
			~Fixed();
			Fixed(const Fixed& other);
			Fixed(const int nb);
			Fixed(const float nb);
			
			Fixed& operator=(const Fixed& other);
			
			int		getRawBits(void) const;
			void	setRawBits(int const raw);

			float   toFloat(void) const;
			int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif