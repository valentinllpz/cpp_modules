/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:09:29 by vlugand-          #+#    #+#             */
/*   Updated: 2021/10/04 11:59:40 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	for (int i = 0; i <= 10; ++i)
		mstack.push(i);
	std::cout << "Current top element: " << mstack.top() << " || Stack size: " << mstack.size() << std::endl;
	std::cout << "Now using pop..." << std::endl;
	mstack.pop();
	std::cout << "New top element: " << mstack.top() << " || Stack size: " << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "\nNow printing stack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int> cpy(mstack);
	it = cpy.begin();
	ite = cpy.end();
	std::cout << "\nAnd printing copy:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	return (0);
}
