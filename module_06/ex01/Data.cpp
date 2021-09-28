/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:53:03 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/28 16:01:58 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Data::Data()
{
	return ;
}

Data::Data(Data const &src)
{
	*this = src;
	return ;
}

Data::~Data()
{
	return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Data	&Data::operator=(Data const &rhs)
{
	this->nb = rhs.getNb();
	return (*this);
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

int		Data::getNb() const
{
	return (this->nb);
}

void	Data::setNb(int x)
{
	this->nb = x;
	return ;
}