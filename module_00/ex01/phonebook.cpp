/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:29:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/07/19 18:01:12 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	add_contact()
{
	
}

int		main(void)
{
	std::string	input;
	
	std::cout << "Welcome to my Awesome Phone Book !\n";
	std::cout << "What would you like to do ? ";
	while (std::getline(std::cin, input) && input != "EXIT")
	{
		if (input == "ADD")
			add_contact();
		else if (input == "DELETE")
			del_contact();
		else
			std::cout << "Unvalid command. Please use ADD, SEARCH or EXIT.\n";
	}
	return (0);
}
