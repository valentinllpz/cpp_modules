/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:38:13 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/10 23:23:54 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print_cell(std::string s)
{
	if (s.length() <= 10)
		std::cout << std::setfill(' ') << std::setw(10);
	else
	{
		s.resize(9);
		s.push_back('.');
	}
	std::cout << s;
}

void	print_line(std::string s1, std::string s2, std::string s3, std::string s4)
{
	std::cout << '|';
	print_cell(s1);
	std::cout << '|';
	print_cell(s2);
	std::cout << '|';
	print_cell(s3);
	std::cout << '|';
	print_cell(s4);
	std::cout << "|\n";
}

void	print_book(Contacts *phonebook, int nb)
{
	int		i;

	std::cout << '*' << std::setfill('-') << std::setw(44) << '*' << std::endl;
	print_line("Index" , "First name", "Last name", "Nickname");
	std::cout << '*' << std::setfill('-') << std::setw(44) << '*' << std::endl;
	for (i = 0; i < nb; i++)
		print_line(std::to_string(i), phonebook[i].first_name, phonebook[i].last_name, phonebook[i].nickname);
	std::cout << '*' << std::setfill('-') << std::setw(44) << '*' << std::endl;
}

void	print_contact(Contacts *phonebook, int i)
{
	std::cout << "First name: " << phonebook[i].first_name << std::endl;
	std::cout << "Last name: " << phonebook[i].last_name << std::endl;
	std::cout << "Nickname: " << phonebook[i].nickname << std::endl;
	std::cout << "Phone number: " << phonebook[i].phone_number << std::endl;
	std::cout << "Darkest secret: " << phonebook[i].darkest_secret << std::endl;
}