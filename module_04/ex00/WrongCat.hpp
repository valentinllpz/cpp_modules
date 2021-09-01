/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:41:52 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/01 19:21:20 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
		
	public:
		WrongCat();
		WrongCat(WrongCat const &src);
		~WrongCat();

		WrongCat 	&operator=(WrongCat const &rhs);
		void		makeSound() const;
};

std::ostream	&operator<<(std::ostream &o, WrongCat const &i);

#endif
