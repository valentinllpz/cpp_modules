/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:41:52 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/02 20:55:54 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(Cat const &src);
		virtual	~Cat();

		Cat &operator=(Cat const &rhs);
		virtual void	makeSound() const;
		void			educate(std::string newIdeas[100]);
		void			analyze();
};

std::ostream	&operator<<(std::ostream &o, Cat const &i);

#endif
