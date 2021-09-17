/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:09:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/17 17:45:29 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <sstream>

int			get_valid_input()
{
	int nb;

	std::cin >> nb;
	while (1)
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(100000000, '\n');
			std::cout << "Invalid input, try again: ";
			std::cin >> nb;
		}
		if	(!std::cin.fail())
			break;
	}
	return (nb);
}

void		test_ex02(Bureaucrat &avatar)
{
	ShrubberyCreationForm 	a(avatar.getName());
	RobotomyRequestForm		b(avatar.getName());
	PresidentialPardonForm	c(avatar.getName());

	std::cout << a << std::endl;
	avatar.signForm(a);
	avatar.executeForm(a);
	std::cout << b << std::endl;
	avatar.signForm(b);
	avatar.executeForm(b);
	std::cout << c << std::endl;
	avatar.signForm(c);
	avatar.executeForm(c);
	return ;
}

Bureaucrat	*test_ex00()
{
	std::string		name;
	int				grade;
	int				choice;
	Bureaucrat		*avatar;

	std::cout << "What's your name?: ";
	std::getline(std::cin, name);
	while (1)
	{
		std::cout << "Pick a grade for your current avatar (1 is the highest, 150 is the lowest): ";
		grade = get_valid_input();
		try
		{
			avatar = new Bureaucrat(name, grade);
			std::cout << *avatar << std::endl;
			break ;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "You have been working hard for 18 months already, what's next?\n";
	std::cout << "1. Ask your superior for a few days off.\n2. Work more unpaid extra hours.\n-> Your choice (1 or 2): ";
	choice = get_valid_input();
	try
	{
		if (choice == 1)
		{
			std::cout << "You request has been denied..." << std::endl;
			avatar->decGrade();
		}
		else
		{
			std::cout << "Congrats for your \"extra miles\" mindset!" << std::endl;
			avatar->incGrade();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	return (avatar);
}

int		main()
{
	Bureaucrat 	*avatar;

	std::cout << "***** Bureaucrat simulator (v0.1) *****\n";
	avatar = test_ex00();
	test_ex02(*avatar);
	delete avatar;
	return (0);
}
