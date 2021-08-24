/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:03:05 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/24 18:45:40 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_HPP
# define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_rawbits;
		static const int	_binarypp = 8;

	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nbf);
		~Fixed();
		Fixed(Fixed const &src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed	&operator=(Fixed const &rhs);
		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		bool	operator<(Fixed const &rhs) const;
		bool	operator>(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static const Fixed 	&max(Fixed const &a, Fixed const &b);
};

Fixed	&min(Fixed &a, Fixed &b);
Fixed	&max(Fixed &a, Fixed &b);

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif
