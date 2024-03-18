/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:14:44 by apereira          #+#    #+#             */
/*   Updated: 2024/03/11 14:41:33 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap d;
	ScavTrap e("e");
	ScavTrap f("f");
	std::cout << "\n";

	for (int i = 0; i <= 6; i++)
	{
		std::cout << i << std::endl;
		e.attack("f");
		f.takeDamage(e.getAttackDamage());
	}
	std::cout << "\n\n";
	
	f.attack("e");
	f.beRepaired(10);
	f.attack("e");
	f.guardGate();
	
	std::cout << "\n\n";
}
