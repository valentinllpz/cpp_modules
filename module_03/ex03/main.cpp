/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:12:45 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/31 17:39:10 by vlugand-         ###   ########.fr       */
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
	po.takeDammage(tinkywinky.getAttackDammage());
	dipsy.attack("Tinkywinky");
	tinkywinky.takeDammage(dipsy.getAttackDammage());
	laalaa.attack("Tinkywinky");
	tinkywinky.takeDammage(laalaa.getAttackDammage());
	tinkywinky.attack("Laa-Laa");
	laalaa.takeDammage(tinkywinky.getAttackDammage());
	dipsy.attack("Tinkywinky");
	tinkywinky.takeDammage(dipsy.getAttackDammage());
	laalaa.attack("Tinkywinky");
	tinkywinky.takeDammage(laalaa.getAttackDammage());
	tinkywinky.attack("Dipsy");
	tinkywinky.beRepaired(10);
	tinkywinky.highFiveGuys();
	std::cout << std::endl;
	
	return (0);
}
