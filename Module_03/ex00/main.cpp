/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:34:04 by apereira          #+#    #+#             */
/*   Updated: 2024/03/08 14:34:04 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap c;
	ClapTrap a("a");
	ClapTrap b("b");
	std::cout << "\n";

	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(2);
	std::cout << "\n";
}