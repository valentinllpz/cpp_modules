/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:41:42 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/06 21:09:33 by vlugand-         ###   ########.fr       */
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

	std::cout << "Parametric constructor for Character instance called." << std::endl;
	this->name = name;
	for (i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character(Character const &src)
{
	std::cout << "Copy constructor for Character instance called." << std::endl;
	*this = src;
	return ;
}

Character::~Character()
{
	std::cout << "Destructor for Character instance called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Character	&Character::operator=(Character const &rhs)
{
	int		i;

	this->name = rhs.getName() + "_copy";
	for (i = 0; i < 4; i++)
	{
		if (rhs.inventory[i])
			this->inventory[i] = rhs.inventory[i]->clone();
		else
			this->inventory[i] = NULL;	
	}
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void		Character::equip(AMateria *m)
{
	int		i;

	if (!m)
		return ;
	for (i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break ;
		}
	}
	if (i == 4)
		std::cout << this->getName() << "'s inventory is full" << std::endl;
	else
		std::cout << "Materia " << *m << " has been added to " << this->getName() << "'s inventory at index [" << i << "]" << std::endl;
	return ;
}

void		Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (!this->inventory[idx])
		std::cout << this->name << " has nothing assigned at index " << "[" << idx << "]" << std::endl;
	else
	{
		std::cout << this->name << "' s " << this->inventory[idx]->getType() << " was removed from index [" << idx << "]" << std::endl;
		this->inventory[idx] = NULL;
	}
	return ;
}

void		Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		return ;
	std::cout << "{" << this->name << "} ";
	if (this->inventory[idx])
	{
		this->inventory[idx]->use(target);
		delete this->inventory[idx];
		this->inventory[idx] = NULL;
	}
	else
		std::cout << "nothing assigned at index [" << idx << "]" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string const	&Character::getName() const
{
	return (this->name);
}

/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, Character const &rhs)
{
	o << rhs.getName();
	return (o);
}
