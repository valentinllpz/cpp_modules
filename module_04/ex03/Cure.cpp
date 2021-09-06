/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:33:50 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/06 16:21:52 by vlugand-         ###   ########.fr       */
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
	std::cout << "Copy constructor for Cure instance called." << std::endl;
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
//	this->type = rhs.getType();
	(void)rhs;
	std::cout << "coucou = cure" << std::endl;
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

AMateria	*Cure::clone() const
{
	return (new Cure());
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wonds *" << std::endl;
	return ;
}
