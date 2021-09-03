/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:33:50 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/03 17:22:50 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default constructor for Cure instance called." << std::endl;
	return ;
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	std::cout << "Parametric constructor for Cure instance called." << std::endl;
	*this = src;
	return ;
}

Cure::~Cure()
{
	std::cout << "Destructor for Cure instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Cure	&Cure::operator=(Cure const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

AMateria	*AMateria::clone() const
{
	return (new Cure());
}

void		use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wonds *" << std::endl;
	return ;
}
