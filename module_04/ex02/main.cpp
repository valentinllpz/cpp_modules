/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:18:29 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/03 15:00:14 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal *a = new Cat();
//	AAnimal *b = new AAnimal(); Abstract Class instance is not possible
//	AAnimal	c;

	a->makeSound();
//	b->makeSound();
//	c.makeSound();
	return (0);
}
