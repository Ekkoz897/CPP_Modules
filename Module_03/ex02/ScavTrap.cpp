/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:48:42 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 14:20:23 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default created" << std::endl;
	this->hit_pts = 100;
	this->nrg_pts = 50;
	this->atk_dmg = 20;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	std::cout << "ScavTrap " << str << " created." << std::endl;
	this->hit_pts = 100;
	this->nrg_pts = 50;
	this->atk_dmg = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " destroyed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap()
{
	*this = src;
	std::cout << "ScavTrap " << this->name << " copied." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hit_pts = src.hit_pts;
		this->nrg_pts = src.nrg_pts;
		this->atk_dmg = src.atk_dmg;
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is in gate keeper mode."<< std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->nrg_pts <= 0)
	{
		std::cout << "ScavTrap " << this->name << " has no energy points left." <<std::endl;
		return;
	}
	if (this->hit_pts <= 0)
	{
		std::cout << "ScavTrap " << this->name << " has no hit points left." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->atk_dmg << " points of damage! " << std::endl;
	this->nrg_pts -= 1;
}
