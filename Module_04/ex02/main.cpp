/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:30:43 by apereira          #+#    #+#             */
/*   Updated: 2024/04/09 09:35:48 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// AAnimal	*a = new AAnimal();
    int n = 2;
    AAnimal* list[n];
    int i = 0;
    while (i < n / 2)
    {
        list[i] = new Dog;
        i++;
    }
    std::cout << std::endl;
    while (i < n)
    {
        list[i] = new Cat;
        i++;
    }
    std::cout << std::endl;
    for (int f = 0; f < n; f++)
        delete list[f];

    // std::cout << std::endl;
    // Cat c;
    // Cat d = c;
}