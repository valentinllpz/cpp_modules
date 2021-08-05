/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:38:13 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/05 18:01:51 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


void	print_line()
{

}

void	print_footer()
{

}

void	print_header()
{
	std::cout << std::setfill ('-') << std::setw (45) << '\n';

}

void	print_book(Contacts *phonebook, int nb)
{
	nb = Contacts::get_nbInst();
	(void)phonebook;
	

}