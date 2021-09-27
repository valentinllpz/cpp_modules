/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:49:14 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/27 19:28:09 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

bool	isChar(std::string input);
bool	isInt(std::string input);
bool	isDouble(std::string input);
bool	isFloat(std::string input);
void	customFloatDisplay(std::string s, float f);

#endif
