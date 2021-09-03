/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:11:22 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/03 17:57:50 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		std::string		name;
		AMateria		*inventory[4];
	public:
		Character();
		Character(std::string name);
		Character(Character const &src);
		~Character();

		Character &operator=(Character const &rhs);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

std::ostream	&operator<<(std::ostream &o, Character const &i);

#endif
