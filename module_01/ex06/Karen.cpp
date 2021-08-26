/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:46:38 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/26 14:00:48 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	return ;
}

Karen::~Karen()
{
	return ;
}

void	Karen::complain(std::string level) const
{
	void			(Karen::*fptr)(void) const;

	fptr = &Karen::invalid;
	(level.compare("DEBUG") == 0) && (fptr = &Karen::debug);
	(level.compare("INFO") == 0 ) && (fptr = &Karen::info);
	(level.compare("WARNING") == 0 )&& (fptr = &Karen::warning);
	(level.compare("ERROR") == 0) && (fptr = &Karen::error);
	(this->*fptr)();
	return ;
}

void Karen::invalid(void) const
{
	std::cout << "Available commands are \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\" and \"EXIT\". Is it that complicated?" << std::endl;
	return ;
}

void	Karen::debug(void) const
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return;
}

void	Karen::info(void) const
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return;
}

void	Karen::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return;
}

void	Karen::error(void) const
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}
