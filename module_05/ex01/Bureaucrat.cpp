/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:41:33 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/17 14:51:49 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void		Bureaucrat::incGrade()
{
	std::cout << "Increasing " << this->_name << "'s grade..." << std::endl;
	if (_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void		Bureaucrat::decGrade()
{
	std::cout << "Decreasing " << this->_name << "'s grade..." << std::endl;
	if (_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
	return;
}

void		Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed form " << f.getName() << '.'<< std::endl;
	}
	catch(Form::GradeTooLowException & e)
	{
		std::cout << this->_name << " is not qualified enough to sign " << f.getName();
		std::cout << ". Employee's current grade is " << this->_grade << " and grade " << f.getGradeSign() << " or higher is required." << std::endl;
	}
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string const		Bureaucrat::getName() const
{
	return (this->_name);
}

int		Bureaucrat::getGrade() const
{
	return (this->_grade);
}

/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}
