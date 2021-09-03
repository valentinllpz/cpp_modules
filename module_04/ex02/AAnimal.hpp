/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:00:18 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/03 15:02:44 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string		type;
	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		virtual	~AAnimal();

		AAnimal &operator=(AAnimal const &rhs);
		virtual void	makeSound() const = 0; // this method has no implementation, which makes the class abstract. It indicates that children must implement this behaviour.
		std::string		getType() const;
		void			setType(std::string newType);
};

std::ostream	&operator<<(std::ostream &o, AAnimal const &i);

#endif
