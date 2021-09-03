/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:45:13 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/02 18:40:27 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Dog::Dog()
{
	std::cout << "Default constructor for Dog instance called." << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Copy constructor for Dog instance called." << std::endl;
	*this = src;
	return ;
}

Dog::~Dog()
{
	std::cout << "Default destructor for Dog instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Dog	&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void		Dog::makeSound() const
{
	std::cout << "Dog: Woof Woof!" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */



/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, Dog const &i)
{
	o << i.getType();
	return (o);
}
