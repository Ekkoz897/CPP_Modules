/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:04:40 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 14:18:27 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Area of a triangle in coordinate geometry = (x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)) / 2

Fixed	cross_product(Point const a, Point const b, Point const c)
{
	Fixed cp;

	cp = a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY());
	if (cp < 0)
		cp = cp * -1;
	return (cp);
}

// If the area of the 3 smaller triangles is equal to the area of the main triangle, then 
// the point is inside the triangle

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A1;
	Fixed A2;
	Fixed A3;
	Fixed A;

	A = cross_product(a, b, c) / 2;
	A1 = cross_product(a, b, point) / 2;
	A2 = cross_product(a, point, c) / 2;
	A3 = cross_product(point, b, c) / 2;
	if (A1 == 0 || A2 == 0 || A3 == 0)
		return (false);
	else if (A1 + A2 + A3 == A)
		return (true);
	else
		return (false);
}
