/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:12:32 by apereira          #+#    #+#             */
/*   Updated: 2024/03/18 14:11:42 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
	protected:
		std::string	type;
    public:
        AAnimal(void);
        AAnimal(const AAnimal& other);
        AAnimal &operator=(const AAnimal &other);
		virtual ~AAnimal();
	
		std::string getType() const;
		virtual void	makeSound() const = 0;
};

#endif

