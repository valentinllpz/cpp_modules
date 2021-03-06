/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:50:48 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/31 16:59:42 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap();

		FragTrap &operator=(FragTrap const &rhs);

		void	highFiveGuys() const;
		void	attack(std::string const &target) const;
};

std::ostream	&operator<<(std::ostream &o, FragTrap const &i);

#endif
