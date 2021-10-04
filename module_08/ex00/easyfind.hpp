/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:32:23 by vlugand-          #+#    #+#             */
/*   Updated: 2021/10/04 12:31:55 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class NotFoundException: public std::exception 
{
	virtual const char* what() const throw()
	{
		return ("No occurence found.");
	}
};

template<typename T>
typename T::iterator	easyfind(T &data, int n)
{
	typename T::iterator	it;

	it = find(data.begin(), data.end(), n);
	if (it == data.end())
		throw NotFoundException();
	return (it);
}

#endif
