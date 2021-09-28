/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:51:17 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/28 15:54:57 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data
{
	private:
		int		nb;
	public:
		Data();
		Data(Data const &src);
		~Data();

		Data &operator=(Data const &rhs);
		int		getNb() const;
		void	setNb(int x);
};

#endif
