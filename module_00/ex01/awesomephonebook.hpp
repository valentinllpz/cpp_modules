/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesomephonebook.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:53:17 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/17 17:28:35 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOMEPHONEBOOK_HPP
# define AWESOMEPHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "contacts.class.hpp"
#include "phonebook.class.hpp"

void			control_input(std::string *dst);
std::string		itoa_cpp(int nb);
void			format_cell(std::string s);
void			print_line(std::string s1, std::string s2, std::string s3, std::string s4);

#endif