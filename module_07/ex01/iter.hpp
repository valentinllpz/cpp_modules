/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:39:10 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/29 15:16:28 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, size_t const &len, void(*f)(T const &))
{
	size_t	i;

	for (i = 0; i < len; i++)
		(*f)(array[i]);
	return ; 
}

template <typename T>
void	print_template(T const &var)
{
	std::cout << var << " ";
	return ;
}

template <>
void	print_template<char>(char const &var)
{
	std::cout << var;
	return ;
}

#endif
