/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:09:40 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/18 19:34:59 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
	public:

		Weapon();
		~Weapon();
		std::string &getType() const;
		void setType(std::string type);

	private:
		
		std::string	_type;
};

