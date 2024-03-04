/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 07:49:59 by apereira          #+#    #+#             */
/*   Updated: 2024/03/04 13:52:36 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl joe;

    if (argc != 2)
	{
		std::cout << "Expected one parameter.\n" << std::endl;
        return (1);
	}
    std::string input = argv[1];
    const char* levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && input != levels[i])
        i++;
    if (i == 4)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    for (int j = i; j < 4; j++)
    {
        switch (j) {
            case 0:
                joe.complain("DEBUG");
                break;
            case 1:
                joe.complain("INFO");
                break;
            case 2:
                joe.complain("WARNING");
                break;
            case 3:
                joe.complain("ERROR");
                break;
        }
    }
	return (0);
}
