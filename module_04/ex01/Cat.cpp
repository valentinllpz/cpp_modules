/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:45:13 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/02 20:56:20 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Cat::Cat()
{
	std::cout << "Default constructor for Cat instance called." << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Copy constructor for Cat instance called." << std::endl;
	this->_brain = NULL;
	*this = src;
	return ;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Default destructor for Cat instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Cat	&Cat::operator=(Cat const &rhs)
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

void		Cat::makeSound() const
{
	std::cout << "Cat: Meeeooow!" << std::endl;
	return ;
}

void		Cat::educate(std::string newIdeas[100])
{
	this->_brain->setIdeas(newIdeas);
	return ;
}

void		Cat::analyze()
{
	int				i;
	std::string		*ptr;

	ptr = this->_brain->getIdeas();
	std::cout << "Analyzing brain's content:" << std::endl;
	for (i = 0; i < 100; i++)
		std::cout << ptr[i] << " ";
	std::cout << "\nDone." << std::endl;
	return;
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
