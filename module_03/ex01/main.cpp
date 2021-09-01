/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:12:45 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/01 18:37:58 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	ClapTrap	po("Po");
	ScavTrap	laalaa("Laa-Laa");
	ScavTrap	scav_copy(laalaa);

	std::cout << std::endl;
	laalaa.guardGate();
	laalaa.attack(po.getName());
	po.takedamage(laalaa.getAttackDamage());
	po.attack("Laa-Laa");
	po.beRepaired(10);
	std::cout << std::endl;
	
	return (0);
}
