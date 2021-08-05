/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:29:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/05 17:21:00 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add_contact(Contacts *phonebook) // ou mettre [8]
{
	int		i;

	i = Contacts::get_nbInst();
	if (i < 8)
	{
		phonebook[i].get_details();
		Contacts::inc_nbInst();
	}
	else
		std::cout << "Your contact list is full.";
	return ;
}

void	search_contact(Contacts *phonebook)
{
	int		i;
	std::string	input;

	i = Contacts::get_nbInst();
	if (i == 0)
	{
		std::cout << "Your Awesome Phone Book is empty.\n";
		return ;
	}
	print_book(phonebook, i);
}

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
		std::cout << "What would you like to do ? ";
	}
	return (0);
}
