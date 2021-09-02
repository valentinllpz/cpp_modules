/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:41:52 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/02 14:46:28 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog(Dog const &src);
		virtual	~Dog();

		Dog &operator=(Dog const &rhs);
		virtual void	makeSound() const;
};

std::ostream	&operator<<(std::ostream &o, Dog const &i);

#endif
