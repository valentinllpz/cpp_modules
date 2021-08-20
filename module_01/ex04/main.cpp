/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:48:04 by vlugand-          #+#    #+#             */
/*   Updated: 2021/08/20 15:37:08 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int		exit_error(int flag)
{
	if (flag == 1)
		std::cout << "Error: wrong number of arguments" << std::endl;
	else if (flag == 2)
		std::cout << "Error: unvalid string s1" << std::endl;
	else if (flag == 3)
		std::cout << "Error: unvalid string s2" << std::endl;
	else if (flag == 4)
		std::cout << "Error: could not open input file" << std::endl;
	else if (flag == 5)
		std::cout << "Error: could not open output file" << std::endl;
	return (1);
}

int		sed(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		buf;
	std::string		txt;
	std::size_t		i;

	ifs.open(filename);
	if (ifs.fail())
		return (4);
	ofs.open(filename + ".replace");
	if (ofs.fail())
		return (5);
	while (std::getline(ifs, buf))
	{
		txt += buf;
		if (!ifs.eof())
			txt += '\n';
	}
	for (i = 0; i < txt.length(); i++)
	{
		if (txt.substr(i, s1.length()) == s1)
		{
			ofs << s2;
			i += s1.length() - 1;
		}
		else
			ofs << txt[i];
		
	}
	return (0);
}

int		main(int ac, char **av)
{
	std::string		s1;
	std::string		s2;
	int				ret;

	if (ac != 4)
		return (exit_error(1));
	s1 = av[2];
	s2 = av[3];
	if (!s1.length())
		return (exit_error(2));
	if (!s2.length())
		return (exit_error(3));
	if ((ret = sed(av[1], s1, s2)) > 0)
		return (exit_error(ret));
	return (0);
}
