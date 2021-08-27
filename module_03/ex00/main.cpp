/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:12:45 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/27 18:10:37 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main()
{
	ClapTrap	po("Po");
	ClapTrap	tinkywinky("Tinkywinky");
	ClapTrap	copy(tinkywinky);

	po.attack(tinkywinky.getName());
	tinkywinky.takeDammage(po.getAttackDammage());
	po.beRepaired(10);
	return (0);
}