/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 18:36:28 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/31 17:37:14 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string		_name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap();

		DiamondTrap &operator=(DiamondTrap const &rhs);

		void			whoAmI();
		void			attack(std::string const &target) const;
		std::string		getDiamondName() const;
		void			setDiamondName(std::string name);
};

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &i);

#endif