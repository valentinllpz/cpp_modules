/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:29:27 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/27 18:20:14 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int ac, char **av)
{
	Convert			*multi;

	if (ac != 2)
	{
		std::cout << "Error: this program must have one argument." << std::endl;
		return (1);
	}
	multi = new Convert(av[1]);
	multi->convertAll();
	delete multi;
	return (0);
}
