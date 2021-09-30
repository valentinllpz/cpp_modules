/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:00:00 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/29 15:10:19 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	int		i[] = {1, 2, 3};
	float	f[] = {1.1, 2.2, 3.3};
	char	s[] = "lol";
	
	iter(i, 3, print_template);
	std::cout << std::endl;
	iter(f, 3, print_template);
	std::cout << std::endl;
	iter(s, 3, print_template);
	std::cout << std::endl;
	return (0);
}
