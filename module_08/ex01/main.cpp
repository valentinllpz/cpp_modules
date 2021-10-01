/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:41:50 by vlugand-          #+#    #+#             */
/*   Updated: 2021/10/01 18:52:06 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#define MAX_VAL 42000

int main()
{
	std::vector<int>	v;
	Span sp = Span(MAX_VAL);

	srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
		v.push_back(value);
    }
	try
	{
		std::cout << "Adding full range via iterators..." << std::endl;
		sp.addNumber(v.begin(), v.end());
		std::cout << "Range added sucessfully. Current size is now [" << sp.getSize() << "], and limit is [" << sp.getN() << ']' << std::endl;
		std::cout << "Now trying to add another element:" << std::endl;
		sp.addNumber(42); // impossible, an exception will be caught
		std::cout << "Range added sucessfully. Current size is now [" << sp.getSize() << "], and limit is [" << sp.getN() << ']' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
