/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:09:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/17 15:09:36 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
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

void		test_ex01(Bureaucrat *avatar)
{
	int		grade;
	Form	*f;
	
	std::cout << "Manager: Hey " << avatar->getName() << "! ";
	while (1)
	{
		std::cout << "Do you remember which grade is needed to sign the Form LOL420? ";
		grade = get_valid_input();
		try
		{
			f = new Form("LOL420", grade, 10, 0);
			std::cout << "Oh right, then can you work on this please? Thanks. " << std::endl;
			avatar->signForm(*f);
			std::cout  << *f << '\n' << std::endl;
			if (f->getSignature())
				avatar->incGrade();
			break ;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	delete f;
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
	std::cout << "You have been working hard for month already, what's next?\n";
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
			std::cout << "Congrats for your extra miles mindset!" << std::endl;
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
	test_ex01(avatar);
	delete avatar;
	return (0);
}
