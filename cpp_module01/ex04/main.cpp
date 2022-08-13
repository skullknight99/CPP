/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:24:29 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/13 11:16:09 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <streambuf>
#include <fstream>

std::string	replacestrings(std::string file, std::string s1, std::string s2)
{
	std::string		res;
	size_t	find_len = s1.size();
	size_t	pos, start = 0;
	if (s1.empty())
		return file;
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
	std::string		content;
	std::string		s1;
	std::string		s2;
	std::string		tmp;
	std::string		out;
	std::string		final;
	if (ac == 4)
	{
		file.open(av[1]);
		if (!file.is_open())
		{
			std::cerr << "Cannot open: " << av[1] << std::endl;
			return (1);
		}
		if (file.peek() == EOF)
		{
			std::cerr << "Empty file\n";
			return(2);
		}
		s1.assign(av[2]);
		s2.assign(av[3]);
		std::ofstream newfile(std::string(av[1]) + ".replace");
		if (!newfile)
		{
			std::cerr << "Cannot open or create: " << std::string(av[1]) + ".replace" << std::endl;
			return (3);
		}
		getline(file, out, '\0');
		final = replacestrings(out, s1, s2);
		newfile << final;
	}
	else
	{
		std::cerr << "number of arguments required is 4 including executable.\n";
		return (4);
	}
	return (0);
}