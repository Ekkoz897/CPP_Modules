/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:13:22 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 12:05:56 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class HumanA
{
	private:
			std::string	name;
			Weapon&		wp;
	public:
						HumanA(std::string str, Weapon &w);
						~HumanA();
			std::string	getName();
			void		attack();
};

#endif