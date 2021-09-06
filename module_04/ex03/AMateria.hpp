/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:17:12 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/06 19:56:28 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string			type;
    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(AMateria const &src);
        virtual ~AMateria();

		AMateria &operator=(AMateria const &rhs);

        std::string const   &getType() const;

        virtual AMateria    *clone() const = 0;
        virtual void        use(ICharacter &target);
};

std::ostream	&operator<<(std::ostream &o, AMateria const &i);

#endif
