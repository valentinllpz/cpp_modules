/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:14:20 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/31 17:30:59 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ************************************************************************** */
/*                       CONSTRUCTORS / DESTRUCTORS                           */
/* ************************************************************************** */

DiamondTrap::DiamondTrap()
{
	this->_name = "Nameless";
	this->setName(_name + "_clap_name");
	this->setAttackDammage(30);
	std::cout << "Default constructor called for a DiamondTrap named " << this->_name << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	this->setAttackDammage(30);
	std::cout << "Parametric constructor called for a DiamondTrap named " << this->_name << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "Copy constructor called for a DiamondTrap named " << this->getDiamondName() << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

DiamondTrap		&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs.getDiamondName();
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDammage(rhs.getAttackDammage());
	return (*this);
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string		DiamondTrap::getDiamondName() const
{
	return (this->_name);
}

void		DiamondTrap::setDiamondName(std::string name)
{
	this->_name = name;
	return ;
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << " the DiamondTrap. I was built from " << this->getName() << " the ClapTrap." << std::endl;
	return ;
}

void	DiamondTrap::attack(std::string const &target) const
{
	this->ScavTrap::attack(target);
	return ;
}

/* ************************************************************************** */
/*                         NON MEMBER OVERLOAD                                */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &i)
{
	o << i.getName();
	return (o);
}
