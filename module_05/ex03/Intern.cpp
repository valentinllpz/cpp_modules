/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:47:18 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/21 16:39:39 by vlugand-         ###   ########.fr       */
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
	(void)rhs;
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

Form	*Intern::makeForm(std::string name, std::string target) const
{
	int			i = 0;
	Form		*newForm;
	std::string lst[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form		*(Intern::*fptr[4])(std::string const) const = {&Intern::makeShrubberyCreationForm, 
																&Intern::makeRobotomyRequestForm,
																&Intern::makePresidentialPardonForm,
																&Intern::makeInvalidForm};
	
	while (i < 3 && name.compare(lst[i]))
		i++;
	newForm = (this->*fptr[i])(target);
	std::cout << newForm->getName() << " was successfully created by some ramdom Intern." << std::endl;
	return (newForm);
}

Form	*Intern::makeShrubberyCreationForm(std::string const target) const
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobotomyRequestForm(std::string const target) const
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePresidentialPardonForm(std::string const target) const
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeInvalidForm(std::string const target) const
{
	(void)target;
	throw MakeFormException();
	return (NULL);
}
