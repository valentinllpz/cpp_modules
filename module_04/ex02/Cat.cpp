/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:45:13 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/02 18:39:52 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Cat::Cat()
{
	std::cout << "Default constructor for Cat instance called." << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Copy constructor for Cat instance called." << std::endl;
	*this = src;
	return ;
}

Cat::~Cat()
{
	std::cout << "Default destructor for Cat instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Cat	&Cat::operator=(Cat const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void		Cat::makeSound() const
{
	std::cout << "Cat: Meeeooow!" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */



/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, Cat const &i)
{
	o << i.getType();
	return (o);
}
