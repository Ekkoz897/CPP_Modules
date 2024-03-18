/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:47:27 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 14:20:19 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default created" << std::endl;
	this->hit_pts = 100;
	this->nrg_pts = 100;
	this->atk_dmg = 30;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	std::cout << "FragTrap " << str << " created." << std::endl;
	this->hit_pts = 100;
	this->nrg_pts = 100;
	this->atk_dmg = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destroyed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap()
{
	*this = src;
	std::cout << "FragTrap " << this->name << " copied." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hit_pts = src.hit_pts;
		this->nrg_pts = src.nrg_pts;
		this->atk_dmg = src.atk_dmg;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " requests a high five." << std::endl;
}
