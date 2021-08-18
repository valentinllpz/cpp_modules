/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:02:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/18 18:49:28 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "Displaying address in memory of the string by using s:         " << &s << std::endl;
	std::cout << "Displaying address in memory of the string by using stringPTR: " << stringPTR << std::endl;
	std::cout << "Displaying address in memory of the string by using stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Displaying the string by using s:          " << s << std::endl;
	std::cout << "Displaying the string by using stringPTR : " << *stringPTR << std::endl;
	std::cout << "Displaying the string by using stringREF : " << stringREF << std::endl;
	return (0);
}
