/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:51:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/24 14:12:05 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Convert::Convert()
{
	return ;
}

Convert::Convert(std::string input) : _s(input)
{
	if (isChar(input))
	{
		_c = input[0];
		_i = _c; // implicit promotion -> OK
		_f = _c; // implicit promotion -> OK
		_d = _c; // implicit promotion -> OK
	}
	else if (isInt(input))
	{
		_i = atoi(input.c_str()) ; // implicit promotion -> OK
		if (_i > 31 && _i < 127)
			_c = _i; // demotion but implicit cast OK because we control the value to be within the ASCII table
		_f = _i; // implicit promotion -> OK
		_d = _i; // implicit promotion -> OK
	}
	else if (isFloat(input))
	{
		_f = atof(input.c_str());
		_i = static_cast<int>(_f); // demotion -> cast needed
		if (_i > 31 && _i < 127)
			_c = _i; // demotion but implicit cast OK because we control the value to be within the ASCII table
		_d = _f;  // implicit promotion -> OK
	}
	else if (isDouble(input))
	{
		_d = atof(input.c_str());
		_i = static_cast<int>(_d); // demotion -> cast needed
		if (_i > 31 && _i < 127)
			_c = _i; // demotion but implicit cast OK because we control the value to be within the ASCII table
		_f = static_cast<float>(_d);  // demotion -> cast needed
	}
	return ;
}

Convert::Convert(Convert const &src)
{
	*this = src;
	return ;
}

Convert::~Convert()
{
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Convert	&Convert::operator=(Convert const &rhs)
{
	this->_s = rhs.getS();
	this->_c = rhs.getC();
	this->_i = rhs.getI();
	this->_f = rhs.getF();
	this->_d = rhs.getD();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */



/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string		Convert::getS() const
{
	return (this->_s);
}

char			Convert::getC() const
{
	return (this->_c);
}

int				Convert::getI() const
{
	return (this->_i);
}

float			Convert::getF() const
{
	return (this->_f);
}

double			Convert::getD() const
{
	return (this->_d);
}

/* ************************************************************************** */
/*                            NON MEMBER OVERLOAD                             */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, Convert const &i)
{
	std::cout << "original string: " << i.getS() << std::endl;
	std::cout << "char: " << i.getC() << std::endl;
	std::cout << "int: " << i.getI() << std::endl;
	std::cout << "float: " << i.getF() << 'f' << std::endl;
	std::cout << "double: " << i.getD() << std::endl;
	return (o);
}
