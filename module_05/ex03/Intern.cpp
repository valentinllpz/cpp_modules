/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:47:18 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/17 18:02:34 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Intern::Intern()
{
	return ;
}

Intern::Intern(Intern const &src)
{
	*this = src;
	return ;
}

Intern::~Intern()
{
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Intern	&Intern::operator=(Intern const &rhs)
{
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string lst[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *ptr[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target};
	int		i;

	
	return (ptr[i]);
}
