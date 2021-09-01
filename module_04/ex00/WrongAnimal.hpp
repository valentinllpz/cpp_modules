/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:00:18 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/01 19:55:47 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string		type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal();

		WrongAnimal 	&operator=(WrongAnimal const &rhs);
		void			makeSound() const;
		std::string		getType() const;
		void			setType(std::string newType);
};

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &i);

#endif
