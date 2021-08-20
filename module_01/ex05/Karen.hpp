/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:51:10 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/20 16:10:11 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
	public:

		Karen();
		~Karen();
		void complain(std::string level) const;
		
	private:

		void debug(void) const;
		void info(void) const;
		void warning(void) const;
		void error(void) const;
};

#endif
