/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:51:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/27 19:37:02 by vlugand-         ###   ########.fr       */
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
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void	Convert::fromChar()
{
	this->_c = this->_s[0];
	if (this->_i < 0 || this->_i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (this->_i < 32 || this->_i > 127)
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << this->_c << std::endl;
	this->_i = static_cast<int>(this->_c); // promotion -> OK
	this->_f = static_cast<float>(this->_c); // promotion -> OK
	this->_d = static_cast<double>(this->_c); // promotion -> OK
	std::cout << "int: " << this->_i << std::endl;
	std::cout << "float: " << this->_f << 'f' << std::endl;
	std::cout << "double: " << this->_d << std::endl;
	return ;
}

void	Convert::fromInt()
{
	this->_i = std::stoi(this->_s);
	if (this->_i < 0 || this->_i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (this->_i < 32 || this->_i > 127)
		std::cout << "char: non displayable" << std::endl;
	else
	{
		this->_c = static_cast<char>(this->_i); // demotion but value checked previously
		std::cout << "char: " << this->_c << std::endl;
	}
	this->_f = static_cast<float>(this->_i); // promotion -> OK
	this->_d = static_cast<double>(this->_i); // promotion -> OK
	std::cout << "int: " << this->_i << std::endl;
	std::cout << "float: " << this->_f << 'f' << std::endl;
	std::cout << "double: " << this->_d << std::endl;
	return ;
}

void	Convert::fromFloat()
{
	this->_f = std::stof(this->_s);
	if (this->_f < 0.0 || this->_f > 127.0 || std::isnan(this->_f))
		std::cout << "char: impossible" << std::endl;
	else if (this->_f < 32.0 || this->_f > 127.0)
		std::cout << "char: non displayable" << std::endl;
	else
	{
		this->_c = static_cast<char>(this->_f); // demotion but value checked previously
		std::cout << "char: " << this->_c << std::endl;
	}
	if (this->_f > INT_MAX || this->_f < INT_MIN || std::isnan(this->_f))
		std::cout << "int: impossible" << std::endl;
	else
	{
		this->_i = static_cast<int>(this->_f); // demotion but value checked previously
		std::cout << "int: " << this->_i << std::endl;
	}
	this->_d = static_cast<double>(this->_f); // promotion -> OK
	if (this->_s == "+inff" || this->_s == "inff" || this->_s == "-inff" ||this->_s == "nanf")
		std::cout << "float: " << this->_f << 'f' << std::endl;
	else
		std::cout << "float: " << this->_f << 'f' << std::endl;
	std::cout << "double: " << this->_d << std::endl;
	return ;
}

void	Convert::fromDouble()
{
	this->_d = std::stod(this->_s);
	if (this->_d < 0.0 || this->_d > 127.0 || std::isnan(this->_d))
		std::cout << "char: impossible" << std::endl;
	else if (this->_d < 32.0 || this->_d > 127.0)
		std::cout << "char: non displayable" << std::endl;
	else
	{
		this->_c = static_cast<char>(this->_d); // demotion but value checked previously
		std::cout << "char: " << this->_c << std::endl;
	}
	if (this->_d > INT_MAX || this->_d < INT_MIN || std::isnan(this->_d))
		std::cout << "int: impossible" << std::endl;
	else
	{
		this->_i = static_cast<int>(this->_d); // demotion but value checked previously
		std::cout << "int: " << this->_i << std::endl;
	}
	if (this->_s == "+inf" || this->_s == "inf" || this->_s == "-inf" ||this->_s == "nan")
		std::cout << "float: " << this->_d << 'f' << std::endl;
	else if (this->_d > __FLT_MIN__ || this->_d < __FLT_MAX__)
		std::cout << "float: impossible" << std::endl;
	else
	{
		this->_f = static_cast<float>(this->_d); // demotion but value checked previously
		std::cout << "float: " << this->_f <<'f' << std::endl;
	}
	std::cout << "double: " << this->_d << std::endl;
	return ;
}

void		Convert::convertAll()
{
	std::cout << std::fixed << std::setprecision(1);
	if (isChar(this->_s))
		this->fromChar();
	else if (isInt(this->_s))
		this->fromInt();
	else if (isFloat(this->_s))
		this->fromFloat();
	else if (isDouble(this->_s))
		this->fromDouble();
	else
	{
		std::cout << "original type: string" << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	return ;
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string		Convert::getS() const
{
	return (this->_s);
}
