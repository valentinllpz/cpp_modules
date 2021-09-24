/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:38:47 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/24 13:55:24 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

#ifndef CONVERT_HPP
# define CONVERT_HPP

class Convert
{
	private:
		std::string		_s;
		char			_c;
		int				_i;
		float			_f;
		double			_d;
		Convert();

	public:
		Convert(std::string input);
		Convert(Convert const &src);
		~Convert();

		Convert &operator=(Convert const &rhs);

		std::string	getS() const;
		char		getC() const;
		int			getI() const;
		float		getF() const;
		double		getD() const;
};

std::ostream	&operator<<(std::ostream &o, Convert const &i);

#endif
