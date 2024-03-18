/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:12:47 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 13:23:54 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
        Brain*  br;
    public:
        Cat(void);
        Cat(const Cat& other);
        Cat &operator=(const Cat &other);
        virtual ~Cat();
	
		std::string getType() const;
		void	makeSound() const;
};

#endif

