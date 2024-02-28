/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:10:11 by apereira          #+#    #+#             */
/*   Updated: 2024/02/27 10:25:09 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 3;
	Zombie* z1 = zombieHorde(N, "bob");
	for (int i = 0; i < N; i++)
		z1[i].announce();
	delete [] z1;

	std::cout << std::endl << "Second wave INCOMING !\n" << std::endl;

	N = 5;
	Zombie* z2 = zombieHorde(N, "jim");
	for (int i = 0; i < N; i++)
		z2[i].announce();
	delete [] z2;
	
	std::cout << std::endl << "Congratz, you made it !\n" << std::endl;
}
