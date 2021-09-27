/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:48:47 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/27 19:27:24 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	isChar(std::string input)
{
	if (!(input.length() == 1 && !isnumber(input[0]) && input[0] >= 0 && input[0] <= 127))
		return (false);
	std::cout << "original type: char" << std::endl;
	return (true);
}

bool	isInt(std::string input)
{
	int		i;

	std::string::const_iterator it = input.begin();
	if (*it == '-')
		++it;
    while (it != input.end() && std::isdigit(*it))
		++it;
	if (it != input.end())
		return (false);
	try
	{
		i = std::stoi(input);
	}
	catch(const std::exception& e)
	{
		return (false);
	}
	std::cout << "original type: int" << std::endl;
	return (true);
}

bool	isDouble(std::string input)
{
	double	d;
	
	try
	{
		d = std::stod(input);
	}
	catch(const std::exception& e)
	{
		return (false);
	}
	std::cout << "original type: double" << std::endl;
	return (true);
}

bool	isFloat(std::string input)
{
	bool 	flag = 0;
	float	f;
	
	if (input == "inff" || input == "+inff" || input == "-inff" || input == "nanf")
	{
		std::cout << "original type: float" << std::endl;
		return (true);
	}
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
			try
			{
				f = std::stof(input);
			}
			catch(const std::exception& e)
			{
				return (false);
			}
			std::cout << "original type: float" << std::endl;
			return (true);
		}
	}
	return (false);
}

void	customFloatDisplay(std::string s, float f)
{
	if (s == "+inff" || s == "inff" || s == "-inff" ||s == "nanf")
	{
		std::cout << "float: " << f << 'f' << std::endl;
		return ;
	}
	std::cout << "float: " << f;
	std::string::const_iterator it = s.end();
	it--;
	if (*it == '0')
	{
		it--;
		if (*it != '.')
			std::cout << ".0";
	}
	std::cout << 'f' << std::endl;
	return ;
}