/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:21:53 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/17 20:29:58 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:

		Zombie(std::string s);
		~Zombie();

		void	announce(void) const;

	private:

		std::string	_name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif