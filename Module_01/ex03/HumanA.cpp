/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:13:21 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 12:05:54 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// wp is a reference and so it has to be initialized when declared/creating the object.
HumanA::HumanA(std::string str, Weapon &w) : wp(w)
{
	this->name = str;
}

HumanA::~HumanA()
{
}

std::string HumanA::getName(void)
{
    return (this->name);
}

void	HumanA::attack()
{
	if (this->wp.getType() != "")
		std::cout << this->getName() << " attacks with their " << wp.getType() << std::endl;
	else
		std::cout << this->getName() << " attacks with their empty weapon" << std::endl;
}
