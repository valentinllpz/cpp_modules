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

#include "DiamondTrap.hpp"

int		main()
{
	ClapTrap		po("Po");
	FragTrap		dipsy("Dipsy");
	ScavTrap		laalaa("Laa-Laa");
	DiamondTrap		tinkywinky("TinkyWinky");
	DiamondTrap		diamond_copy(tinkywinky);
	

	std::cout << std::endl;
	tinkywinky.whoAmI();
	tinkywinky.guardGate();
	tinkywinky.attack("Po");
	po.takedamage(tinkywinky.getAttackDamage());
	dipsy.attack("Tinkywinky");
	tinkywinky.takedamage(dipsy.getAttackDamage());
	laalaa.attack("Tinkywinky");
	tinkywinky.takedamage(laalaa.getAttackDamage());
	tinkywinky.attack("Laa-Laa");
	laalaa.takedamage(tinkywinky.getAttackDamage());
	dipsy.attack("Tinkywinky");
	tinkywinky.takedamage(dipsy.getAttackDamage());
	laalaa.attack("Tinkywinky");
	tinkywinky.takedamage(laalaa.getAttackDamage());
	tinkywinky.attack("Dipsy");
	tinkywinky.beRepaired(10);
	tinkywinky.highFiveGuys();
	std::cout << std::endl;
	
	return (0);
}
