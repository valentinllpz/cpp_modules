/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:09:26 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/21 16:04:20 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
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

void		test_ex03(Bureaucrat &avatar)
{
	Intern		intern;
	Form	 	*a;
	Form		*b;
	Form		*c;
	Form		*d;

	try
	{
		a = intern.makeForm("shrubbery creation", "Robin");
		std::cout << *a << std::endl;
		avatar.signForm(*a);
		avatar.executeForm(*a);
		delete a;
		std::cout << "\n\n";
		b = intern.makeForm("robotomy request", "Bender");
		std::cout << *b << std::endl;
		avatar.signForm(*b);
		avatar.executeForm(*b);
		std::cout << "\n\n";
		delete b;
		c = intern.makeForm("presidential pardon", "Eren");
		std::cout << *c << std::endl;
		avatar.signForm(*c);
		avatar.executeForm(*c);	
		std::cout << "\n\n";
		delete c;
		d = intern.makeForm("rwefuwruyrtjyuiu", "lol");
		std::cout << *d << std::endl;
		avatar.signForm(*d);
		avatar.executeForm(*d);
		delete d;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

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
	test_ex03(*avatar);
	delete avatar;
	return (0);
}
