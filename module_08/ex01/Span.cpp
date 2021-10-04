/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:46:08 by vlugand-          #+#    #+#             */
/*   Updated: 2021/10/04 12:29:45 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Span::Span() : _N(0)
{
	return ;
}

Span::Span(unsigned int N) : _N(N)
{
	return ;
}

Span::Span(Span const &src)
{
	*this = src;
	return ;
}

Span::~Span()
{
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Span	&Span::operator=(Span const &rhs)
{
	this->_N = rhs.getN();
	return (*this);
}

/* ************************************************************************** */
/*                             MEMBER FUNCTIONS                               */
/* ************************************************************************** */

void	Span::addNumber(int nb)
{
	if (this->v.size() >= this->_N)
		throw NoSpaceLeftException();
	this->v.push_back(nb);
	return ;
}

void	Span::addNumber(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end)
{
	if (this->v.size() + std::abs(std::distance(start, end)) > this->_N)
		throw NoSpaceLeftException();
	this->v.insert(this->v.end(), start, end);
	return ;
}

unsigned int	Span::shortestSpan() const
{
	unsigned int	res;
	unsigned int	tmp;

	if (this->v.size() < 2)
		throw ImpossibleSpanException();
	res = std::abs(this->v[0] - this->v[1]);
	for (unsigned int i = 2; i < this->v.size(); ++i)
	{
		tmp = std::abs(this->v[i] - this->v[i - 1]);
		if (tmp < res)
			res = std::abs(this->v[i] - this->v[i - 1]);
	}
	return (res);
}

unsigned int	Span::longestSpan() const
{
	unsigned int	res = 0;
	unsigned int	tmp;

	if (this->v.size() < 2)
		throw ImpossibleSpanException();
	for (unsigned int i = 1; i < this->v.size(); ++i)
	{	
		tmp = std::abs(this->v[i] - this->v[i - 1]);
		if (tmp > res)
			res = std::abs(this->v[i] - this->v[i - 1]);
	}
	return (res);
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

unsigned int	Span::getN() const
{
	return (this->_N);
}

unsigned int	Span::getSize() const
{
	return (this->v.size());
}
