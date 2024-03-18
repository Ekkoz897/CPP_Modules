/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:46:26 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 12:05:35 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class Zombie
{
	private:
			std::string name;
	public:
					Zombie(std::string name);
					~Zombie();
			void	announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
