/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:38:03 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/06 19:56:38 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

AMateria::AMateria()
{
	std::cout << "Default constructor for AMateria instance called." << std::endl;
	this->type = "unset";
	return ;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "Parametric constructor for AMateria instance called." << std::endl;
	this->type = type;
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "Copy constructor for AMateria instance called." << std::endl;
	*this = src;
	return ;
}

AMateria::~AMateria()
{
	std::cout << "Destructor for AMateria instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	(void)rhs;
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void		AMateria::use(ICharacter &target)
{
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type == "cure")
		std::cout << "* heals " << target.getName() << "'s wonds *" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string const	&AMateria::getType() const
{
	return (this->type);
}

/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, AMateria const &i)
{
	o << i.getType();
	return (o);
}
