/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:53:17 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/11 16:17:41 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <iostream>
#include <iomanip>
#include <string>

void	print_book(Contacts *phonebook, int nb);
void	print_contact(Contacts *phonebook, int i);
void	control_input(std::string *dst);
void	add_contact(Contacts *phonebook);
void	search_contact(Contacts *phonebook);

#endif