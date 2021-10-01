/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:31:59 by vlugand-          #+#    #+#             */
/*   Updated: 2021/10/01 15:35:58 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
void	test(T &data)
{
	for (int i = 0; i < 10; ++i)
		data.push_back(i);
	try
	{
		easyfind(data, 7); // OK
		std::cout << "7 was found!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(data, 42); // will throw exception
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}

int main()
{
	std::vector<int>		v;
	std::list<int>			l;

	std::cout << "Testing with <vector>:" << std::endl;
	test(v);
	std::cout << "\nTesting with <list>:" << std::endl;
	test(l);
	return (0);
}
