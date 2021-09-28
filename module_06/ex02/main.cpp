/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:23:44 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/28 20:04:05 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base	*generator(void)
{
	int		i;

	std::srand(time(0));
	i = rand() % 3;
	switch (i)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
		default:
			return (new Base);
	}
}

void	identify(Base *p)
{
	std::cout << "Identify via pointer: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void 	identify(Base &p)
{
	std::cout << "Identify via reference: ";
	try
	{
		A a;
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		B b;
		b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		C c;
		c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e){}
}

int		main(void)
{
	Base	*p;
	
	p = generator();
	identify(p);
	identify(*p);
	return (0);
}
