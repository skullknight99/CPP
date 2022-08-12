/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:16:39 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/12 11:22:15 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl		Taylor;
		std::string	level;
		level.assign(av[1]);
		Taylor.complain(level);
	}
	else
		std::cout << "only one arg required\n";
	return (0);
}