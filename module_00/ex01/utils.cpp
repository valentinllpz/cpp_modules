/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:29:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/17 17:05:40 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesomephonebook.hpp"

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

std::string		itoa_cpp(int nb)
{
	std::stringstream	out;

	out << nb;
	return (out.str());
}

void	format_cell(std::string s)
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
	format_cell(s1);
	std::cout << '|';
	format_cell(s2);
	std::cout << '|';
	format_cell(s3);
	std::cout << '|';
	format_cell(s4);
	std::cout << "|\n";
}
