/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:37:12 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/10 22:15:04 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Contacts::Contacts(void)
{
	return ;
}

Contacts::~Contacts(void)
{
	return ;
}

void	Contacts::get_details(void)
{
	std::cout << "First name: ";
	control_input(&(this->first_name));
	std::cout << "Last name: ";
	control_input(&(this->last_name));
	std::cout << "Nickname: ";
	control_input(&(this->nickname));
	std::cout << "Phone number: ";
	control_input(&(this->phone_number));
	std::cout << "Darkest secret: ";
	control_input(&(this->darkest_secret));
	std::cout << "\nNew contacted added succesfully!\n";
}

int		Contacts::_nbInst = 0;

int		Contacts::get_nbInst(void)
{
	return (Contacts::_nbInst);
}

void	Contacts::inc_nbInst(void)
{
	Contacts::_nbInst++;
	return ;
}
