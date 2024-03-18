/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:13:26 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 12:05:59 by apereira         ###   ########.fr       */
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