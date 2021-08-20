/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:48:04 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/20 17:53:11 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	convert_level(std::string level)
{
	std::string		index[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int				i;

	for (i = 0; i < 4; i++)
	{
		if (level == index[i])
			return (i);
	}
	return (-1);
}

int main(int ac, char **av)
{
	Karen		karen;

	if (ac != 2)
	{
		std::cout << "This program should have one of the following arguments \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\". Is it that complicated?" << std::endl;
		return (1);
	}
	switch (convert_level(av[1]))
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return (0);
}
