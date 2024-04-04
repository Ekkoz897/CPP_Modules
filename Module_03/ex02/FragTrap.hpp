/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:49:45 by apereira          #+#    #+#             */
/*   Updated: 2024/04/04 08:05:23 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cmath>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string str);
		FragTrap(const FragTrap& src);
    	~FragTrap();
		FragTrap&	operator=(const FragTrap& src);

		void highFivesGuys(void);
};

#endif