/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:43:11 by vlugand-          #+#    #+#             */
/*   Updated: 2021/10/04 12:25:57 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	v;
		Span();
	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span &operator=(Span const &rhs);

		unsigned int		getN() const;
		unsigned int		getSize() const;

		void				addNumber(int nb);
		void				addNumber(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end);
		unsigned int		shortestSpan() const;
		unsigned int		longestSpan() const;

		class NoSpaceLeftException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Cannot add number, no space left on data structure.");
			}
		};
		class ImpossibleSpanException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Cannot compute span because data structure does not contain enough numbers to compare.");
			}
		};
};

#endif
