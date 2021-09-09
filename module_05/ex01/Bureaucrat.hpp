/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:33:31 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/09 15:38:19 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		Bureaucrat();
		std::string	const	_name;
		int					_grade;
	
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string const getName() const;
		int	getGrade() const;

		void	incGrade();
		void	decGrade();
		void	signForm(Form &f);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat error: grade can't get any higher than 1.");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat error: grade can't get any lower than 150.");
				}
		};
		
			
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
