/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:55:45 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/27 18:03:31 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************************** */
/*                       CONSTRUCTORS / DESTRUCTORS                           */
/* ************************************************************************** */

FragTrap::FragTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDammage(30);
	std::cout << "Default constructor called for a FragTrap named " << this->getName() << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDammage(30);
	std::cout << "Parametric constructor called for a FragTrap named " << this->getName() << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "Copy constructor called for a FragTrap named " << this->getName() << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << this->getName() << " the FragTrap has been destroyed" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
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

void		FragTrap::highFiveGuys() const
{
	std::cout << this->getName() << " the FragTrap wants to high five!" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                         NON MEMBER OVERLOAD                                */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, FragTrap const &i)
{
	o << i.getName();
	return (o);
}
