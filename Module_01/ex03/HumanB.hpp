/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:13:26 by apereira          #+#    #+#             */
/*   Updated: 2024/02/28 14:03:49 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class HumanB
{
	private:
			std::string	name;
			Weapon		*wp;
	public:
						HumanB(std::string str);
						~HumanB();
			std::string	getName();
			void		attack();
			void		setWeapon(Weapon &w);
};

#endif