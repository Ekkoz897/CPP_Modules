/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:34:12 by apereira          #+#    #+#             */
/*   Updated: 2024/04/04 07:45:42 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cmath>

class ClapTrap {
	private:
			std::string name;
			unsigned int hit_pts;
			unsigned int nrg_pts;
			unsigned int atk_dmg;

	public:
			ClapTrap();
			ClapTrap(std::string str);
			ClapTrap(const ClapTrap &src);
			~ClapTrap();

			ClapTrap& operator=(ClapTrap const &src);

			int	getAttackDamage();

			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};

#endif