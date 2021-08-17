/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:39:42 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/17 19:18:56 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
 
#include "awesomephonebook.hpp"

class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);
		
		void		add_contact();
		void		search_contact() const;
		void		print_book() const;

		Contacts	*get_list();
		int			get_contact_nb() const;

	private:

		Contacts	list[8];
		int			_contact_nb;
};

#endif