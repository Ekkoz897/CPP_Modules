/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:12:32 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 13:15:09 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string	type;
    public:
        Animal(void);
        Animal(const Animal& other);
        Animal &operator=(const Animal &other);
		virtual ~Animal();
	
		std::string getType() const;
		virtual void	makeSound() const;
};

#endif

