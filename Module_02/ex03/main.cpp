/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:30:40 by apereira          #+#    #+#             */
/*   Updated: 2024/03/08 14:32:13 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point const a;
	Point const b(4,0);
	Point const c(0,4);
	Point const d(0.1,3);

	bool question = bsp(a, b, c, d);
	if (question == true)
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point isn't in the triangle" << std::endl;
	return (0);
}
