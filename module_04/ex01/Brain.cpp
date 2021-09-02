/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:59:49 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/02 21:25:18 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* ************************************************************************** */
/*                        CONSTRUCTORS / DESTRUCTORS                          */
/* ************************************************************************** */

Brain::Brain()
{
    std::cout << "Default constructor for Brain instance called." << std::endl;
    return ;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Copy constructor for Brain instance called." << std::endl;
    *this = src;
    return ;
}

Brain::~Brain()
{
    std::cout << "Default destructor for Brain instance called." << std::endl;
    return ;
}

/* ************************************************************************** */
/*                            OPERATORS OVERLOAD                              */
/* ************************************************************************** */

Brain	&Brain::operator=(Brain const &rhs)
{
    int     i;

    for (i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return (*this);
}

/* ************************************************************************** */
/*                             GETTERS / SETTERS                              */
/* ************************************************************************** */

std::string     *Brain::getIdeas()
{
    return (this->ideas);
}

void            Brain::setIdeas(std::string newIdeas[100])
{
    int     i;

    for (i = 0; i < 100; i++)
        this->ideas[i] = newIdeas[i];
    return ;
}
