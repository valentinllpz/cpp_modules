/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:09:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/07 17:59:04 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(int ac, char **av)
{
	int		grade;

	if (ac != 2)
	{
		std::cerr << "This program only runs with one argument. Please enter a number between 1 and 150." << std::endl;
		return (1);
	}
	grade = std::stoi(av[1]);
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		Bureaucrat	pierre("Pierre", grade);
		std::cout << pierre << std::endl;
		std::cout << "* Asks for a day off with his family *" << std::endl;
		std::cout << "Unfortunately, we can't accept your request..." << std::endl;
		if (pierre.getGrade() + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		pierre.decGrade();
		std::cout << "* Working a lot of unpaid extra hours *" << std::endl;
		std::cout << "Congrats for your extra miles mindset!" << std::endl;
		if (pierre.getGrade() - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		pierre.incGrade();
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}