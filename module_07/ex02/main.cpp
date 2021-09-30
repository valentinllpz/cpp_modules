/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:18:07 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/30 17:36:03 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int>		a(3);
	Array<char> 	b(3);

	for (int i = 0; i < 3; i++)
		a[i] = i;
	std::cout << "Array<int> a:" << std::endl;
	a.print();
	b[0] = 'L';
	b[1] = 'O';
	b[2] = 'L';
	std::cout << "Array<char> b:" << std::endl;
	b.print();
	Array<char>	c(b);
	std::cout << "Array<char> c(b):" << std::endl;
	c.print();
	std::cout << "Now changing b:" << std::endl;
	b[0] = 'M';
	b[1] = 'D';
	b[2] = 'R';
	b.print();
	std::cout << "And c ramained unchanged:" << std::endl;
	c.print();
	std::cout << "Throwing exception when going trying to access an element out of range:" << std::endl;
	try
	{
		c[42] = 'Z';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
