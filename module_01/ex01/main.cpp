/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:27:42 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/18 17:44:02 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	Zombie	*horde;
	int		size;
	int		i;

	size = 20;
	horde = zombieHorde(size, "Jean");
	for (i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
