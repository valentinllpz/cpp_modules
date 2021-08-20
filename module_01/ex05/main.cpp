/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:48:04 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/20 17:04:23 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	std::string	input;
	Karen		karen;
	
	std::cout << "Booting up Karen 2.0... Use at your own risks!" << std::endl;
	std::cout << "What would you like to do ? ";
	while (std::getline(std::cin, input) && input != "EXIT")
	{
		karen.complain(input);
		std::cout << "\nWhat would you like to do next ? ";
	}
	std::cout << "\nSHUT UP KAREN\n";
}
