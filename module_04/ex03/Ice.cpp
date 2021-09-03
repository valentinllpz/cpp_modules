/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:33:50 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/03 17:28:05 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default constructor for Ice instance called." << std::endl;
	return ;
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	std::cout << "Parametric constructor for Ice instance called." << std::endl;
	*this = src;
	return ;
}

Ice::~Ice()
{
	std::cout << "Destructor for Ice instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Ice	&Ice::operator=(Ice const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

AMateria	*AMateria::clone() const
{
	return (new Ice());
}

void		use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */
