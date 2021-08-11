/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:36:54 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/10 18:33:08 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_HPP
# define CONTACTS_CLASS_HPP

#include <string>

class Contacts
{
	public:

		Contacts(void);
		~Contacts(void);

		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

		void		get_details(void);
		static int	get_nbInst(void);
		static void	inc_nbInst(void);
	
	private:

		static int	_nbInst;
};

#endif
