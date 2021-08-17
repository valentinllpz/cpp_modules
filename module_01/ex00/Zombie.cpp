/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:34:43 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/17 20:39:46 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string s)
{
	this->_name = s;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been destroyed." << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << '<' << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}