/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:54:02 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/17 17:28:55 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("unset")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_target = rhs.getTarget();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void		ShrubberyCreationForm::execute(Bureaucrat &executor) const
{
	std::ifstream 		ifs;
	std::ofstream 		ofs;
	std::stringstream 	buffer;

	this->canExecute(executor);
	ifs.open("tree.txt");
	if (ifs.fail())
	{
		std::cout << "Fatal error: couldn't open file \"tree.txt\"." << std::endl;
		return ;
	}
	buffer << ifs.rdbuf();
	ofs.open((this->_target + "_shrubbery").c_str());
	if (ofs.fail())
	{
		std::cout << "Fatal error: couldn't create file " << this->_target << "_shrubbery." << std::endl;
		return ;
	}
	std::cout << "File " << this->_target << "_shrubbery was successfully created." << std::endl;
	ofs << buffer.str() << std::endl;
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string		ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void			ShrubberyCreationForm::setTarget(std::string target)
{
	this->_target = target;
	return ;
}
