/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:13:28 by apereira          #+#    #+#             */
/*   Updated: 2024/02/28 14:10:42 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	//reference: never changes, assigned in the first place
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	club.setType("");
	bob.attack();

	std::cout << std::endl;
	
	//pointer: can be assigned null directly. whereas a reference cannot be
	Weapon club1 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club1);
	jim.attack();
	club1.setType("some other type of club");
	jim.attack();

	Weapon club2 = Weapon("");
	jim.setWeapon(club2);
	jim.attack();
    return 0;
}