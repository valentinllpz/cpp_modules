/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:29:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/11 16:16:32 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	control_input(std::string *dst)
{
	while (std::getline(std::cin, *dst))
	{
		if ((*dst).empty())
			std::cout << "Nothing entered, try again: ";
		else
			break ;
	}
}

void	add_contact(Contacts *phonebook)
{
	int		i;

	i = Contacts::get_nbInst();
	if (i < 8)
	{
		phonebook[i].get_details();
		Contacts::inc_nbInst();
	}
	else
		std::cout << "Your contact list is full.\n";
	return ;
}

void	search_contact(Contacts *phonebook)
{
	int			i;
	std::string	input;

	i = Contacts::get_nbInst();
	if (i == 0)
	{
		std::cout << "Your Awesome Phone Book is empty.\n";
		return ;
	}
	print_book(phonebook, i);
	std::cout << "What is the index of the contact you are looking for? ";
	i = 0;
	std::cin >> i;
	while (std::cin.fail() || (i < 0 || i > 7))
	{
        std::cout << "Input should be an integer between 0 and 7. Try again: ";
        std::cin.clear();
		std::cin.ignore();
        std::cin >> i;
	}
	std::cin.clear();
	std::cin.ignore();
	print_contact(phonebook, i);
}
