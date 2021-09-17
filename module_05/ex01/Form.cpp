/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:25:02 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/17 14:59:18 by vlugand-         ###   ########.fr       */
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
	if (x.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
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
	o << "\n------------ Form " << i.getName() << " ------------" << std::endl;
	o << "Minimum grade required to sign: "<< i.getGradeSign() << std::endl;
	o << "Minimum grade required to excute: " << i.getGradeExec() << std::endl;
	o << "Current status: ";
	if (i.getSignature())
		o << "signed"  << std::endl;
	else
		o << "not signed" << std::endl;
	return (o);
}
