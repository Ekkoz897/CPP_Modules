/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:18:04 by apereira          #+#    #+#             */
/*   Updated: 2024/03/04 07:46:47 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string	replace_line(std::string line, std::string srch, std::string replc)
{
	int		i = line.find(srch, 0);
	size_t	len = srch.size();
	while (i >= 0)
	{
		line.erase(i, len);
		line.insert(i, replc);
		i = line.find(srch, i + replc.size());
	}
	return (line);
}

void	ft_replace(char **argv)
{
	std::fstream	file;
	std::ofstream	file1;
	std::string srch = argv[2];
	std::string replc = argv[3];
	std::string	line;
	std::string	line0;
	
	file.open(argv[1]);

	if (!file)
	{
		std::cout << "File does not exist !" << std::endl;
		return ;
	}
	getline(file, line0);
	if (line0 == "\0")
	{
		std::cout << "Empty file" << std::endl;
		file.close();
		return ;
	}
	strcat(argv[1], ".replace");
	file1.open(argv[1]);
	
	line0 = replace_line(line0, srch, replc);
	file1 << line0 << std::endl;
	
	while (getline(file, line))
	{
		line = replace_line(line, srch, replc);
		file1 << line << std::endl;
	}
	file.close();
	file1.close();
}
