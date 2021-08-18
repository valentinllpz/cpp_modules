/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:21:53 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/18 17:42:38 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>
#include <string>
#include <time.h>

class Zombie
{
	public:

		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce(void) const;
		void	set_name(std::string name);

	private:

		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif