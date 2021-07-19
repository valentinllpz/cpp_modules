/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:37:12 by vlugand-          #+#    #+#             */
/*   Updated: 2021/07/15 18:15:06 by vlugand-         ###   ########.fr       */
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