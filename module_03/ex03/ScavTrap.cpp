/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:55:51 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/31 17:01:17 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************************** */
/*                       CONSTRUCTORS / DESTRUCTORS                           */
/* ************************************************************************** */

ScavTrap::ScavTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDammage(20);
	std::cout << "Default constructor called for a ScavTrap named " << this->getName() << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDammage(20);
	std::cout << "Parametric constructor called for a ScavTrap named " << this->getName() << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "Copy constructor called for a ScavTrap named " << this->getName() << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->getName() << " the ScavTrap has been destroyed" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDammage(rhs.getAttackDammage());
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void		ScavTrap::guardGate()
{
	std::cout << this->getName() << " the ScavTrap have enterred in Gate keeper mode." << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const &target) const
{
	if (this->getHitPoints() > 0)
		std::cout << this->getName() << " attacks " << target << " with his ScavTrap laser beam." << std::endl;
	else
		std::cout << this->getName() << " is K.O. and cannot attack." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                         NON MEMBER OVERLOAD                                */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, ScavTrap const &i)
{
	o << i.getName();
	return (o);
}
