/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:30:48 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/21 16:01:38 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("unset")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_target = rhs.getTarget();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void		RobotomyRequestForm::execute(Bureaucrat &executor) const
{
	this->canExecute(executor);
	std::srand(time(0));
	if (rand() % 2)
		std::cout << "*** Wriiiiiiiiiiiiiiiizzz ***\n" << this->_target << " has been successfully robotomized" << std::endl;
	else
		std::cout << "Robotomization process for " << this->_target << " has failed..." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string		RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void			RobotomyRequestForm::setTarget(std::string target)
{
	this->_target = target;
	return ;
}
