/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:12:45 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/27 18:10:47 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	ClapTrap	po("Po");
	FragTrap	dipsy("Dipsy");
	FragTrap	frag_copy(dipsy);

	std::cout << std::endl;
	dipsy.attack(po.getName());
	po.takeDammage(dipsy.getAttackDammage());
	po.attack("Dipsy");
	po.beRepaired(10);
	dipsy.highFiveGuys();
	std::cout << std::endl;
	
	return (0);
}
