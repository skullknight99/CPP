/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:46:09 by acmaghou          #+#    #+#             */
/*   Updated: 2022/07/21 07:36:17 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for(int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
			std::cout << (char) toupper(av[i][j]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}