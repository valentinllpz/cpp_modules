/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:09:40 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/19 16:28:42 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define	WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:

		Weapon(std::string name);
		~Weapon();
		std::string const &getType() const;
		void setType(std::string type);

	private:
		
		std::string	_type;
};

#endif
