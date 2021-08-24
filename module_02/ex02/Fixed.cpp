/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:33:55 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/24 20:24:16 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*                          CONSTRUCTOR / DESTRUCTOR                          */
/* ************************************************************************** */

Fixed::Fixed()
{
	this->_rawbits = 0;
	return ;
}

Fixed::Fixed(const int n)
{
	this->_rawbits = n * (1 << this->_binarypp);
	return ;
}

Fixed::Fixed(const float f)
{
	this->_rawbits = roundf(f * (1 << this->_binarypp));
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return ;
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

int		Fixed::getRawBits(void) const
{
	return (this->_rawbits);
}

void		Fixed::setRawBits(int const raw)
{
	this->_rawbits = raw;
	return ;
}

float		Fixed::toFloat(void) const
{
	return ((float)this->_rawbits / (1 << this->_binarypp));
}

int			Fixed::toInt(void) const
{
	return (this->_rawbits / (1 << this->_binarypp));
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_rawbits = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	if (rhs.toFloat() == 0)
	{
		std::cerr << "Division with 0!" << std::endl;
		return (Fixed(0));
	}
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++()
{
	++this->_rawbits;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);

	++(*this);
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	--this->_rawbits;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);

	--(*this);
	return (tmp);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->_rawbits < rhs.getRawBits() ? 1 : 0);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->_rawbits > rhs.getRawBits() ? 1 : 0);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_rawbits <= rhs.getRawBits() ? 1 : 0);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_rawbits >= rhs.getRawBits() ? 1 : 0);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->_rawbits == rhs.getRawBits() ? 1 : 0);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_rawbits != rhs.getRawBits() ? 1 : 0);
}

/* ************************************************************************** */
/*                        STATIC MEMBER FUNCTIONS                             */
/* ************************************************************************** */

const Fixed		&Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

const Fixed		&Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

/* ************************************************************************** */
/*                          NON MEMBER OVERLOADS                              */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}

Fixed		&min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed		&max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}
