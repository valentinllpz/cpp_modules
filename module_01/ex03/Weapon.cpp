/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:35:03 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/18 19:49:12 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string	&getType() const
{
	return (&this->_type);
}

void		setType(std::string type)
{
	this->_type = type;
}
