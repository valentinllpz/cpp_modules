/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentinll <valentinll@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:38:13 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/09 16:22:29 by valentinll       ###   ########.fr       */
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
	std::cout << '|';
}

void	print_footer()
{

}

void	print_header()
{
	std::cout << std::setfill('-') << std::setw(45) << '\n';
	print_line("Index" , "First name", "Last name", "Nickname");
}

void	print_book(Contacts *phonebook, int nb)
{
	nb = Contacts::get_nbInst();
	(void)phonebook;
	
	print_header();
}