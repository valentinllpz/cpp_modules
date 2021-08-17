/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:17:56 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/17 19:18:58 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesomephonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_contact_nb = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

int	Phonebook::get_contact_nb(void) const
{
	return (this->_contact_nb);
}

Contacts*	Phonebook::get_list()
{
	return (this->list);
}

void	Phonebook::add_contact(void)
{
	int		i;

	i = Phonebook::get_contact_nb();
	if (i < 8)
	{
		this->list[i].ask_details();
		Phonebook::_contact_nb++;
	}
	else
		std::cout << "Your contact list is full.\n";
	return ;
}

void	Phonebook::search_contact() const
{
	int			i;
	std::string	input;

	if (this->_contact_nb == 0)
	{
		std::cout << "Your Awesome Phone Book is empty.\n";
		return ;
	}
	print_book();
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
	this->list[i].print_contact();
}

void	Phonebook::print_book() const
{
	int		i;

	std::cout << '*' << std::setfill('-') << std::setw(44) << '*' << std::endl;
	print_line("Index" , "First name", "Last name", "Nickname");
	std::cout << '*' << std::setfill('-') << std::setw(44) << '*' << std::endl;
	for (i = 0; i < this->_contact_nb; i++)
		print_line(itoa_cpp(i), this->list[i].get_first_name(), this->list[i].get_last_name(), this->list[i].get_nickname());
	std::cout << '*' << std::setfill('-') << std::setw(44) << '*' << std::endl;
}
