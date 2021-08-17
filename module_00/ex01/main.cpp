/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:16:06 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/17 19:19:00 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesomephonebook.hpp"

int		main(void)
{
	std::string	input;
	Phonebook 	awpb;
		
	std::cout << "Welcome to my Awesome Phone Book !\n";
	std::cout << "What would you like to do ? ";
	while (std::getline(std::cin, input) && input != "EXIT")
	{
		if (input == "ADD")
			awpb.add_contact();
		else if (input == "SEARCH")
			awpb.search_contact();
		else
			std::cout << "Unvalid command. Please use ADD, SEARCH or EXIT.\n";
		std::cout << "\nWhat would you like to do next ? ";
	}
	std::cout << "\nGood bye !\n";
	return (0);
}
