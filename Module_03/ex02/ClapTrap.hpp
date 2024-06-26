/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:47:06 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 14:20:16 by apereira         ###   ########.fr       */
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
			int hit_pts;
			int nrg_pts;
			int atk_dmg;

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
