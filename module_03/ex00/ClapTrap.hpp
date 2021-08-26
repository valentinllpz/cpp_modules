/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:08:47 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/26 18:03:29 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		ClapTrap();
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDammage;	
		
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();

		ClapTrap 		&operator=(ClapTrap const &rhs);

		void			attack(std::string const &target) const;
		void			takeDammage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName() const;
		int				getHitPoints() const;
		void			setHitPoints(int n);
		int				getEnergyPoints() const;
		void			setEnergyPoints(int n);
		int				getAttackDammage() const;
		void			setAttackDammage(int n);

};

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i);

#endif
