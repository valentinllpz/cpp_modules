/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:41:42 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/03 17:59:11 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Character::Character()
{
	int		i;

	std::cout << "Default constructor for Character instance called." << std::endl;
	this->name = "unset";
	for (i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character(std::string name)
{
	int		i;

	std::cout << "Default constructor for Character instance called." << std::endl;
	this->name = name;
	for (i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

Character::~Character()
{
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Character	&Character::operator=(Character const &rhs)
{
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */



/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */



/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, Character const &i)
{
	return (o);
}
