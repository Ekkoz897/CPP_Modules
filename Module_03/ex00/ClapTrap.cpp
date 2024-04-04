/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:34:05 by apereira          #+#    #+#             */
/*   Updated: 2024/04/04 07:45:40 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default created." << std::endl;
	this->name = "default";
	this->hit_pts = 10;
	this->nrg_pts = 10;
	this->atk_dmg = 0;
}

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "ClapTrap " << str << " created." << std::endl;
	this->name = str;
	this->hit_pts = 10;
	this->nrg_pts = 10;
	this->atk_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "ClapTrap " << this->name << " copied." << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src)
{
	std::cout << "ClapTrap copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hit_pts = src.hit_pts;
		this->nrg_pts = src.nrg_pts;
		this->atk_dmg = src.atk_dmg;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->nrg_pts < 1)
	{
		std::cout << "Claptrap " << this->name << " has no energy points left." << std::endl;
		return ;
	}
	if (this->hit_pts <= 0)
	{
		std::cout << "Claptrap " << this->name << " has no hit points left." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " atacks " << target << ", causing " << this->atk_dmg << " points of damage! " << std::endl;
	this->nrg_pts--;	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->nrg_pts < 1)
	{
		std::cout << "Claptrap " << this->name << " has no energy points left." << std::endl;
		return ;
	}
	this->nrg_pts -= 1;
	this->hit_pts += amount;
	std::cout << "Claptrap " << this->name << " repaired itself and gained " << amount << " Hit Points! " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_pts <= 0)
	{
		std::cout << "Claptrap " << this->name << " has no hit points left." <<std::endl;
		return ;
	}
	this->hit_pts -= amount;
	std::cout << "Claptrap " << this->name << " was attacked, and lost " << amount << " hit points! " << std::endl;
}

int	ClapTrap::getAttackDamage()
{
	return (this->atk_dmg);
}
