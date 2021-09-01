/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:04:27 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/01 19:55:52 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor for WrongAnimal instance called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << "Copy constructor for WrongAnimal instance called." << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default destructor for WrongAnimal instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

WrongAnimal		&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void		WrongAnimal::makeSound() const
{
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string		WrongAnimal::getType() const
{
	return (this->type);
}

void			WrongAnimal::setType(std::string newType)
{
	this->type = newType;
	return ;
}

/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &i)
{
	o << i.getType();
	return (o);
}
