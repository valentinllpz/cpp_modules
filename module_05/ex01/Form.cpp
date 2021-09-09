/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:25:02 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/09 15:37:17 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Form::Form() : _name("unset"), _gradeSign(150), _gradeExec(150), _signature(0)
{
	return ;
}

Form::Form(std::string name, int gradeSign, int gradeExec, bool signature) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signature(signature)
{
	return ;
}

Form::Form(Form const &src) : _name(src.getName()), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()), _signature(src.getSignature())
{
	return ;
}

Form::~Form()
{
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Form	&Form::operator=(Form const &rhs)
{
	this->_signature = rhs.getSignature();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

Form	&Form::beSigned(Bureaucrat const &x)
{
	if (x.getGrade() <= this->_gradeSign)
		this->_signature = 1;
	return (*this);
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string const		Form::getName() const
{
	return (this->_name);
}

int		Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int		Form::getGradeExec() const
{
	return (this->_gradeExec);
}

bool	Form::getSignature() const
{
	return (this->_signature);
}

/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, Form const &i)
{
	o << "Form " << i.getName() << std::setfill('-') << std::setw(45) << std::endl;
	o << "Minimum grade required to sign: " << i.getGradeSign();
	o << "\nMinimum grade required to excute: " << i.getGradeExec();
	o << "\nCurrent status: ";
	if (i.getSignature())
		o << "signed" << std::endl;
	else
		o << "not signed" << std::endl;
	o << std::setfill('-') << std::setw(45) << std::endl;
	return (o);
}
