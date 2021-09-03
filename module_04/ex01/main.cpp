/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:18:29 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/03 14:32:14 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	advanced_tests()
{
	Cat			cat;
	std::string ideas[100];

	ideas[0] = "eat";
	ideas[1] = "sleep";
	ideas[2] = "play";
	std::cout << "Teaching tricks:" << std::endl;
	cat.educate(ideas);
	cat.analyze();
	std::cout << "Teaching more tricks:" << std::endl;
	ideas[3] = "skate";
	Cat			cat_cpy(cat);
	cat_cpy.setType("Dog");
	cat.educate(ideas);
	std::cout << "[CAT]: ";
	std::cout << cat << std::endl;
	cat.analyze();
	std::cout << "[CAT_CPY]: ";
	std::cout << cat_cpy << std::endl;
	cat_cpy.analyze();
}

int	main()
{
	int	const		size = 6;
	Animal 			*array[size];
	int				i;

	std::cout << "Creating the array:" << std::endl;
	for (i = 0; i < size; i++)
	{
		if (i < size / 2)
			array[i] = new Cat;
		else
			array[i] = new Dog;
	}
	std::cout << "Displaying the content of the array:" <<std::endl;
	for (i = 0; i < size; i++)
		std::cout << *array[i] << std::endl;
	array[0]->setType("Tiger");
	array[size - 1]->setType("Wolf");
	std::cout << "\nNow, the first Cat instance's type was turned into Tiger, and the last Dog instance's type was turned into Wolf:" << std::endl;
	for (i = 0; i < size; i++)
		std::cout << *array[i] << std::endl;
	
	std::cout << "\nDeleting the array:" << std::endl;
	for (i = 0; i < size; i++)
		delete array[i];
	std::cout << "\nExiting main now." << std::endl;
	//advanced_tests();
	return (0);
}
