/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentinll <valentinll@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:37:12 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/09 15:03:48 by valentinll       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contacts.class.hpp"

Contacts::Contacts(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contacts::~Contacts(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Contacts::get_details(void)
{
	std::cout << "First name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
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
