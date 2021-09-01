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

int		main()
{
	ClapTrap	po("Po");
	ClapTrap	tinkywinky("Tinkywinky");
	ClapTrap	copy(tinkywinky);

	std::cout << std::endl;
	po.attack(tinkywinky.getName());
	tinkywinky.takedamage(po.getAttackDamage());
	po.beRepaired(10);
	std::cout << std::endl;

	return (0);
}