/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:04:27 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/03 14:53:02 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

AAnimal::AAnimal()
{
	std::cout << "Default constructor for AAnimal instance called." << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	std::cout << "Copy constructor for AAnimal instance called." << std::endl;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << "Default destructor for AAnimal instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

AAnimal		&AAnimal::operator=(AAnimal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string		AAnimal::getType() const
{
	return (this->type);
}

void			AAnimal::setType(std::string newType)
{
	this->type = newType;
	return ;
}

/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, AAnimal const &i)
{
	o << i.getType();
	return (o);
}
