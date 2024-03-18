/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 07:49:52 by apereira          #+#    #+#             */
/*   Updated: 2024/03/12 12:06:37 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>

class Harl
{
	private:
			void    debug(void);
			void    info(void);
			void    warning(void);
			void    error(void);
	public:
			void	complain(std::string level);
};