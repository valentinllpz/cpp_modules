/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:29:27 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/24 14:06:52 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int ac, char **av)
{
	std::string		input;
	Convert			*foo;

	if (ac != 2)
	{
		std::cout << "Error: this program must have one argument." << std::endl;
		return (1);
	}
	input = av[1];
	foo = new Convert(input);
	std::cout << *foo << std::endl;
	delete foo;
	return (0);
}
