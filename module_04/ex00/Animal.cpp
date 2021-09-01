/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:04:27 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/01 19:45:43 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Animal::Animal()
{
	std::cout << "Default constructor for Animal instance called." << std::endl;
	return ;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Copy constructor for Animal instance called." << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "Default destructor for Animal instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Animal		&Animal::operator=(Animal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void		Animal::makeSound() const
{
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string		Animal::getType() const
{
	return (this->type);
}

void			Animal::setType(std::string newType)
{
	this->type = newType;
	return ;
}

/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, Animal const &i)
{
	o << i.getType();
	return (o);
}
