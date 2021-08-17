/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:37:12 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/17 19:19:03 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "awesomephonebook.hpp"

Contacts::Contacts(void)
{
	return ;
}

Contacts::~Contacts(void)
{
	return ;
}

std::string	Contacts::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contacts::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contacts::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contacts::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string	Contacts::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void	Contacts::ask_details(void)
{
	std::cout << "First name: ";
	control_input(&(this->_first_name));
	std::cout << "Last name: ";
	control_input(&(this->_last_name));
	std::cout << "Nickname: ";
	control_input(&(this->_nickname));
	std::cout << "Phone number: ";
	control_input(&(this->_phone_number));
	std::cout << "Darkest secret: ";
	control_input(&(this->_darkest_secret));
	std::cout << "\nNew contacted added succesfully!\n";
}

void	Contacts::print_contact() const
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}