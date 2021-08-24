/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:51:01 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/24 20:34:16 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void myTester()
{
	Fixed 	a(42);
	Fixed 	b(42.42f);
	Fixed 	c(b);
	Fixed 	d(420);

	std::cout << "\n*************** FIXED POINT CLASS TESTER ***************\n\n";
	std::cout << "a = " << a << " || b = " << b <<  " || c = " << c << " || d = " << d << std::endl;

	std::cout << "\n1. Checking comparison operator overloads:\n";
	if (a < b)
		std::cout << "a < b\n";
	else
		std::cout << "a >= b\n";
	if (a <= b)
		std::cout << "a <= b\n";
	else
		std::cout << "a > b\n";
	if (d > b)
		std::cout << "d > b\n";
	else
		std::cout << "d <= b\n";
	if (d >= b)
		std::cout << "d >= b\n";
	else
		std::cout << "d < b\n";
	if (b == c)
		std::cout << "b == c\n";
	else
		std::cout << "b != c\n";
	if (d != c)
		std::cout << "d != c\n";
	else
		std::cout << "d == c\n";

	std::cout << "\n2. Checking arithmetic operator overloads:\n";
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "d - b = " << d - b << std::endl;
	std::cout << "a * d = " << a * c << std::endl;
	std::cout << "d / a = " << d / a << std::endl;
	std::cout << "a / 0 = " << a / 0 << std::endl;

	std::cout << "\n3. Checking increment / decrement operator overloads:\n";
	std::cout << "a = " << a << std::endl;
	std::cout << "using prefix increment operator (++a) ->" << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "using postfix increment operator (a++) ->" << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "using prefix decrement operator (--a) ->" << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "using postfix decrement operator (a--) ->" << a-- << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "\n4. Checking min / max static member functions:\n";
	std::cout << "Fixed::min(a, b) : " << Fixed::min(a, b) << std::endl;
	std::cout << "Fixed::max(c, d) : " << Fixed::max(c, d) << std::endl;

	std::cout << "\n5. Checking min / max functions overload:\n";
	std::cout << "min(a, b) : " << min(a, b) << std::endl;
	std::cout << "max(c, d) : " << max(c, d) << std::endl;
}

int main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	myTester();
	return (0);
}
