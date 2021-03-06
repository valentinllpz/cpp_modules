/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:27:42 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/06 19:18:54 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &src);
		~Ice();

		Ice &operator=(Ice const &rhs);

		AMateria    *clone() const;
		void        use(ICharacter &target);
};

#endif
