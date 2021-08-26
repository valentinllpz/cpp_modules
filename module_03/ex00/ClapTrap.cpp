/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:56:56 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/26 18:06:07 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                       CONSTRUCTORS / DESTRUCTORS                           */
/* ************************************************************************** */

ClapTrap::ClapTrap()
{
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << "Constructor called for a ClapTrap named " << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " the ClapTrap has been destroyed" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_hitPoints = rhs.getEnergyPoints();
	this->_attackDammage = rhs.getAttackDammage();
	return ;
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

std::string		ClapTrap::getName() const
{
	return (this->_name);
}

int		ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

void	ClapTrap::setHitPoints(int n)
{
	this->_hitPoints += n;
	return ;
}

int		ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

void	ClapTrap::setEnergyPoints(int n)
{
	this->_energyPoints += n;
	return ;
}

int		ClapTrap::getAttackDammage() const
{
	return (this->_attackDammage);
}

void	ClapTrap::setAttackDammage(int n)
{
	this->_attackDammage += n;
	return ;
}

void	ClapTrap::attack(std::string const &target) const
{
	std::cout << "ClapTrap " << this << " attacks " << target << ", causing ";
	std::cout <<  this->getAttackDammage() << " points of dammage!" << std::endl;
	return ; 
}

void	ClapTrap::takeDammage(unsigned int amount)
{
	// check death
	this->_hitPoints -= amount;
	std::cout << this << " takes " << amount << " points of dammage.";
	std::cout <<  this->getAttackDammage() << " points of dammage!" << std::endl;
	return ; 
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i)
{
	o << i.getName();
	return (o);
}
