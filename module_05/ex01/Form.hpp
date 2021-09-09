/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:52:49 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/09 15:37:40 by vlugand-         ###   ########.fr       */
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
					return ("Form error: grade can't get any higher than 1.");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form error: grade can't get any lower than 150.");
				}
		};
};

std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif
