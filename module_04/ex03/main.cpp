/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:44:06 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/06 21:25:18 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

int	main()
{
	AMateria 		*cure = new Cure();
	AMateria 		*ice = new Ice();
	Character 		healer("Healer");
	Character 		iceMage("Ice Mage");
	Character 		copy(iceMage);
	MateriaSource	source;
	MateriaSource	source_copy(source);

	std::cout << std::endl;
	std::cout << "---> Learning Materia for the MateriaSource:" << std::endl;
	source.learnMateria(cure);
	source.learnMateria(ice);
	std::cout << std::endl;
	std::cout << "---> Proving our source_copy is a deep copy of source:" << std::endl;
	healer.equip(source_copy.createMateria("cure"));
	std::cout << std::endl;
	std::cout << "---> Assigning freshly created Materia to Characters:" << std::endl;
	healer.equip(source.createMateria("cure"));
	iceMage.equip(source.createMateria("ice"));
	std::cout << std::endl;
	std::cout << "--> Unequiping Materia does not delete it: (but pointer to Materia will be definitely lost)" << std::endl;
	healer.unequip(0);
	std::cout << std::endl;
	std::cout << "--> Proving our copy is a deep copy of Ice Mage:" << std::endl;
	iceMage.use(0, copy);
	copy.use(0, iceMage);
	std::cout << "^ also just proved Materia is deleted after use." << std::endl;
	copy.use(0, iceMage);
	delete cure;
	delete ice;
	return (0);
}
