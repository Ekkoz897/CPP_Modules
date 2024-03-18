/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:13:18 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 12:05:57 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->name = str;
	this->wp = NULL;
}

HumanB::~HumanB()
{
}

std::string HumanB::getName(void)
{
    return (this->name);
}

void	HumanB::attack()
{
	if (this->wp->getType() != "")
		std::cout << this->getName() << " attacks with their " << wp->getType() << std::endl;
	else
		std::cout << this->getName() << " doesn't have a weapon to atack with" << std::endl;
}

// Reference because it doesn't accept null ptrs, so there has to be a weapo. Combines flexibility of ptr and
// safety of references.
void	HumanB::setWeapon(Weapon &w)
{
	this->wp = &w;
}
