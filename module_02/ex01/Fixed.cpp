/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:33:55 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/23 21:28:44 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawbits = 0;
	return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Parametric constructor called" << std::endl;
	this->_rawbits = n * (1 << this->_binarypp);
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Parametric constructor called" << std::endl;
	this->_rawbits = roundf(f * (1 << this->_binarypp));
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_rawbits = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawbits);
}

void		Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}
