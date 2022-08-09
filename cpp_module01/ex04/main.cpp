/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:24:29 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/09 17:57:08 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string	replaceStrings(std::string file, std::string s1, std::string s2)
{
	std::string		res;
	size_t	find_len = s1.size();
	size_t	pos, start = 0;
	while(std::string::npos != (pos = file.find(s1, start)))
	{
		res.append(file, start, pos - start);
		res.append(s2);
		start = pos + find_len;
	}
	res.append(file, start, std::string::npos);
	return res;
}

int	main(int ac, char **av)
{
	std::ifstream	file;
	std::string		infileName;
	std::ofstream	output;
	std::string		tmp;
	std::string		fileCon;
	std::string		out;
	std::string		s1;
	std::string		s2;
	if (ac == 4)
	{
		infileName = av[1];
		file.open(av[1]);
		if (file.is_open())
		{
			while(getline(file, tmp))
			{
				fileCon.append(tmp);
				fileCon.append("\n");
			}
		}
		s1.assign(av[2]);
		s2.assign(av[3]);
		out = replaceStrings(fileCon, s1, s2);
		infileName.append(".replace");
		output.open(infileName);
		output << out;
	}
}