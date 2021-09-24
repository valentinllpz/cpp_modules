/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:48:47 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/24 13:49:02 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	isChar(std::string input)
{
	if (!(input.length() == 1 && isalpha(input[0])))
		return (0);
	std::cout << "original type: char" << std::endl;
	return (0);
}

bool	isInt(std::string input)
{
	std::string::const_iterator it = input.begin();
	if (*it == '-')
		++it;
    while (it != input.end() && std::isdigit(*it))
		++it;
	if (it != input.end())
		return (0);
	std::cout << "original type: int" << std::endl;
	return (1);
}

bool	isDouble(std::string input)
{
	bool flag = 0;
	
	std::string::const_iterator it = input.begin();
	if (*it == '-')
		++it;
    while (it != input.end())
	{
		if (*it == '.' && !flag)
			flag = 1;
		else if (!std::isdigit(*it))
			break ;
		++it;
	}
	if (it != input.end())
		return (0);
	std::cout << "original type: double" << std::endl;
	return (1);
}

bool	isFloat(std::string input)
{
	bool flag = 0;
	
	std::string::const_iterator it = input.begin();
	if (*it == '-')
		++it;
    while (it != input.end())
	{
		if (*it == '.' && !flag)
			flag = 1;
		else if (!std::isdigit(*it))
			break ;
		++it;
	}
	if (it != input.end() && *it == 'f')
	{
		++it;
		if (it == input.end())
		{
			std::cout << "original type: float" << std::endl;
			return (1);
		}
	}
	return (0);
}
