/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:24:29 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/11 09:33:34 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <streambuf>
#include <fstream>

using namespace	std;

string	replaceStrings(string file, string s1, string s2)
{
	string		res;
	size_t	find_len = s1.size();
	size_t	pos, start = 0;
	if (s1.empty())
		return file;
	while(string::npos != (pos = file.find(s1, start)))
	{
		res.append(file, start, pos - start);
		res.append(s2);
		start = pos + find_len;
	}
	res.append(file, start, string::npos);
	return res;
}

int	main(int ac, char **av)
{
	ifstream	file;
	string		content;
	string		s1;
	string		s2;
	string		tmp;
	string		out;
	string		final;
	if (ac == 4)
	{
		file.open(av[1]);
		if (!file.is_open())
		{
			cerr << "Cannot open: " << av[1] << endl;
			return (1);
		}
		if (file.peek() == EOF)
		{
			cerr << "Empty file\n";
			return(2);
		}
		s1.assign(av[2]);
		s2.assign(av[3]);
		ofstream newfile(string(av[1]) + ".replace");
		if (!newfile)
		{
			cerr << "Cannot open or create: " << string(av[1]) + ".replace" << endl;
			return (3);
		}
		getline(file, out, '\0');
		final = replaceStrings(out, s1, s2);
		newfile << final;
	}
	else
	{
		cerr << "number of arguments required is 4 including executable.\n";
		return (4);
	}
	return (0);
}