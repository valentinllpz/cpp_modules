/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:55:40 by vlugand-          #+#    #+#             */
/*   Updated: 2021/10/04 11:11:59 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(MutantStack const &src) {*this = src;}
		~MutantStack() {}

		MutantStack &operator=(MutantStack const &rhs)
		{
			this->c = rhs.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {return (this->c.begin());}
		iterator end()	{return (this->c.end());}

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator begin() const {return (this->c.begin());}
		const_iterator end() const {return (this->c.end());}
};

#endif
