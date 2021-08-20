/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:35:03 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/19 16:32:55 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->_type = name;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string const &Weapon::getType() const
{
	return (this->_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}
