/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:27:42 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/18 17:44:07 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	Zombie	*heap;
	Zombie	stack("Karen");

	heap = newZombie("John");
	heap->announce();
	delete heap;
	randomChump("Bob");
	stack.announce();
	return (0);
}
