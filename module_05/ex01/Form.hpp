/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:52:49 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/15 14:26:18 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iomanip>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		int const			_gradeSign;
		int	const			_gradeExec;
		bool				_signature;
		Form();
	public:
		Form(std::string name, int gradeSign, int gradeExec, bool signature);
		Form(Form const &src);
		~Form();

		Form	&operator=(Form const &rhs);

		std::string const	getName() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		bool				getSignature() const;

		Form	&beSigned(Bureaucrat const &x);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form error: grade is too high.");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form error: grade is too low.");
				}
		};
};

std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif
