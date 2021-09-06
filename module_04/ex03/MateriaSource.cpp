/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:59:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/06 21:12:11 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

MateriaSource::MateriaSource()
{
	int		i;

	std::cout << "Default constructor for MateriaSource instance called." << std::endl;
	for (i = 0; i < 4; i++)
		this->source[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "Copy constructor for MateriaSource instance called." << std::endl;
	*this = src;
	return ;
}

MateriaSource::~MateriaSource()
{
	int		i;

	std::cout << "Destructor for MateriaSource instance called." << std::endl;
	for (i = 0; i < 4; i++)
	{
		if (this->source[i])
			delete this->source[i];
	}
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	int		i;

	for (i = 0; i < 4; i++)
	{
		if (rhs.source[i])
			this->source[i] = rhs.source[i]->clone();
		else
			this->source[i] = NULL;
	}
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void			MateriaSource::learnMateria(AMateria *m)
{
	int			i;

	if (!m)
		return ;
	for (i = 0; i < 4; i++)
	{
		if (!this->source[i])
		{
			this->source[i] = m->clone();
			break ;
		}
	}
	if (i == 4)
		std::cout << "Your MateriaSource is full" << std::endl;
	else
		std::cout << "Materia " << *m << " has been added to your MateriaSource at index [" << i << "]" << std::endl;
	return ;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	int		i;

	for (i = 0; i < 4; i++)
	{
		if (this->source[i] && this->source[i]->getType() == type)
		{
			std::cout << "New " << type << " was created from your MateriaSource" << std::endl;
			return (this->source[i]->clone());
		}
	}
	std::cout << "Type " << type << " was not found in your MateriaSource" << std::endl;
	return (0);
}	
