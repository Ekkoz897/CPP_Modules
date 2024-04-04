/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:14:20 by apereira          #+#    #+#             */
/*   Updated: 2024/04/04 07:47:18 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cmath>


 // Protected Inheritance: All public and protected members of the base class become protected in the derived class.
class ClapTrap {
	protected:
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