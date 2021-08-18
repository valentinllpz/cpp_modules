/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:46:18 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/18 18:00:14 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];
	std::string const name2[] = {"Charles", "Claude", "Luc", "Eudes", "Réné",
	"Jean", "François",	"Michel", "Marie", "Baptiste", "Paul", "Pierre", "Bon"};
	int		i;

	srand(time(0));
	for (i = 0 ; i < N ; i++)
			horde[i].set_name(name + "-" + name2[rand()%(sizeof(name2) / sizeof(name2[0]))]);
	return (horde);
}
