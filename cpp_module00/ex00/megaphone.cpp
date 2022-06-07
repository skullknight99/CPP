/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:46:09 by acmaghou          #+#    #+#             */
/*   Updated: 2022/06/07 14:05:15 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		for(int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
				cout << (char) toupper(av[i][j]);
			if (i != ac - 1)
				cout << " ";
			else
				cout << "\n";
		}
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}