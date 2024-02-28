/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:13:30 by apereira          #+#    #+#             */
/*   Updated: 2024/02/28 13:14:59 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class Weapon
{
	private:
			std::string		type;
	public:
								Weapon(std::string type);
								~Weapon();
			const std::string&	getType();
			void				setType(std::string newType);
};

#endif