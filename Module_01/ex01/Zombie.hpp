/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:10:40 by apereira          #+#    #+#             */
/*   Updated: 2024/02/27 10:13:05 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class Zombie {
	private:
			std::string	name;
	public:
			Zombie();
			~Zombie();
			void		setName(std::string str);
			void		announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif