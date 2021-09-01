/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:41:52 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/01 19:21:20 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	protected:
		
	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat &operator=(Cat const &rhs);
		virtual void	makeSound() const;
};

std::ostream	&operator<<(std::ostream &o, Cat const &i);

#endif
