/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:00:18 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/02 13:43:43 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string		type;
	public:
		Animal();
		Animal(Animal const &src);
		virtual	~Animal();

		Animal &operator=(Animal const &rhs);
		virtual void	makeSound() const;
		std::string		getType() const;
		void			setType(std::string newType);
};

std::ostream	&operator<<(std::ostream &o, Animal const &i);

#endif
