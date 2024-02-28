/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:44:55 by apereira          #+#    #+#             */
/*   Updated: 2024/02/27 10:06:38 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string input = "heap";
	Zombie* z1 = newZombie(input);
	z1->announce();
	delete z1;

	std::string input2 = "stack";
	randomChump(input2);
	
	return (0);
}