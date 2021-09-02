/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:45:13 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/02 20:58:43 by vlugand-         ###   ########.fr       */
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
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Copy constructor for Dog instance called." << std::endl;
	this->_brain = NULL;
	*this = src;
	return ;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Default destructor for Dog instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Dog	&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
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
