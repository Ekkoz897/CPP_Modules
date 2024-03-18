/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 07:49:59 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 12:06:26 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl	joe;

    joe.complain("DEBUG");
	joe.complain("INFO");
	joe.complain("WARNING");
	joe.complain("ERROR");
	joe.complain("random garbage value");
}
