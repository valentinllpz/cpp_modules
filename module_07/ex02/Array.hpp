/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:18:59 by vlugand-          #+#    #+#             */
/*   Updated: 2021/10/01 16:08:16 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		T					*_array;
		unsigned int		_n;

	public:
		Array() : _array(NULL), _n(0) {}
		Array(unsigned int n) : _array(new T[n]), _n(n) {}
		Array(Array const &src)
		{
			_array = NULL;
			*this = src;
		}
		~Array()
		{
			if (this->_array)
				delete [] this->_array;
		};
		Array &operator=(Array const &rhs)
		{
			if (this->_array)
				delete [] this->_array;
			this->_n = rhs.getN();
			this->_array = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				this->_array[i] = rhs.getArray()[i];
			return (*this);
		}

		class	OutOfLimitsException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: trying to access an element out of limits");
				}
		};
		
		T 		&operator[](unsigned int index)
		{
			if (index >= _n)
				throw OutOfLimitsException();
			return this->_array[index];
		}

		void	print()
		{
			for (unsigned int i = 0; i < this->_n; i++)
				std::cout << this->_array[i];
			std::cout << std::endl;
		}

		T				*getArray(void) const {return this->_array;}
		unsigned int	getN(void) const {return this->_n;}
		unsigned int	size() const {return this->_n;}

};

#endif
