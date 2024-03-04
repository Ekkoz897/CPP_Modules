/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 07:49:43 by apereira          #+#    #+#             */
/*   Updated: 2024/03/04 13:38:56 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!\n" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	const char	*levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	j = 0;
	for (int i = 0; i < 4 && level != levels[i]; i++)
		j++;
	if (j < 4)
	{
		(this->*functions[j])();
		return ;
	}
	std::cout << "Level doesn't exist" << std::endl;
}
