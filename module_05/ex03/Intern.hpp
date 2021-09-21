/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:43:07 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/21 15:22:04 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern &operator=(Intern const &rhs);

		Form	*makeForm(std::string name, std::string target) const;
		Form	*makeShrubberyCreationForm(std::string const target) const;
		Form	*makeRobotomyRequestForm(std::string const target) const;
		Form	*makePresidentialPardonForm(std::string const target) const;
		Form	*makeInvalidForm(std::string const target) const;

		class	MakeFormException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Intern error: impossible to create form with given parameters.");
				}
		};
};

#endif
