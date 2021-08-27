/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 18:36:28 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/27 18:38:09 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap
{
	private:
		std::string		_name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap();

		DiamondTrap &operator=(DiamondTrap const &rhs);
};

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &i);
