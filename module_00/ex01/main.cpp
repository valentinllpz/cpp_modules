/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:16:06 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/11 16:16:37 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main(void)
{
	std::string	input;
	Contacts phonebook[8];
		
	std::cout << "Welcome to my Awesome Phone Book !\n";
	std::cout << "What would you like to do ? ";
	while (std::getline(std::cin, input) && input != "EXIT")
	{
		if (input == "ADD")
			add_contact(phonebook);
		else if (input == "SEARCH")
			search_contact(phonebook);
		else
			std::cout << "Unvalid command. Please use ADD, SEARCH or EXIT.\n";
		std::cout << "\nWhat would you like to do next ? ";
	}
	std::cout << "\nGood bye !\n";
	return (0);
}
