/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:05:11 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 14:20:20 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap g("g");
	FragTrap h("h");

	for (int i = 0; i <= 100; i++)
	{
		std::cout << i << std::endl;
		g.attack("h");
		h.takeDamage(g.getAttackDamage());
	}
	std::cout << std::endl;
	h.attack("g");
    h.beRepaired(100);
	h.attack("g");
    g.highFivesGuys();

	std::cout << "\n" << std::endl;
}
