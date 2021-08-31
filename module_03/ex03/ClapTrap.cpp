/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:56:56 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/31 17:11:52 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                       CONSTRUCTORS / DESTRUCTORS                           */
/* ************************************************************************** */

ClapTrap::ClapTrap() : _name("Nameless"), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << "Default constructor called for a ClapTrap named " << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << "Parametric constructor called for a ClapTrap named " << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "Copy constructor called for a ClapTrap named " << this->_name << std::endl;
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
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void	ClapTrap::attack(std::string const &target) const
{
	if (this->_hitPoints > 0)
		std::cout << this->_name << " attacks " << target << " with his ClapTrap claw." << std::endl;
	else
		std::cout << this->_name << " is K.O. and cannot attack." << std::endl;
	return ; 
}

void	ClapTrap::takeDammage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << this->_name << " takes " << amount << " points of dammage." << std::endl;
		if (this->_hitPoints <= 0)
		{
			std::cout << this->_name << " is K.O." << std::endl;
			this->_hitPoints = 0;
		}
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already K.O." << std::endl;
	return ; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 10)
	{
		std::cout << this->_name << "'s HP are already full, no need for repairs." << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	if (this->_hitPoints > 10)
		this->_hitPoints = 10;
	std::cout << this->_name << " has been repaired." << std::endl;
	return ;
}


/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string		ClapTrap::getName() const
{
	return (this->_name);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
	return ;
}

int		ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

void	ClapTrap::setHitPoints(int n)
{
	this->_hitPoints = n;
	return ;
}

int		ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

void	ClapTrap::setEnergyPoints(int n)
{
	this->_energyPoints = n;
	return ;
}

int		ClapTrap::getAttackDammage() const
{
	return (this->_attackDammage);
}

void	ClapTrap::setAttackDammage(int n)
{
	this->_attackDammage = n;
	return ;
}

/* ************************************************************************** */
/*                         NON MEMBER OVERLOAD                                */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i)
{
	o << i.getName();
	return (o);
}
