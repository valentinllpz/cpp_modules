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

#include "FragTrap.hpp"

int		main()
{
	ClapTrap	po("Po");
	FragTrap	dipsy("Dipsy");
	FragTrap	frag_copy(dipsy);

	std::cout << std::endl;
	dipsy.attack(po.getName());
	po.takedamage(dipsy.getAttackDamage());
	po.attack("Dipsy");
	po.beRepaired(10);
	dipsy.highFiveGuys();
	std::cout << std::endl;
	
	return (0);
}
